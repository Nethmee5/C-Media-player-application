#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "QMediaPlayer"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//taking output video file to video widget
    player = new QMediaPlayer(this);
    mw = new QVideoWidget(this);
    player->setVideoOutput(mw);
    this->setCentralWidget(mw);

    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);

    ui->statusbar->addPermanentWidget(slider);


    connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    slider = new QSlider(this);

    slider->setOrientation(Qt::Horizontal);

    slider->setRange(-100, 100);

    slider->setValue(100);
    slider->size();

    ui->statusbar->addPermanentWidget(slider);



     connect(player,&QMediaPlayer::volumeChanged, slider, &QSlider::setValue);

     connect(slider,&QSlider::valueChanged, player,&QMediaPlayer::setVolume);


}

MainWindow::~MainWindow()
{
    delete ui;
}

//open media files
void MainWindow::on_actionOpen_triggered()
{
   QString filename = QFileDialog::getOpenFileName(this,"Open a file","","Video File(*.avi,*.mpg, *.mp4)");
   on_actionStop_triggered();

   player->setMedia(QUrl::fromLocalFile(filename));
   on_actionPlay_triggered();
}

//play video
void MainWindow::on_actionPlay_triggered()
{
   player->play();
   ui->statusbar->showMessage("playing");
}

//pause video
void MainWindow::on_actionPause_triggered()
{
    player->pause();
    ui->statusbar->showMessage("paused...");
}

//stop video
void MainWindow::on_actionStop_triggered()
{
    player->stop();
    ui->statusbar->showMessage("stopped");
}


//Go to dialog UI
void MainWindow::on_actionlogo_triggered()
{
    Dialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();
}




