/********************************************************************************
** Form generated from reading UI file 'VoiceRecognitionApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICERECOGNITIONAPPLICATION_H
#define UI_VOICERECOGNITIONAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoiceRecognitionApplicationClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSlider *speedrate;
    QSlider *volume;
    QSlider *speedtone;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VoiceRecognitionApplicationClass)
    {
        if (VoiceRecognitionApplicationClass->objectName().isEmpty())
            VoiceRecognitionApplicationClass->setObjectName(QStringLiteral("VoiceRecognitionApplicationClass"));
        VoiceRecognitionApplicationClass->resize(671, 305);
        centralWidget = new QWidget(VoiceRecognitionApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 70, 451, 41));
        lineEdit->setMaxLength(512);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 70, 81, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 191, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 150, 51, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 150, 54, 12));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(330, 150, 69, 22));
        speedrate = new QSlider(centralWidget);
        speedrate->setObjectName(QStringLiteral("speedrate"));
        speedrate->setGeometry(QRect(90, 140, 121, 22));
        speedrate->setMaximum(9);
        speedrate->setOrientation(Qt::Horizontal);
        volume = new QSlider(centralWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setGeometry(QRect(90, 220, 121, 22));
        volume->setMaximum(9);
        volume->setOrientation(Qt::Horizontal);
        speedtone = new QSlider(centralWidget);
        speedtone->setObjectName(QStringLiteral("speedtone"));
        speedtone->setGeometry(QRect(90, 180, 121, 22));
        speedtone->setMaximum(9);
        speedtone->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 140, 31, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 180, 31, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 220, 31, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 150, 41, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 190, 75, 23));
        VoiceRecognitionApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VoiceRecognitionApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 23));
        VoiceRecognitionApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VoiceRecognitionApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VoiceRecognitionApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VoiceRecognitionApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VoiceRecognitionApplicationClass->setStatusBar(statusBar);

        retranslateUi(VoiceRecognitionApplicationClass);

        QMetaObject::connectSlotsByName(VoiceRecognitionApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *VoiceRecognitionApplicationClass)
    {
        VoiceRecognitionApplicationClass->setWindowTitle(QApplication::translate("VoiceRecognitionApplicationClass", "VoiceRecognitionApplication", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\346\222\255\346\224\276\345\275\223\345\211\215\346\226\207\345\255\227", Q_NULLPTR));
        label->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\350\257\267\350\276\223\345\205\245\350\246\201\346\222\255\346\224\276\347\232\204\346\226\207\345\255\227(\344\270\215\350\266\205\350\277\207512)", Q_NULLPTR));
        label_2->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\350\212\261\350\264\271\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\350\257\255\351\200\237", Q_NULLPTR));
        label_5->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\351\237\263\350\260\203", Q_NULLPTR));
        label_6->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\351\237\263\351\207\217", Q_NULLPTR));
        label_7->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\345\217\221\351\237\263\344\272\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("VoiceRecognitionApplicationClass", "\350\256\276\347\275\256\351\273\230\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VoiceRecognitionApplicationClass: public Ui_VoiceRecognitionApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICERECOGNITIONAPPLICATION_H
