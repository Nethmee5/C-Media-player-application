#include "dialogplaylist.h"
#include "ui_dialogplaylist.h"
#include "QFileDialog"

DialogPlaylist::DialogPlaylist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPlaylist)
{
    ui->setupUi(this);
}

DialogPlaylist::~DialogPlaylist()
{
    delete ui;
}

//Select media from files
void DialogPlaylist::on_pushButton_3_clicked()
{

   QString filename= QFileDialog::getOpenFileName(this, "Choose File");


}

