/********************************************************************************
** Form generated from reading UI file 'qtdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMO_H
#define UI_QTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtdemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtdemoClass)
    {
        if (qtdemoClass->objectName().isEmpty())
            qtdemoClass->setObjectName(QStringLiteral("qtdemoClass"));
        qtdemoClass->resize(600, 400);
        menuBar = new QMenuBar(qtdemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        qtdemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtdemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qtdemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qtdemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qtdemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qtdemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qtdemoClass->setStatusBar(statusBar);

        retranslateUi(qtdemoClass);

        QMetaObject::connectSlotsByName(qtdemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtdemoClass)
    {
        qtdemoClass->setWindowTitle(QApplication::translate("qtdemoClass", "qtdemo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtdemoClass: public Ui_qtdemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMO_H
