#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // ------------------- Server Window -------------------
    QMainWindow serverWindow;
    serverWindow.setWindowTitle("Server Window");

    QTextEdit* serverText = new QTextEdit();
    serverText->setText("Server: Waiting for messages...");
    serverText->setStyleSheet("background-color: lightyellow; color: blue; font-size:14pt;");
    serverWindow.setCentralWidget(serverText);

    serverWindow.show();

    // placement in screen
    QTimer::singleShot(0, [&serverWindow](){
        serverWindow.setGeometry(100, 100, 800, 400);
    });

    // messages
    QTimer serverTimer;
    QObject::connect(&serverTimer, &QTimer::timeout, [serverText](){
        serverText->append("Server: still running...");
    });
    serverTimer.start(1000);

    // ------------------- Client Window -------------------
    QMainWindow clientWindow;
    clientWindow.setWindowTitle("Client Window");

    QTextEdit* clientText = new QTextEdit();
    clientText->setText("Client: Ready to send messages...");
    clientText->setStyleSheet("background-color: lightblue; color: darkred; font-size:14pt;");
    clientWindow.setCentralWidget(clientText);

    clientWindow.show();

    //placement in screen
    QTimer::singleShot(0, [&clientWindow](){
        clientWindow.setGeometry(950, 100, 800, 400);
    });

    // messages
    QTimer clientTimer;
    QObject::connect(&clientTimer, &QTimer::timeout, [clientText](){
        clientText->append("Client: still running...");
    });
    clientTimer.start(1000);

    return app.exec();
}