/********************************************************************************
** Form generated from reading UI file 'housedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSEDIALOG_H
#define UI_HOUSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_housedialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *widthEdit;
    QLineEdit *heightEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *xposEdit;
    QLineEdit *yposEdit;
    QTextEdit *desEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *housedialog)
    {
        if (housedialog->objectName().isEmpty())
            housedialog->setObjectName(QString::fromUtf8("housedialog"));
        housedialog->resize(536, 413);
        verticalLayout = new QVBoxLayout(housedialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameEdit = new QLineEdit(housedialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widthEdit = new QLineEdit(housedialog);
        widthEdit->setObjectName(QString::fromUtf8("widthEdit"));

        horizontalLayout_2->addWidget(widthEdit);

        heightEdit = new QLineEdit(housedialog);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));

        horizontalLayout_2->addWidget(heightEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xposEdit = new QLineEdit(housedialog);
        xposEdit->setObjectName(QString::fromUtf8("xposEdit"));

        horizontalLayout->addWidget(xposEdit);

        yposEdit = new QLineEdit(housedialog);
        yposEdit->setObjectName(QString::fromUtf8("yposEdit"));

        horizontalLayout->addWidget(yposEdit);


        verticalLayout->addLayout(horizontalLayout);

        desEdit = new QTextEdit(housedialog);
        desEdit->setObjectName(QString::fromUtf8("desEdit"));

        verticalLayout->addWidget(desEdit);

        buttonBox = new QDialogButtonBox(housedialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(housedialog);

        QMetaObject::connectSlotsByName(housedialog);
    } // setupUi

    void retranslateUi(QDialog *housedialog)
    {
        housedialog->setWindowTitle(QApplication::translate("housedialog", "Dialog", 0, QApplication::UnicodeUTF8));
        nameEdit->setText(QApplication::translate("housedialog", "\344\273\223\345\272\223\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        widthEdit->setText(QApplication::translate("housedialog", "\347\272\265\345\220\221\351\225\277\345\272\246", 0, QApplication::UnicodeUTF8));
        heightEdit->setText(QApplication::translate("housedialog", "\346\250\252\345\220\221\345\256\275\345\272\246", 0, QApplication::UnicodeUTF8));
        xposEdit->setText(QApplication::translate("housedialog", "\351\233\206\346\225\243\347\202\271\347\272\265\345\220\221\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        yposEdit->setText(QApplication::translate("housedialog", "\351\233\206\346\225\243\347\202\271\346\250\252\345\220\221\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        desEdit->setHtml(QApplication::translate("housedialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\273\223\345\272\223\346\217\217\350\277\260\343\200\202</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class housedialog: public Ui_housedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEDIALOG_H
