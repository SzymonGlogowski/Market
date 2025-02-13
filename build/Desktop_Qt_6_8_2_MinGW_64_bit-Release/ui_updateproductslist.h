/********************************************************************************
** Form generated from reading UI file 'updateproductslist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPRODUCTSLIST_H
#define UI_UPDATEPRODUCTSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_UpdateProductsList
{
public:
    QDialogButtonBox *btnOKCancel;
    QComboBox *cbxProductType;
    QLabel *lblProductType;
    QLabel *lblProductName;
    QLabel *lblProductPrice;
    QDoubleSpinBox *sbxProductPrice;
    QLineEdit *txtProductName;

    void setupUi(QDialog *UpdateProductsList)
    {
        if (UpdateProductsList->objectName().isEmpty())
            UpdateProductsList->setObjectName("UpdateProductsList");
        UpdateProductsList->resize(232, 143);
        btnOKCancel = new QDialogButtonBox(UpdateProductsList);
        btnOKCancel->setObjectName("btnOKCancel");
        btnOKCancel->setGeometry(QRect(10, 100, 211, 32));
        btnOKCancel->setOrientation(Qt::Orientation::Horizontal);
        btnOKCancel->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        cbxProductType = new QComboBox(UpdateProductsList);
        cbxProductType->addItem(QString());
        cbxProductType->addItem(QString());
        cbxProductType->addItem(QString());
        cbxProductType->setObjectName("cbxProductType");
        cbxProductType->setGeometry(QRect(120, 10, 101, 22));
        lblProductType = new QLabel(UpdateProductsList);
        lblProductType->setObjectName("lblProductType");
        lblProductType->setGeometry(QRect(10, 10, 91, 21));
        lblProductName = new QLabel(UpdateProductsList);
        lblProductName->setObjectName("lblProductName");
        lblProductName->setGeometry(QRect(10, 40, 91, 21));
        lblProductPrice = new QLabel(UpdateProductsList);
        lblProductPrice->setObjectName("lblProductPrice");
        lblProductPrice->setGeometry(QRect(10, 70, 91, 21));
        sbxProductPrice = new QDoubleSpinBox(UpdateProductsList);
        sbxProductPrice->setObjectName("sbxProductPrice");
        sbxProductPrice->setGeometry(QRect(120, 70, 101, 22));
        sbxProductPrice->setMaximum(99999.990000000005239);
        sbxProductPrice->setSingleStep(0.010000000000000);
        txtProductName = new QLineEdit(UpdateProductsList);
        txtProductName->setObjectName("txtProductName");
        txtProductName->setGeometry(QRect(120, 40, 101, 22));

        retranslateUi(UpdateProductsList);
        QObject::connect(btnOKCancel, &QDialogButtonBox::accepted, UpdateProductsList, qOverload<>(&QDialog::accept));
        QObject::connect(btnOKCancel, &QDialogButtonBox::rejected, UpdateProductsList, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UpdateProductsList);
    } // setupUi

    void retranslateUi(QDialog *UpdateProductsList)
    {
        UpdateProductsList->setWindowTitle(QCoreApplication::translate("UpdateProductsList", "Update Producst List", nullptr));
        cbxProductType->setItemText(0, QCoreApplication::translate("UpdateProductsList", "Fruits", nullptr));
        cbxProductType->setItemText(1, QCoreApplication::translate("UpdateProductsList", "Vegetables", nullptr));
        cbxProductType->setItemText(2, QCoreApplication::translate("UpdateProductsList", "Nuts", nullptr));

        lblProductType->setText(QCoreApplication::translate("UpdateProductsList", "Product type:", nullptr));
        lblProductName->setText(QCoreApplication::translate("UpdateProductsList", "Product name:", nullptr));
        lblProductPrice->setText(QCoreApplication::translate("UpdateProductsList", "Product price:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateProductsList: public Ui_UpdateProductsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPRODUCTSLIST_H
