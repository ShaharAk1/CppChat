#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QTimer>
#include <QWidget>
#include <QVBoxLayout>
#include "main.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // ------------------- Server Window -------------------
    QMainWindow serverWindow;
    serverWindow.setWindowTitle("Server Window: Person1");

    // QTextEdit
    QTextEdit* serverText = new QTextEdit();
    serverText->setText("Person1: Waiting for messages...");
    serverText->setStyleSheet("background-color: #A8C9FF; color: blue; font-size:14pt; padding: 20px;");

    createChatStyle(serverWindow, serverText);
    serverWindow.show();

    // placement in screen
    QTimer::singleShot(0, [&serverWindow](){
        serverWindow.setGeometry(300, 100, 400, 500);
    });

    // messages
    QTimer serverTimer;
    QObject::connect(&serverTimer, &QTimer::timeout, [serverText](){
        serverText->append("Server: still running...");
    });
    serverTimer.start(1000);

    // ------------------- Client Window -------------------
    QMainWindow clientWindow;
    clientWindow.setWindowTitle("Client Window: Person 2");

    QTextEdit* clientText = new QTextEdit();
    clientText->setText("Person2: Ready to send messages...");
    clientText->setStyleSheet("background-color: #A8C9FF; color: darkred; font-size:14pt; padding: 20px;");
    clientWindow.setCentralWidget(clientText);

    createChatStyle(clientWindow, clientText);
    clientWindow.show();

    //placement in screen
    QTimer::singleShot(0, [&clientWindow](){
        clientWindow.setGeometry(800, 100, 400, 500);
    });

    // messages
    QTimer clientTimer;
    QObject::connect(&clientTimer, &QTimer::timeout, [clientText](){
        clientText->append("Client: still running...");
    });
    clientTimer.start(1000);

    return app.exec();
}

void createChatStyle(QMainWindow& window , QTextEdit* text) {

    // central widget ו-layout
    QWidget *central = new QWidget(&window);
    QVBoxLayout *layout = new QVBoxLayout(central);

    // top panel
    QWidget *square = new QWidget();
    square->setFixedSize(400, 50);
    square->setStyleSheet("background-color: #798ABA;");

    layout->addWidget(square);     // הריבוע למעלה
    layout->addWidget(text);

    window.setCentralWidget(central);
}