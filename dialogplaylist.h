#ifndef DIALOGPLAYLIST_H
#define DIALOGPLAYLIST_H

#include <QDialog>

namespace Ui {
class DialogPlaylist;
}

class DialogPlaylist : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPlaylist(QWidget *parent = nullptr);
    ~DialogPlaylist();

private slots:

    void on_pushButton_3_clicked();

private:
    Ui::DialogPlaylist *ui;

    int mnSelected = -1;
};

#endif // DIALOGPLAYLIST_H
