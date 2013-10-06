/********************************************************************************
** Form generated from reading UI file 'shelfdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHELFDIALOG_H
#define UI_SHELFDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_shelfdialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *xEdit;
    QLineEdit *yEdit;
    QComboBox *typeBox;
    QTextEdit *desEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *shelfdialog)
    {
        if (shelfdialog->objectName().isEmpty())
            shelfdialog->setObjectName(QString::fromUtf8("shelfdialog"));
        shelfdialog->resize(608, 444);
        verticalLayout = new QVBoxLayout(shelfdialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameEdit = new QLineEdit(shelfdialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xEdit = new QLineEdit(shelfdialog);
        xEdit->setObjectName(QString::fromUtf8("xEdit"));

        horizontalLayout->addWidget(xEdit);

        yEdit = new QLineEdit(shelfdialog);
        yEdit->setObjectName(QString::fromUtf8("yEdit"));

        horizontalLayout->addWidget(yEdit);


        verticalLayout->addLayout(horizontalLayout);

        typeBox = new QComboBox(shelfdialog);
        typeBox->setObjectName(QString::fromUtf8("typeBox"));

        verticalLayout->addWidget(typeBox);

        desEdit = new QTextEdit(shelfdialog);
        desEdit->setObjectName(QString::fromUtf8("desEdit"));

        verticalLayout->addWidget(desEdit);

        buttonBox = new QDialogButtonBox(shelfdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(shelfdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), shelfdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), shelfdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(shelfdialog);
    } // setupUi

    void retranslateUi(QDialog *shelfdialog)
    {
        shelfdialog->setWindowTitle(QApplication::translate("shelfdialog", "Dialog", 0, QApplication::UnicodeUTF8));
        nameEdit->setText(QApplication::translate("shelfdialog", "\350\264\247\346\236\266\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        xEdit->setText(QApplication::translate("shelfdialog", "\346\240\217\346\225\260", 0, QApplication::UnicodeUTF8));
        yEdit->setText(QApplication::translate("shelfdialog", "\345\261\202\346\225\260", 0, QApplication::UnicodeUTF8));
        typeBox->clear();
        typeBox->insertItems(0, QStringList()
         << QApplication::translate("shelfdialog", "\345\217\214\350\276\271\346\250\252\345\220\221\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shelfdialog", "\345\217\214\350\276\271\347\272\265\345\220\221\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shelfdialog", "\345\215\225\350\276\271\346\234\235\345\214\227\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shelfdialog", "\345\215\225\350\276\271\346\234\235\345\215\227\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shelfdialog", "\345\215\225\350\276\271\346\234\235\350\245\277\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shelfdialog", "\345\215\225\350\276\271\346\234\235\344\270\234\350\264\247\346\236\266", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class shelfdialog: public Ui_shelfdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHELFDIALOG_H
