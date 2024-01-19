#include "dialogreview.h"
#include "ui_dialogreview.h"

DialogReview::DialogReview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogReview)
{
    ui->setupUi(this);
}

DialogReview::~DialogReview()
{
    delete ui;
}
//Adding reviews
void DialogReview::on_pushButton_clicked()
{
   QString str = ui->lineEdit->text();

   if(str == "")
       return;

   ui->listWidget->addItem(str);
}



//Removing reviews
void DialogReview::on_pushButton_2_clicked()
{
    if(mnSelected != -1){
        QListWidgetItem *it = ui->listWidget->takeItem(mnSelected);
        delete it;
   ui->listWidget->setCurrentRow(-1);
    }

}


void DialogReview::on_listWidget_currentRowChanged(int currentRow)
{
    mnSelected=currentRow;
}



