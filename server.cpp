// #include <QApplication>
// #include <QMainWindow>
// #include <QTextEdit>
// #include <QTimer>
//
// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);
//
//     QMainWindow window;
//     window.setWindowTitle("Server Window");
//
//     QTextEdit* text = new QTextEdit();
//     text->setText("Server: Waiting for messages...");
//     text->setStyleSheet("background-color: lightyellow; color: blue; font-size:14pt;");
//     window.setCentralWidget(text);
//
//     window.show();
//
//
//     QTimer::singleShot(0, [&window](){
//         window.setGeometry(200, 150, 800, 400);
//     });
//
//     //updates every sec
//     QTimer timer;
//     QObject::connect(&timer, &QTimer::timeout, [text](){
//         text->append("Server: still running...");
//     });
//     timer.start(1000);
//
//     return app.exec();
// }

#include "server.h"
#include "./ui_server.h"

server::server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::server)
{
    ui->setupUi(this);
}

server::~server()
{
    delete ui;
}
