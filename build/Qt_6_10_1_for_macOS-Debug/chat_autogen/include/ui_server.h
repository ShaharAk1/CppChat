/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QAction *actionQuit;
    QWidget *window;
    QVBoxLayout *verticalLayout;
    QFrame *titleBar;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QScrollArea *chat;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QFrame *sendBar;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName("server");
        server->setEnabled(true);
        server->resize(400, 510);
        server->setBaseSize(QSize(400, 500));
        server->setStyleSheet(QString::fromUtf8("background-color: #A8C9FF; \n"
"color: darkred; \n"
"font-size:14pt; \n"
"padding: 20px;"));
        actionQuit = new QAction(server);
        actionQuit->setObjectName("actionQuit");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actionQuit->setIcon(icon);
        actionQuit->setMenuRole(QAction::MenuRole::QuitRole);
        window = new QWidget(server);
        window->setObjectName("window");
        window->setStyleSheet(QString::fromUtf8("background: #F7FCFF;"));
        verticalLayout = new QVBoxLayout(window);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleBar = new QFrame(window);
        titleBar->setObjectName("titleBar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy);
        titleBar->setMinimumSize(QSize(400, 60));
        titleBar->setAutoFillBackground(false);
        titleBar->setStyleSheet(QString::fromUtf8("background-color:  #001C30;\n"
"padding: 0;"));
        titleBar->setFrameShape(QFrame::Shape::NoFrame);
        titleBar->setFrameShadow(QFrame::Shadow::Plain);
        titleBar->setLineWidth(20);
        verticalLayout_2 = new QVBoxLayout(titleBar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(12, 12, 12, 12);
        title = new QLabel(titleBar);
        title->setObjectName("title");
        title->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
        title->setBaseSize(QSize(400, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: white;"));
        title->setTextFormat(Qt::TextFormat::PlainText);
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        title->setWordWrap(false);
        title->setMargin(0);

        verticalLayout_2->addWidget(title);


        verticalLayout->addWidget(titleBar);

        chat = new QScrollArea(window);
        chat->setObjectName("chat");
        sizePolicy.setHeightForWidth(chat->sizePolicy().hasHeightForWidth());
        chat->setSizePolicy(sizePolicy);
        chat->setMinimumSize(QSize(400, 380));
        chat->setAutoFillBackground(false);
        chat->setStyleSheet(QString::fromUtf8("color: #001C30;"));
        chat->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        chat->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        chat->setWidgetResizable(true);
        chat->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 342, 338));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 200, 30));
        label->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 5px;\n"
"border: 1px solid #E6F4FC;"));
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 200, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 5px;\n"
"border: 1px solid #E6F4FC;"));
        label_2->setWordWrap(true);
        chat->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(chat);

        sendBar = new QFrame(window);
        sendBar->setObjectName("sendBar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sendBar->sizePolicy().hasHeightForWidth());
        sendBar->setSizePolicy(sizePolicy2);
        sendBar->setMinimumSize(QSize(400, 80));
        sendBar->setBaseSize(QSize(440, 70));
        sendBar->setAutoFillBackground(false);
        sendBar->setStyleSheet(QString::fromUtf8("background-color: #001C30;"));
        sendBar->setFrameShape(QFrame::Shape::NoFrame);
        sendBar->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(sendBar);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout->setContentsMargins(6, 0, 6, 0);
        lineEdit = new QLineEdit(sendBar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);
        lineEdit->setMinimumSize(QSize(300, 40));
        QFont font1;
        font1.setPointSize(14);
        font1.setKerning(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 5px;\n"
"padding: 10px 15px 10px 15px;\n"
"color: black;\n"
""));
        lineEdit->setFrame(true);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(sendBar);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setBaseSize(QSize(40, 40));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/sendicon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        pushButton->setAutoRepeatDelay(0);
        pushButton->setAutoRepeatInterval(0);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(sendBar);

        server->setCentralWidget(window);

        retranslateUi(server);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QCoreApplication::translate("server", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("server", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("server", "Quit the application", nullptr));
#endif // QT_CONFIG(tooltip)
        title->setText(QCoreApplication::translate("server", "Chatting with: Person1", nullptr));
        label->setText(QCoreApplication::translate("server", "gvkkh", nullptr));
        label_2->setText(QCoreApplication::translate("server", "TextLabel", nullptr));
        lineEdit->setText(QCoreApplication::translate("server", "write somthing here", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
