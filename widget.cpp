#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/new/pixmap/pixmap/display.png");
    bkgnd = bkgnd.scaled(QSize(this->width(),this->height()), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->stackedWidget->setVisible(false);

}

/*!
 * \brief Widget::on_B0_clicked
 * on/off
 */
void Widget::on_B0_clicked()
{
    if (ui->stackedWidget->isVisible() == true)
    {
        ui->stackedWidget->setVisible(false);
    }
    else
    {
        ui->stackedWidget->setVisible(true);
        ui->stackedWidget->setCurrentIndex(0);
    }
}

/*!
 * \brief Widget::on_B9_clicked
 * NEXT BUTTON
 */
void Widget::on_B9_clicked()
{
    //без действий
    if(ui->stackedWidget->currentIndex() == 0||
            ui->stackedWidget->currentIndex() == 9||
            ui->stackedWidget->currentIndex() == 10||
            ui->stackedWidget->currentIndex() == 40)
    {

    }

    //часть 1
    if(     ui->stackedWidget->currentIndex() == 1||
            ui->stackedWidget->currentIndex() == 2||
            ui->stackedWidget->currentIndex() == 3||
            ui->stackedWidget->currentIndex() == 4||
            ui->stackedWidget->currentIndex() == 5||
            ui->stackedWidget->currentIndex() == 6||
            ui->stackedWidget->currentIndex() == 7)
    {
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
        Chapter1(ui->stackedWidget->currentIndex()+1);
    }
    else
    {
        //часть2
        if(     ui->stackedWidget->currentIndex()==19||
                ui->stackedWidget->currentIndex()==18||
                ui->stackedWidget->currentIndex()==17||
                ui->stackedWidget->currentIndex()==16||
                ui->stackedWidget->currentIndex()==15||
                ui->stackedWidget->currentIndex()==14||
                ui->stackedWidget->currentIndex()==13||
                ui->stackedWidget->currentIndex()==12||
                ui->stackedWidget->currentIndex()==11)
        {
            ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
            Chapter2();
        }
        else
        {
            //MAI
            if(
                    ui->stackedWidget->currentIndex()==37||
                    ui->stackedWidget->currentIndex()==36||
                    ui->stackedWidget->currentIndex()==35||
                    ui->stackedWidget->currentIndex()==34||
                    ui->stackedWidget->currentIndex()==33||
                    ui->stackedWidget->currentIndex()==32||
                    ui->stackedWidget->currentIndex()==31||
                    ui->stackedWidget->currentIndex()==30||
                    ui->stackedWidget->currentIndex()==29||
                    ui->stackedWidget->currentIndex()==28||
                    ui->stackedWidget->currentIndex()==27||
                    ui->stackedWidget->currentIndex()==26||
                    ui->stackedWidget->currentIndex()==25||
                    ui->stackedWidget->currentIndex()==24||
                    ui->stackedWidget->currentIndex()==23||
                    ui->stackedWidget->currentIndex()==22||
                    ui->stackedWidget->currentIndex()==21)
            {
                ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() +1);
                    MAI();
            }
        }
    }

    if(ui->stackedWidget->currentIndex() == 10)
    {
        if( ui->Graph_name->text() == "Марковская модель группового воздушного боя" )
        {
            ui->Graph->setPixmap(QPixmap (":/new/pixmap/pixmap/Рисунок1.png"));
            ui->Graph_name->setText("Кобинированная РГСН");
        }
        else
        {

            if(ui->Graph_name->text() == "Кобинированная РГСН" )
            {
                ui->Graph->setPixmap(QPixmap (":/new/pixmap/pixmap/Рисунок1_2.png"));
                ui->Graph_name->setText("Активная ГСН");
            }
            else
            {
                if(ui->Graph_name->text() == "Активная ГСН")
                {
                    ui->Graph->setPixmap(QPixmap (":/new/pixmap/pixmap/Рисунок1_3.png"));
                    ui->Graph_name->setText("Пассивная ГСН");
                }
                else
                {
                    if(ui->Graph_name->text() == "Пассивная ГСН" )
                    {
                        ui->Graph->setPixmap(QPixmap (":/new/pixmap/pixmap/Рисунок1_4.png"));
                        ui->Graph_name->setText("Инфракрасная ГСН");
                    }
                }
            }
        }
    }
}

/*!
 * \brief Widget::on_B4_clicked
 * BACK BUTTON
 */
