#include "dialog.h"
#include "ui_dialog.h"
#include "dialogplaylist.h"
#include "dialogreview.h"





Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
//Go to create a playlist UI
void Dialog::on_pushButton_clicked()
{
    DialogPlaylist playdialog ;
    playdialog.setModal(true);
    playdialog.exec();
}


//Go to review UI
void Dialog::on_pushButton_2_clicked()
{

    DialogReview revDialog ;
    revDialog .setModal(true);
    revDialog .exec();
}

