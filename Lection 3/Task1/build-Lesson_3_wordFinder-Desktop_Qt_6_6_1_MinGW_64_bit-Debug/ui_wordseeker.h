/********************************************************************************
** Form generated from reading UI file 'wordseeker.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSEEKER_H
#define UI_WORDSEEKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordSeeker
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLineEdit *t_before;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLineEdit *e_key;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QTextEdit *t_after;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WordSeeker)
    {
        if (WordSeeker->objectName().isEmpty())
            WordSeeker->setObjectName("WordSeeker");
        WordSeeker->resize(382, 391);
        centralwidget = new QWidget(WordSeeker);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_1 = new QLabel(groupBox);
        label_1->setObjectName("label_1");

        verticalLayout->addWidget(label_1);

        t_before = new QLineEdit(groupBox);
        t_before->setObjectName("t_before");

        verticalLayout->addWidget(t_before);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        e_key = new QLineEdit(groupBox);
        e_key->setObjectName("e_key");

        verticalLayout->addWidget(e_key);

        verticalSpacer_3 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        t_after = new QTextEdit(groupBox);
        t_after->setObjectName("t_after");

        verticalLayout->addWidget(t_after);

        verticalSpacer = new QSpacerItem(83, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        horizontalSpacer = new QSpacerItem(341, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(groupBox);

        WordSeeker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WordSeeker);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 382, 22));
        WordSeeker->setMenuBar(menubar);
        statusbar = new QStatusBar(WordSeeker);
        statusbar->setObjectName("statusbar");
        WordSeeker->setStatusBar(statusbar);

        retranslateUi(WordSeeker);

        QMetaObject::connectSlotsByName(WordSeeker);
    } // setupUi

    void retranslateUi(QMainWindow *WordSeeker)
    {
        WordSeeker->setWindowTitle(QCoreApplication::translate("WordSeeker", "WordSeeker", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WordSeeker", "\320\250\320\270\321\204\321\200\320\260\321\202\320\276\321\200/\320\224\320\265\321\210\320\270\321\204\321\200\320\260\321\202\320\276\321\200", nullptr));
        label_1->setText(QCoreApplication::translate("WordSeeker", "\320\222\320\260\321\210 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("WordSeeker", "\320\232\320\273\321\216\321\207", nullptr));
        label_3->setText(QCoreApplication::translate("WordSeeker", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        radioButton_2->setText(QCoreApplication::translate("WordSeeker", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton->setText(QCoreApplication::translate("WordSeeker", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordSeeker: public Ui_WordSeeker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSEEKER_H
