/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabProducts;
    QWidget *tabFruits;
    QTableWidget *tblFruits;
    QWidget *tabVegetables;
    QTableWidget *tblVegetables;
    QWidget *tabNuts;
    QTableWidget *tblNuts;
    QPushButton *btnAddProduct;
    QTableWidget *tblReceipt;
    QPushButton *btnRemoveProduct;
    QLabel *lblFinalPrice;
    QLabel *lblPrice;
    QLabel *lblPLN;
    QPushButton *btnClearProducts;
    QPushButton *btnUpdateProductsList;
    QTableWidget *tableWidget;
    QPushButton *btnExitProgram;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(724, 515);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabProducts = new QTabWidget(centralwidget);
        tabProducts->setObjectName("tabProducts");
        tabProducts->setGeometry(QRect(460, 10, 251, 351));
        tabFruits = new QWidget();
        tabFruits->setObjectName("tabFruits");
        tblFruits = new QTableWidget(tabFruits);
        if (tblFruits->columnCount() < 2)
            tblFruits->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblFruits->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblFruits->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tblFruits->rowCount() < 8)
            tblFruits->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblFruits->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblFruits->setItem(0, 1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblFruits->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblFruits->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblFruits->setItem(2, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblFruits->setItem(2, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblFruits->setItem(3, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblFruits->setItem(3, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tblFruits->setItem(4, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tblFruits->setItem(4, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tblFruits->setItem(5, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tblFruits->setItem(5, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tblFruits->setItem(6, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tblFruits->setItem(6, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tblFruits->setItem(7, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tblFruits->setItem(7, 1, __qtablewidgetitem17);
        tblFruits->setObjectName("tblFruits");
        tblFruits->setGeometry(QRect(10, 10, 231, 301));
        tabProducts->addTab(tabFruits, QString());
        tabVegetables = new QWidget();
        tabVegetables->setObjectName("tabVegetables");
        tblVegetables = new QTableWidget(tabVegetables);
        if (tblVegetables->columnCount() < 2)
            tblVegetables->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tblVegetables->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tblVegetables->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        if (tblVegetables->rowCount() < 8)
            tblVegetables->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tblVegetables->setItem(0, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tblVegetables->setItem(0, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tblVegetables->setItem(1, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tblVegetables->setItem(1, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tblVegetables->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tblVegetables->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tblVegetables->setItem(3, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tblVegetables->setItem(3, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tblVegetables->setItem(4, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tblVegetables->setItem(4, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tblVegetables->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tblVegetables->setItem(5, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tblVegetables->setItem(6, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tblVegetables->setItem(6, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tblVegetables->setItem(7, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tblVegetables->setItem(7, 1, __qtablewidgetitem35);
        tblVegetables->setObjectName("tblVegetables");
        tblVegetables->setGeometry(QRect(10, 10, 231, 301));
        tabProducts->addTab(tabVegetables, QString());
        tabNuts = new QWidget();
        tabNuts->setObjectName("tabNuts");
        tblNuts = new QTableWidget(tabNuts);
        if (tblNuts->columnCount() < 2)
            tblNuts->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tblNuts->setHorizontalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tblNuts->setHorizontalHeaderItem(1, __qtablewidgetitem37);
        if (tblNuts->rowCount() < 3)
            tblNuts->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tblNuts->setItem(0, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tblNuts->setItem(0, 1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tblNuts->setItem(1, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tblNuts->setItem(1, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tblNuts->setItem(2, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tblNuts->setItem(2, 1, __qtablewidgetitem43);
        tblNuts->setObjectName("tblNuts");
        tblNuts->setGeometry(QRect(10, 10, 231, 301));
        tabProducts->addTab(tabNuts, QString());
        btnAddProduct = new QPushButton(centralwidget);
        btnAddProduct->setObjectName("btnAddProduct");
        btnAddProduct->setGeometry(QRect(590, 370, 121, 24));
        tblReceipt = new QTableWidget(centralwidget);
        if (tblReceipt->columnCount() < 4)
            tblReceipt->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tblReceipt->setHorizontalHeaderItem(0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tblReceipt->setHorizontalHeaderItem(1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tblReceipt->setHorizontalHeaderItem(2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tblReceipt->setHorizontalHeaderItem(3, __qtablewidgetitem47);
        tblReceipt->setObjectName("tblReceipt");
        tblReceipt->setGeometry(QRect(10, 10, 441, 351));
        tblReceipt->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        btnRemoveProduct = new QPushButton(centralwidget);
        btnRemoveProduct->setObjectName("btnRemoveProduct");
        btnRemoveProduct->setGeometry(QRect(460, 370, 121, 24));
        lblFinalPrice = new QLabel(centralwidget);
        lblFinalPrice->setObjectName("lblFinalPrice");
        lblFinalPrice->setGeometry(QRect(350, 370, 71, 21));
        lblFinalPrice->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lblFinalPrice->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lblPrice = new QLabel(centralwidget);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(220, 370, 131, 21));
        lblPLN = new QLabel(centralwidget);
        lblPLN->setObjectName("lblPLN");
        lblPLN->setGeometry(QRect(420, 370, 31, 21));
        lblPLN->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        btnClearProducts = new QPushButton(centralwidget);
        btnClearProducts->setObjectName("btnClearProducts");
        btnClearProducts->setGeometry(QRect(460, 400, 121, 24));
        btnUpdateProductsList = new QPushButton(centralwidget);
        btnUpdateProductsList->setObjectName("btnUpdateProductsList");
        btnUpdateProductsList->setGeometry(QRect(590, 400, 121, 24));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem51);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem52);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 400, 441, 61));
        btnExitProgram = new QPushButton(centralwidget);
        btnExitProgram->setObjectName("btnExitProgram");
        btnExitProgram->setGeometry(QRect(590, 430, 121, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 724, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabProducts->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Greengrocers", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblFruits->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblFruits->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Price per kg", nullptr));

        const bool __sortingEnabled = tblFruits->isSortingEnabled();
        tblFruits->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tblFruits->item(0, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Apples", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblFruits->item(0, 1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "3.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblFruits->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Bananas", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblFruits->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "7.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblFruits->item(2, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Oranges", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tblFruits->item(2, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "7.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tblFruits->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Lemons", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tblFruits->item(3, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "8.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tblFruits->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Plums", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tblFruits->item(4, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "10.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tblFruits->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Pears", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tblFruits->item(5, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "6.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tblFruits->item(6, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Watermelons", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tblFruits->item(6, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "5.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tblFruits->item(7, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Cherries", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tblFruits->item(7, 1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "30.99", nullptr));
        tblFruits->setSortingEnabled(__sortingEnabled);

        tabProducts->setTabText(tabProducts->indexOf(tabFruits), QCoreApplication::translate("MainWindow", "Fruits", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tblVegetables->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Nowa kolumna", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tblVegetables->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Price per kg", nullptr));

        const bool __sortingEnabled1 = tblVegetables->isSortingEnabled();
        tblVegetables->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem20 = tblVegetables->item(0, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Carrots", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tblVegetables->item(0, 1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "3.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tblVegetables->item(1, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Parsleys", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tblVegetables->item(1, 1);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "10.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tblVegetables->item(2, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Celerys", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tblVegetables->item(2, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "9.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tblVegetables->item(3, 0);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Leeks", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tblVegetables->item(3, 1);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "12.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tblVegetables->item(4, 0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "Potatoes", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tblVegetables->item(4, 1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "2.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tblVegetables->item(5, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Beetroots", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tblVegetables->item(5, 1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "3.49", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tblVegetables->item(6, 0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Onions", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tblVegetables->item(6, 1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "3.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tblVegetables->item(7, 0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "Cucumbers", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tblVegetables->item(7, 1);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "13.49", nullptr));
        tblVegetables->setSortingEnabled(__sortingEnabled1);

        tabProducts->setTabText(tabProducts->indexOf(tabVegetables), QCoreApplication::translate("MainWindow", "Vegetables", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tblNuts->horizontalHeaderItem(0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "Nowa kolumna", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tblNuts->horizontalHeaderItem(1);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "Price per kg", nullptr));

        const bool __sortingEnabled2 = tblNuts->isSortingEnabled();
        tblNuts->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem38 = tblNuts->item(0, 0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "Walnuts", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tblNuts->item(0, 1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "21.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tblNuts->item(1, 0);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "Chestnuts", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tblNuts->item(1, 1);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "19.99", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tblNuts->item(2, 0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "Peanuts", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tblNuts->item(2, 1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "16.99", nullptr));
        tblNuts->setSortingEnabled(__sortingEnabled2);

        tabProducts->setTabText(tabProducts->indexOf(tabNuts), QCoreApplication::translate("MainWindow", "Nuts", nullptr));
        btnAddProduct->setText(QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tblReceipt->horizontalHeaderItem(0);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tblReceipt->horizontalHeaderItem(1);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "Price per kg", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tblReceipt->horizontalHeaderItem(2);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tblReceipt->horizontalHeaderItem(3);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        btnRemoveProduct->setText(QCoreApplication::translate("MainWindow", "Remove Product", nullptr));
        lblFinalPrice->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblPrice->setText(QCoreApplication::translate("MainWindow", "Price for everything:", nullptr));
        lblPLN->setText(QCoreApplication::translate("MainWindow", "PLN", nullptr));
        btnClearProducts->setText(QCoreApplication::translate("MainWindow", "Clear Products", nullptr));
        btnUpdateProductsList->setText(QCoreApplication::translate("MainWindow", "Update Products List", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "Adres", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "Numer Telefonu", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "Dane", nullptr));
        btnExitProgram->setText(QCoreApplication::translate("MainWindow", "Exit Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
