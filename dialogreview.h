#ifndef DIALOGREVIEW_H
#define DIALOGREVIEW_H

#include <QDialog>

namespace Ui {
class DialogReview;
}

class DialogReview : public QDialog
{
    Q_OBJECT

public:
    explicit DialogReview(QWidget *parent = nullptr);
    ~DialogReview();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_currentRowChanged(int currentRow);



private:
    Ui::DialogReview *ui;
    int mnSelected = -1;
};

#endif // DIALOGREVIEW_H
