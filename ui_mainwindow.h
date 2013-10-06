/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *initHouseButton;
    QRadioButton *houseButton;
    QRadioButton *shelfButton;
    QRadioButton *queryButton;
    QPushButton *house3dButton;
    QGraphicsView *houseView;
    QWidget *widget;
    QTabWidget *tab_5;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *initInputButton;
    QPushButton *finInputButton;
    QPushButton *massInputButton;
    QTableWidget *inputTable;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *initOutputButton;
    QPushButton *pathButton;
    QPushButton *finOutputButton;
    QPushButton *massOutputButton;
    QTableWidget *outputTable;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *keywordEdit;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *nameBox;
    QCheckBox *categoryBox;
    QCheckBox *desBox;
    QTableWidget *searchTable;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_2;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QWidget *tab_7;
    QTextEdit *textEdit_5;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton_3;
    QWidget *tab_8;
    QWidget *help;
    QTextBrowser *textBrowser_4;
    QPushButton *hp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(791, 506);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        initHouseButton = new QPushButton(centralWidget);
        initHouseButton->setObjectName(QString::fromUtf8("initHouseButton"));

        horizontalLayout->addWidget(initHouseButton);

        houseButton = new QRadioButton(centralWidget);
        houseButton->setObjectName(QString::fromUtf8("houseButton"));

        horizontalLayout->addWidget(houseButton);

        shelfButton = new QRadioButton(centralWidget);
        shelfButton->setObjectName(QString::fromUtf8("shelfButton"));

        horizontalLayout->addWidget(shelfButton);

        queryButton = new QRadioButton(centralWidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));

        horizontalLayout->addWidget(queryButton);


        verticalLayout->addLayout(horizontalLayout);

        house3dButton = new QPushButton(centralWidget);
        house3dButton->setObjectName(QString::fromUtf8("house3dButton"));
        house3dButton->setMinimumSize(QSize(382, 0));

        verticalLayout->addWidget(house3dButton, 0, Qt::AlignLeft|Qt::AlignBottom);

        houseView = new QGraphicsView(centralWidget);
        houseView->setObjectName(QString::fromUtf8("houseView"));

        verticalLayout->addWidget(houseView);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);


        horizontalLayout_2->addLayout(verticalLayout);

        tab_5 = new QTabWidget(centralWidget);
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        initInputButton = new QPushButton(tab);
        initInputButton->setObjectName(QString::fromUtf8("initInputButton"));

        horizontalLayout_3->addWidget(initInputButton);

        finInputButton = new QPushButton(tab);
        finInputButton->setObjectName(QString::fromUtf8("finInputButton"));

        horizontalLayout_3->addWidget(finInputButton);

        massInputButton = new QPushButton(tab);
        massInputButton->setObjectName(QString::fromUtf8("massInputButton"));

        horizontalLayout_3->addWidget(massInputButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        inputTable = new QTableWidget(tab);
        inputTable->setObjectName(QString::fromUtf8("inputTable"));

        verticalLayout_2->addWidget(inputTable);

        tab_5->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        initOutputButton = new QPushButton(tab_2);
        initOutputButton->setObjectName(QString::fromUtf8("initOutputButton"));

        horizontalLayout_4->addWidget(initOutputButton);

        pathButton = new QPushButton(tab_2);
        pathButton->setObjectName(QString::fromUtf8("pathButton"));

        horizontalLayout_4->addWidget(pathButton);

        finOutputButton = new QPushButton(tab_2);
        finOutputButton->setObjectName(QString::fromUtf8("finOutputButton"));

        horizontalLayout_4->addWidget(finOutputButton);

        massOutputButton = new QPushButton(tab_2);
        massOutputButton->setObjectName(QString::fromUtf8("massOutputButton"));

        horizontalLayout_4->addWidget(massOutputButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        outputTable = new QTableWidget(tab_2);
        outputTable->setObjectName(QString::fromUtf8("outputTable"));

        verticalLayout_3->addWidget(outputTable);

        tab_5->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        keywordEdit = new QLineEdit(tab_3);
        keywordEdit->setObjectName(QString::fromUtf8("keywordEdit"));

        horizontalLayout_6->addWidget(keywordEdit);

        searchButton = new QPushButton(tab_3);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout_6->addWidget(searchButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        nameBox = new QCheckBox(tab_3);
        nameBox->setObjectName(QString::fromUtf8("nameBox"));

        horizontalLayout_5->addWidget(nameBox);

        categoryBox = new QCheckBox(tab_3);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));

        horizontalLayout_5->addWidget(categoryBox);

        desBox = new QCheckBox(tab_3);
        desBox->setObjectName(QString::fromUtf8("desBox"));

        horizontalLayout_5->addWidget(desBox);


        verticalLayout_4->addLayout(horizontalLayout_5);

        searchTable = new QTableWidget(tab_3);
        searchTable->setObjectName(QString::fromUtf8("searchTable"));

        verticalLayout_4->addWidget(searchTable);

        tab_5->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 381, 411));
        tabWidget->setUsesScrollButtons(false);
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        textBrowser = new QTextBrowser(tab_6);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 20, 81, 21));
        textBrowser->setAutoFillBackground(true);
        textBrowser->setLineWidth(0);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit = new QTextEdit(tab_6);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(140, 20, 171, 21));
        textEdit->setAutoFillBackground(false);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2 = new QTextBrowser(tab_6);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 60, 81, 21));
        textBrowser_2->setAutoFillBackground(true);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2 = new QTextEdit(tab_6);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 60, 171, 21));
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3 = new QTextEdit(tab_6);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(140, 100, 171, 21));
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3 = new QTextBrowser(tab_6);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(40, 100, 81, 21));
        textBrowser_3->setAutoFillBackground(true);
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 210, 75, 23));
        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 260, 121, 23));
        tabWidget->addTab(tab_6, QString());
        textBrowser_3->raise();
        textBrowser_2->raise();
        textBrowser->raise();
        textEdit->raise();
        textEdit_2->raise();
        textEdit_3->raise();
        pushButton->raise();
        pushButton_4->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        textEdit_5 = new QTextEdit(tab_7);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(40, 110, 291, 21));
        textEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5 = new QTextBrowser(tab_7);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(40, 70, 291, 21));
        textBrowser_5->setAutoFillBackground(true);
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_3 = new QPushButton(tab_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 160, 111, 31));
        tabWidget->addTab(tab_7, QString());
        textBrowser_5->raise();
        textEdit_5->raise();
        pushButton_3->raise();
        tab_5->addTab(tab_4, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        help = new QWidget(tab_8);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(-1, -1, 381, 411));
        textBrowser_4 = new QTextBrowser(help);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(5, 1, 371, 381));
        hp = new QPushButton(help);
        hp->setObjectName(QString::fromUtf8("hp"));
        hp->setGeometry(QRect(270, 380, 91, 23));
        hp->setMinimumSize(QSize(91, 23));
        tab_5->addTab(tab_8, QString());

        horizontalLayout_2->addWidget(tab_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tab_5->setCurrentIndex(4);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        initHouseButton->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\344\273\223\345\272\223", 0, QApplication::UnicodeUTF8));
        houseButton->setText(QApplication::translate("MainWindow", "\344\273\223\345\272\223\344\277\256\346\224\271\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        shelfButton->setText(QApplication::translate("MainWindow", "\350\264\247\346\236\266\344\277\256\346\224\271\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        house3dButton->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\2133d\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8));
        initInputButton->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\351\241\271", 0, QApplication::UnicodeUTF8));
        finInputButton->setText(QApplication::translate("MainWindow", "\350\241\250\351\241\271\350\264\247\347\211\251\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        massInputButton->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        tab_5->setTabText(tab_5->indexOf(tab), QApplication::translate("MainWindow", "\350\264\247\347\211\251\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        initOutputButton->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\351\241\271", 0, QApplication::UnicodeUTF8));
        pathButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
        finOutputButton->setText(QApplication::translate("MainWindow", "\350\241\250\351\241\271\350\264\247\347\211\251\345\207\272\345\272\223", 0, QApplication::UnicodeUTF8));
        massOutputButton->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\345\207\272\345\272\223", 0, QApplication::UnicodeUTF8));
        tab_5->setTabText(tab_5->indexOf(tab_2), QApplication::translate("MainWindow", "\350\264\247\347\211\251\345\207\272\345\272\223", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("MainWindow", "\346\243\200\347\264\242\350\264\247\347\211\251", 0, QApplication::UnicodeUTF8));
        nameBox->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        categoryBox->setText(QApplication::translate("MainWindow", "\347\261\273\345\210\253", 0, QApplication::UnicodeUTF8));
        desBox->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260", 0, QApplication::UnicodeUTF8));
        tab_5->setTabText(tab_5->indexOf(tab_3), QApplication::translate("MainWindow", "\350\264\247\347\211\251\346\243\200\347\264\242", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">mysql\347\224\250\346\210\267\345\220\215</p></body></html>", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">root</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\257\206\347\240\201</p></body></html>", 0, QApplication::UnicodeUTF8));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3306</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\253\257\345\217\243</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\264\246\346\210\267", 0, QApplication::UnicodeUTF8));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">mydb</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\267\350\276\223\345\205\245\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        tab_5->setTabText(tab_5->indexOf(tab_4), QApplication::translate("MainWindow", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        hp->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251\346\226\207\346\241\243", 0, QApplication::UnicodeUTF8));
        tab_5->setTabText(tab_5->indexOf(tab_8), QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
