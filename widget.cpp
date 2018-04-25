#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setLineWidth(5);
    ui->label->setMidLineWidth(0);
    ui->label->resize(100,50);
    ui->label->setFrameShadow(QFrame::Raised);
    ui->label->setFrameShape(QFrame::Panel);
    ui->label_2->setPixmap(QPixmap("D:/qt/test8/untitled/123.jpg"));
    QMovie *movie = new QMovie("D:/qt/test8/untitled/233.gif");
    ui->label_2->setMovie(movie);
    movie->start();
    QString string = QWidget::fontMetrics().elidedText("123546454",Qt::ElideRight,50);
    qDebug()<<string;

    ui->lcdNumber->display("12'.");

    ui->pushButton->setText("&nihao");
    ui->pushButton->setIcon(QIcon("D:/qt/test8/untitled/123.jpg"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("test8/untitled/123.jpg"),tr("放大"));
    ui->pushButton_3->setMenu(menu);

    QValidator *validator = new QIntValidator(100,900,this);
    ui->lineEdit_2->setValidator(validator);

    QStringList list;
    list<<"18819431691"<<"15547461169"<<"19960309";
    QCompleter *completer = new QCompleter(list,this);
    ui->lineEdit_3->setCompleter(completer);

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setDisplayFormat("yyyy-MM-dd ddd hh:mm:ss:zzz A");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_toggled(bool checked)
{
    qDebug()<<checked;
}

void Widget::on_pushButton_clicked()
{
    qDebug()<<"clicked";
}

void Widget::on_lineEdit_returnPressed()
{
    qDebug()<<ui->lineEdit->text();
}

void Widget::on_lineEdit_2_returnPressed()
{
    qDebug()<<ui->lineEdit_2->text();
}