void Widget::on_B4_clicked()
{
    //без действий
    if(ui->stackedWidget->currentIndex() == 0||
            ui->stackedWidget->currentIndex() == 9||
            ui->stackedWidget->currentIndex() == 10||
            ui->stackedWidget->currentIndex() == 40)
    {

    }

    //часть 1
    if(     ui->stackedWidget->currentIndex() == 2||
            ui->stackedWidget->currentIndex() == 3||
            ui->stackedWidget->currentIndex() == 4||
            ui->stackedWidget->currentIndex() == 5||
            ui->stackedWidget->currentIndex() == 6||
            ui->stackedWidget->currentIndex() == 7||
            ui->stackedWidget->currentIndex() == 8)
    {
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()-1);
        Chapter1(ui->stackedWidget->currentIndex()-1);
    }
    else
    {
        //часть2
        if(     ui->stackedWidget->currentIndex()==20||
                ui->stackedWidget->currentIndex()==19||
                ui->stackedWidget->currentIndex()==18||
                ui->stackedWidget->currentIndex()==17||
                ui->stackedWidget->currentIndex()==16||
                ui->stackedWidget->currentIndex()==15||
                ui->stackedWidget->currentIndex()==14||
                ui->stackedWidget->currentIndex()==13||
                ui->stackedWidget->currentIndex()==12)
        {
            ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()-1);
            Chapter2();
        }
        else
        {
            //MAI
            if(
                    ui->stackedWidget->currentIndex()==38||
                    ui->stackedWidget->currentIndex()==37||
                    ui->stackedWidget->currentIndex()==36||
                    ui->stackedWidget->currentIndex()==35||
                    ui->stackedWidget->currentIndex()==34||
                    ui->stackedWidget->currentIndex()==33||
                    ui->stackedWidget->currentIndex()==32||
                    ui->stackedWidget->currentIndex()==31||
                    ui->stackedWidget->currentIndex()==30||
                    ui->stackedWidget->currentIndex()==29||
                    ui->stackedWidget->currentIndex()==28||
                    ui->stackedWidget->currentIndex()==27||
                    ui->stackedWidget->currentIndex()==26||
                    ui->stackedWidget->currentIndex()==25||
                    ui->stackedWidget->currentIndex()==24||
                    ui->stackedWidget->currentIndex()==23||
                    ui->stackedWidget->currentIndex()==22)
            {
                ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() -1);
                    MAI();
            }
        }
    }

    //графы
    if(ui->stackedWidget->currentIndex() == 10)
    {
        if( ui->Graph_name->text() == "Инфракрасная ГСН" )
        {
            ui->Graph->setPixmap(QPixmap(":/new/pixmap/pixmap/Рисунок1_3.png"));
            ui->Graph_name->setText("Пассивная ГСН");
        }
        else
        {
            if (ui->Graph_name->text() == "Пассивная ГСН")
            {
                ui->Graph->setPixmap(QPixmap(":/new/pixmap/pixmap/Рисунок1_2.png"));
                ui->Graph_name->setText("Активная ГСН");
            }
            else
            {
                if( ui->Graph_name->text() == "Активная ГСН" )
                {
                    ui->Graph->setPixmap(QPixmap(":/new/pixmap/pixmap/Рисунок1.png"));
                    ui->Graph_name->setText("Кобинированная РГСН");
                }
                else
                {
                    if( ui->Graph_name->text() == "Кобинированная РГСН"  )
                    {
                        ui->Graph->setPixmap(QPixmap(":/new/pixmap/pixmap/Рисунок0.png"));
                        ui->Graph_name->setText( "Марковская модель группового воздушного боя");
                    }
                }
            }
        }
    }
}

/*!
 * \brief Widget::on_B5_clicked
 * Helper!
 */

void Widget::on_B5_clicked()
{
    if (checker() != 0)
    {
        messanger();
    }
}

/*!
 * \brief Widget::on_B1_clicked
 * signal for show Pij
 */
void Widget::on_B1_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    probability();
}

/*!
 * \brief Widget::on_B6_clicked
 * signal for show TAB
 */
void Widget::on_B6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    Chapter1(6);
    Chapter1(6);
}

/*!
 * \brief Widget::on_B2_clicked
 * Signal for show Graph
 */
void Widget::on_B2_clicked()
{
     ui->stackedWidget->setCurrentIndex(10);
     QPixmap image = QPixmap (":/new/pixmap/pixmap/Рисунок0.png");
     ui->Graph->setPixmap(image);
     ui->Graph_name->setText("Марковская модель группового воздушного боя");
}

/*!
 * \brief Widget::on_B7_clicked
 */
void Widget::on_B7_clicked()
{
     ui->stackedWidget->setCurrentIndex(11);
     Chapter2();
}

/*!
 * \brief Widget::on_B8_clicked
 *
 */
void Widget::on_B8_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);
    MAI();
    MAI();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_B3_clicked()
{
    ui->stackedWidget->setCurrentIndex(39);
    ui->BUT4->setPixmap(QPixmap(":/new/pixmap/pixmap/but4.png"));
}
