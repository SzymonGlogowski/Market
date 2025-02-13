/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QDialogButtonBox *btnOKCancel;
    QDoubleSpinBox *sbxWeight;
    QLabel *lblWeight;

    void setupUi(QDialog *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName("AddProduct");
        AddProduct->resize(242, 78);
        btnOKCancel = new QDialogButtonBox(AddProduct);
        btnOKCancel->setObjectName("btnOKCancel");
        btnOKCancel->setGeometry(QRect(10, 40, 221, 32));
        btnOKCancel->setOrientation(Qt::Orientation::Horizontal);
        btnOKCancel->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        sbxWeight = new QDoubleSpinBox(AddProduct);
        sbxWeight->setObjectName("sbxWeight");
        sbxWeight->setGeometry(QRect(111, 10, 121, 22));
        sbxWeight->setDecimals(3);
        sbxWeight->setMinimum(0.001000000000000);
        sbxWeight->setMaximum(100000.000000000000000);
        sbxWeight->setSingleStep(0.001000000000000);
        lblWeight = new QLabel(AddProduct);
        lblWeight->setObjectName("lblWeight");
        lblWeight->setGeometry(QRect(10, 10, 91, 21));

        retranslateUi(AddProduct);
        QObject::connect(btnOKCancel, &QDialogButtonBox::accepted, AddProduct, qOverload<>(&QDialog::accept));
        QObject::connect(btnOKCancel, &QDialogButtonBox::rejected, AddProduct, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QDialog *AddProduct)
    {
        AddProduct->setWindowTitle(QCoreApplication::translate("AddProduct", "Add Product", nullptr));
        lblWeight->setText(QCoreApplication::translate("AddProduct", "Weight:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
