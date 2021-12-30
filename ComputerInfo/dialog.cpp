#include "dialog.h"
#include "./ui_dialog.h"
#include <QSysInfo>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_disButton_clicked()
{
    QSysInfo info;
    ui->ABbuildLine->setText(info.buildAbi());
    ui->CPULine->setText(info.currentCpuArchitecture());
    ui->CbuildLine->setText(info.buildCpuArchitecture());
    ui->IDLine->setText(info.machineUniqueId());
    ui->hostLine->setText(info.machineHostName());
    ui->verLine->setText(info.productVersion());
    ui->typeLine->setText(info.productType());
    ui->nameLine->setText(info.prettyProductName());


}

