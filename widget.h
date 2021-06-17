#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <qxmlstream.h>
#include <QAbstractItemModel>
#include <QXmlStreamWriter>
#include <QPainter>
#include <QPaintEvent>
#include <QBrush>
#include <QPalette>
#include <QPixmap>
#include <QTableWidget>
#include <QtMath>
#include <QTimer>
#include <QGraphicsItem>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlRecord>
#include <QMap>

namespace Ui
{
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    //graphics
    Ui::Widget *ui;
    //SQL
    QSqlDatabase db;

public:
    explicit Widget(QWidget *parent = 0);

    //info methods
    void messanger();
    int checker();

    ~Widget();

private slots:
    //mathematics methods
    void Chapter1(int tab);
    void Chapter2();
    void MAI();
    void probability();

    //buttons
    void on_B0_clicked();
    void on_B9_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B1_clicked();
    void on_B6_clicked();
    void on_B2_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B3_clicked();
};

#endif // WIDGET_H
