#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Client Window");

    QTextEdit* text = new QTextEdit();
    text->setText("Client: Ready to send messages...");
    text->setStyleSheet("background-color: lightblue; color: darkred; font-size:14pt;");
    window.setCentralWidget(text);

    window.show();

    // הזזה וגודל אמין ב-Mac
    QTimer::singleShot(0, [&window](){
        window.setGeometry(1050, 150, 800, 400); // חלון בצד ימין
    });

    // הודעות לדוגמה כל שנייה
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, [text](){
        text->append("Client: still running...");
    });
    timer.start(1000);

    return app.exec();
}