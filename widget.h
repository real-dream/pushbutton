#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFrame>
#include <QDebug>
#include <QPixmap>
#include <QMovie>
#include <QMenu>
#include <QValidator>
#include <QCompleter>
#include <QStringList>
#include <QDateTime>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_toggled(bool checked);

    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
