/********************************************************************************
** Form generated from reading UI file 'CMakeQt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAKEQT_H
#define UI_CMAKEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_CMakeQt
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QSlider *horizontalSlider;
    QDial *dial;

    void setupUi(QDialog *CMakeQt)
    {
        if (CMakeQt->objectName().isEmpty())
            CMakeQt->setObjectName(QString::fromUtf8("CMakeQt"));
        CMakeQt->resize(474, 309);
        gridLayout = new QGridLayout(CMakeQt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber = new QLCDNumber(CMakeQt);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 4, 1, 1, 1);

        label = new QLabel(CMakeQt);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSlider = new QSlider(CMakeQt);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 4, 0, 1, 1);

        dial = new QDial(CMakeQt);
        dial->setObjectName(QString::fromUtf8("dial"));

        gridLayout->addWidget(dial, 1, 0, 2, 1);


        retranslateUi(CMakeQt);

        QMetaObject::connectSlotsByName(CMakeQt);
    } // setupUi

    void retranslateUi(QDialog *CMakeQt)
    {
        CMakeQt->setWindowTitle(QApplication::translate("CMakeQt", "CMakeQt", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMakeQt: public Ui_CMakeQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAKEQT_H
