#include "widget.h"
#include "ui_widget.h"
#include <algorithm>
#include <boost/sort/sort.hpp>

/*!
 * \brief Widget::checker
 * \return visiable
 */
int Widget::checker()
{
    if (ui->stackedWidget->isVisible() == false)
        return 0;
    else return 1;
}

/*!
 * \brief Widget::Helper
 * Show message for help information
 * ar - message selection parameter
 */
void Widget::messanger()
{
    QMessageBox msgBOX;
    msgBOX.setStyleSheet("QMessageBox {background: #006000} QLabel{color:white;}");
    msgBOX.setWindowTitle("MANUAL");
    if (ui->stackedWidget->currentIndex() == 0)
    {
        msgBOX.setWindowTitle("MANUAL");
        msgBOX.setText(
                   "Вы ещё не выбрали режим работы!!!"
                   "\nПосмотрите на экран и выбирите режим "
                   "\nработы для дальнейшего продолжения.");
    }
    if (ui->stackedWidget->currentIndex() == 7)
    {
        if (ui->Graph_name->text() == "Марковская модель группового воздушного боя")
        {
            msgBOX.setWindowTitle("Режим просмотра графа состояния:");
            msgBOX.setText(
                       "Марковская модель группового воздушного боя"
                       "\nдля оценки значимости приоритетных технологий"
                       "\nпри реализации функциональных задач."
                       "\nсостояния обобщенного самолета красных"
                       "\n 1 – полет по маршруту; "
                       "\n 2 – включение АФАР Х-диапазона; "
                       "\n 3 – пуск ракет большой дальности; "
                       "\n 4 – выход на перехват синих; "
                       "\n 5 – перехват синих и пуск ракет с пассивной или ИК ГСН; "
                       "\n 6 – окончание скрытного наведение на атакуемые цели синих. Информационный контакт с противником; "
                       "\n 7 – Перехват целей и пуск ракет большой дальности; "
                       "\n 8 – дуэль (дальний воздушный бой и пуск ракет большой дальности); "
                       "\n 9 – перехват самолета красных истребителями сопровождения синих; "
                       "\n 10 – выход на перехват ударных самолетов синих и пуск ракет средней дальности; "
                       "\n 11 – проведение ближнего воздушного боя и пуск ракет малой дальности с ИК ГСН; "
                       "\n 12 – контратака ударных самолетов синих; "
                       "\n 13 – выход красных из боя с обороной; "
                       "\n 14 – обобщенный самолет красных убит (средние потери красных относительно начального числа); "
                       "\n 15 – обобщенный самолет красных жив (среднее число уцелевших самолетов красных, участвующих в вылете);");

            //ПРЕДВАРИТЕЛЬНЫЙ СИНТЕЗ аусп ФОРмирование технического облика АУСП с проверкой соответсвия прогнозируемым возможностям науки и техники и рессурсной обееспеченности разработка ТТТ к АУСП Процедуры предварительного синтеза АУСП поражающей оценки системы управления, оценки аэродинамических свойств, оценки заметности АУСП, формировние оптимального облика АУСП путём комплексирования бортовых показателей АУСП и аэродинамических характеристик по БЧ и аэродинамических характеристик, при обосновании ТТТ модель АУСП представляется в виде 4-х блоков: аэродинимика, система управления, боевая часть, массо-габоритные характеристики и эффективная поверхность рассеивания. отличие процедуры предварительного синтеза АУСП от процедуры формирования технического облика состоит в том что представление АУСП в этом виде представляется с различным образом детализации. В процедуре предварительного синтеза АУСП понимается множество его биометрических параметров, плотность компановки считаются заданными. В процедуре формирования технического облика (проверка реализуемости концепции) выполняется проверка конструктивных параметров АУСП.
        }
        if (ui->Graph_name->text() == "Кобинированная РГСН")
        {
            msgBOX.setWindowTitle("Режим просмотра графа состояния:");
            msgBOX.setText(
                       "Марковский граф состояния модели пуска и наведения ракеты"
                       "\nс комбинированной радиолокацийонной головкой самонаведения.");
        }
        if (ui->Graph_name->text() == "Активная ГСН")
        {
            msgBOX.setWindowTitle("Режим просмотра графа состояния:");
            msgBOX.setText(
                       "Марковский граф состояния модели пуска и наведения ракеты"
                       "\nс активной головкой самонаведения.");
        }
        if (ui->Graph_name->text() == "Пассивная ГСН")
        {
            msgBOX.setWindowTitle("Режим просмотра графа состояния:");
            msgBOX.setText(
                       "Марковский граф состояния модели пуска и наведения ракеты"
                       "\nс пассивной головкой самонаведения.");
        }
        if (ui->Graph_name->text() == "Инфракрасная ГСН")
        {
            msgBOX.setWindowTitle("Режим просмотра графа состояния:");
            msgBOX.setText(
                       "Марковский граф состояния модели пуска и наведения ракеты"
                       "\nс инфракрасной головкой самонаведения.");
        }
    }
    if (ui->stackedWidget->currentIndex() == 1)
    {
        msgBOX.setWindowTitle("Режим первая часть");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Воздушный бой''");
    }
    if (ui->stackedWidget->currentIndex() == 2)
    {
        msgBOX.setWindowTitle("Режим первая часть");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Комбинированная РГСН''");
    }
    if (ui->stackedWidget->currentIndex() == 3)
    {
        msgBOX.setWindowTitle("Режим первая часть");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Активная ГСН''");
    }
    if (ui->stackedWidget->currentIndex() == 4)
    {
        msgBOX.setWindowTitle("Режим первая часть");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Пассивная ГСН''");
    }
    if (ui->stackedWidget->currentIndex() == 5)
    {
        msgBOX.setWindowTitle("Режим первая часть");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Инфракрасная ГСН''");
    }
    if (ui->stackedWidget->currentIndex() == 6)
    {
        msgBOX.setWindowTitle("Режим результирующие вероятности");
        msgBOX.setText(
                   "Матрица вероятностей перехода для модели ''Инфракрасная ГСН''");
    }
    if (ui->stackedWidget->currentIndex() == 8)
    {
        msgBOX.setWindowTitle("Режим вторая часть");
        msgBOX.setText(
                   "Таблица начальных условий");
    }
    if (ui->stackedWidget->currentIndex() == 9)
    {
        msgBOX.setWindowTitle("Режим вторая часть");
        msgBOX.setText(
                   "Расчёт статистических характеристик оценочных показателей");
    }
    msgBOX.exec();
}

/*!
 * \brief Widget::Chapter first - ranking of priority technologies
 */
void Widget::Chapter1(int tab)
{
    if(QSqlDatabase::contains(QSqlDatabase::defaultConnection))
    {
        db = QSqlDatabase::database();
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("./tables.db");
    }
    int j=0;
    QSqlQuery query;
//таблица 1
    query.exec("SELECT *from Tab1");
    while (ui->tableWidget->rowCount() > 0)
    {
        ui->tableWidget->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
        for(int i =0; i<ui->tableWidget->columnCount(); i++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget->setColumnWidth(i,49);
            ui->tableWidget->setItem(j,i,TAB);
        }
        j++;
    }
    query.clear();
//таблица 2
    query.exec("SELECT *from Tab2");
    j=0;
    while (ui->tableWidget_2->rowCount() > 0)
    {
        ui->tableWidget_2->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_2->insertRow( ui->tableWidget_2->rowCount() );
        for(int i =0; i<ui->tableWidget_2->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_2->setColumnWidth(i,79);
            ui->tableWidget_2->setItem(j,i,TAB);
        }
        j++;
    }
    query.clear();
//таблица 3
    query.exec("SELECT *from Tab3");
    j=0;
    while (ui->tableWidget_3->rowCount() > 0)
    {
        ui->tableWidget_3->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_3->insertRow( ui->tableWidget_3->rowCount() );
        for(int i =0; i<ui->tableWidget_3->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_3->setItem(j,i,TAB);
        }
        j++;
    }
    query.clear();
//таблица 4
    query.exec("SELECT *from Tab4");
    j=0;
    while (ui->tableWidget_4->rowCount() > 0)
    {
        ui->tableWidget_4->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_4->insertRow( ui->tableWidget_4->rowCount() );
        for(int i =0; i<ui->tableWidget_4->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_4->setItem(j,i,TAB);
        }
        j++;
    }
//таблица 5
    query.clear();
    query.exec("SELECT *from Tab5");
    j=0;
    while (ui->tableWidget_5->rowCount() > 0)
    {
        ui->tableWidget_5->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_5->insertRow( ui->tableWidget_5->rowCount() );
        for(int i =0; i<8; i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_5->setItem(j,i,TAB);
        }
        j++;
    }
//таблица плюсы большая
    query.clear();
    query.exec("SELECT *from tabPlus1");
    j=0;
    while (ui->tableWidget_120->rowCount() > 0)
    {
        ui->tableWidget_120->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_120->insertRow( ui->tableWidget_120->rowCount() );
        for(int i =0; i<ui->tableWidget_120->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_120->setItem(j,i,TAB);
        }
        j++;
    }
    for (int i =0; i < ui->tableWidget_120->rowCount();i++) // строка = 13
    {
        QTableWidgetItem *item;
        double buf=0;
        for (int k = 0; k<ui->tableWidget_120->columnCount()-1;k++)
        {
            item = ui->tableWidget_120->item(i,k);
            QString buf_str = item->text();
            if (buf_str!="+")
            {
                item = ui->tableWidget_120->item(ui->tableWidget_120->rowCount()-1,k);
                buf+=item->text().toDouble();
            }
        }
        buf-=100;
        QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf));
        ui->tableWidget_120->setItem(i,ui->tableWidget_120->columnCount()-1,TAB);
        TAB = new QTableWidgetItem(QString::number(100));
        ui->tableWidget_120->setItem(ui->tableWidget_120->rowCount()-1,ui->tableWidget_120->columnCount()-1,TAB);
    }
//таблица плюсы мелая
    query.clear();
    query.exec("SELECT *from tabPlus2");
    j=0;
    while (ui->tableWidget_121->rowCount() > 0)
    {
        ui->tableWidget_121->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_121->insertRow(ui->tableWidget_121->rowCount());
        for(int i =0; i<ui->tableWidget_121->columnCount(); i++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_121->setItem(j,i,TAB);
        }
        j++;
    }
    for (int i =0; i < ui->tableWidget_121->rowCount();i++) // строка = 13
    {
        QTableWidgetItem *item;
        double buf=0;
        for (int k = 0; k<ui->tableWidget_121->columnCount()-1;k++)
        {
            item = ui->tableWidget_121->item(i,k);
            QString buf_str = item->text();
            if (buf_str!="+")
            {
                item = ui->tableWidget_121->item(ui->tableWidget_121->rowCount()-1,k);
                buf+=item->text().toDouble();
            }
        }
        buf-=100;
        QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf));
        ui->tableWidget_121->setItem(i,ui->tableWidget_121->columnCount()-1,TAB);
        TAB = new QTableWidgetItem(QString::number(100));
        ui->tableWidget_121->setItem(ui->tableWidget_121->rowCount()-1,ui->tableWidget_121->columnCount()-1,TAB);
    }
    probability();
    probability();
//таблица последняя
    //из P15
    QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(12*ui->l15->text().toDouble()));
    ui->tableWidget_160->setItem(0,ui->tableWidget_160->columnCount()-4,TAB);
    //из P14
    TAB = new QTableWidgetItem(QString::number(12*ui->l14->text().toDouble()));
    ui->tableWidget_160->setItem(0,ui->tableWidget_160->columnCount()-3,TAB);
    //из P26
    TAB = new QTableWidgetItem(QString::number(12*ui->l16->text().toDouble()));
    ui->tableWidget_160->setItem(0,ui->tableWidget_160->columnCount()-2,TAB);
    //из P27
    TAB = new QTableWidgetItem(QString::number(12 - 12*ui->l16->text().toDouble()));
    ui->tableWidget_160->setItem(0,ui->tableWidget_160->columnCount()-1,TAB);

    //таблица 2.1 ЧАСТЬ2
    query.clear();
    query.exec("SELECT *from Tab2_1");
    int j_21=0;
    while (ui->tableWidget_6->rowCount() > 0)
    {
        ui->tableWidget_6->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_6->insertRow( ui->tableWidget_6->rowCount());
        for(int i =0; i<ui->tableWidget_6->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_6->setItem(j_21,i,TAB);
        }
        j_21++;
    }

    db.close();
    //Chapter2();
    //Chapter2();
    //MAI();
    //MAI();
}

/*!
 * \brief Widget::Chapter second - comparative assessment of alternative STS options MVK
 */
void Widget::Chapter2()
{
    Chapter1(2);
    Chapter1(2);
    double str1=0;
    double str2=0;

    if(QSqlDatabase::contains(QSqlDatabase::defaultConnection))
    {
        db = QSqlDatabase::database();
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("./tables.db");
    }
QSqlQuery query;

//таблица 2.2
    for (int i =0; i < ui->tableWidget_7->columnCount();i++) // столбец = 5
    {
        for (int j =0; j < ui->tableWidget_7->rowCount();j++) // строка = 29
        {
            QTableWidgetItem *item;
            QTableWidgetItem *item2;
            //Заполнение первого столбца
            if(i == 0)
            {
                double buf=0;
                for (int k = 0; k<ui->tableWidget_6->columnCount();k++)
                {
                    item = ui->tableWidget_6->item(j,k);
                    str1 = item->text().toDouble();
                    buf+=str1;
                }
                buf/=9;
                QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf));
                ui->tableWidget_7->setItem(j,i,TAB);
                buf=0;
            }
            else
            {
                double summ=0;
                for (int k = 0; k<ui->tableWidget_7->columnCount();k++)
                {
                    item = ui->tableWidget_7->item(k,0);
                    str1 = item->text().toDouble();
                    summ +=str1;
                }
                //заполнение второго столбца
                if(i == 1)
                {
                    double buf=0;
                        item = ui->tableWidget_7->item(j,0);
                        str1 = item->text().toDouble();
                        buf = str1/summ;
                    QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf));
                    ui->tableWidget_7->setItem(j,i,TAB);
                    buf=0;
                }
                else
                {
                    //заполнение 5-го столбца
                    if(i == 4)
                      {
                          QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(summ));
                          ui->tableWidget_7->setItem(j,i,TAB);
                      }
                      else
                      {
                          //заполнение третьего столбца
                          if(i == 2)
                          {
                              item2 = ui->tableWidget_7->item(j,0);
                              str2 = item2->text().toDouble();

                              double buf=0;
                              for (int k = 0; k<ui->tableWidget_6->columnCount();k++)
                              {
                                  item = ui->tableWidget_6->item(j,k);
                                  str1 = item->text().toDouble();
                                  buf+=pow(str1-str2,2);
                              }
                              QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(sqrt(buf/6)));
                              ui->tableWidget_7->setItem(j,i,TAB);
                              buf=0;
                          }
                          else
                          {
                              //заполнение 4-го столбца
                              if(i == 3)
                              {
                                  item = ui->tableWidget_7->item(j,0);
                                  item2 = ui->tableWidget_7->item(j,2);
                                  str2 =(item2->text().toDouble()/ item->text().toDouble())*100;
                                  QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(str2));
                                  ui->tableWidget_7->setItem(j,i,TAB);
                              }
                          }
                      }
                 }
            }
        }
    }


//таблица 2.3
    //ll_t3

    double ll_t[29];
    double l_t[29];

        //двигаюсь по столбцам
        for (int i =0; i < ui->tableWidget_6->rowCount();i++)
        {
            typedef QVector <double> map;
            map buf;
            map buf_map;
            buf.resize(2);
            QVector <map> spisok;

            //двигаюсь по строкам
            for (int j =0; j < ui->tableWidget_6->columnCount(); j++)
            {
                buf.clear();
                buf.insert(0,ui->tableWidget_6->item(i,j)->text().toDouble());
                buf.insert(1,1);
                spisok.push_back(buf);
            }

            std::sort(spisok.begin(), spisok.end());

            int buf_iter=ui->tableWidget_6->columnCount()-1;
            //считаю повторения
            for (int j =0; j < buf_iter; j++)
            {
                buf =spisok[j];
                buf_map =spisok[j+1];
                if ((buf[0]==buf_map[0]))
                {
                    spisok.erase(spisok.begin()+j+1);
                    buf =spisok[j];
                    buf[1]++;
                    spisok[j]=buf;
                    buf_iter--;
                    j--;
                }
            }

            buf_iter=0;
            std::reverse(spisok.begin(), spisok.end());
            for (int j =0; j < spisok.size(); j++)
            {
                int buf_sum=0;
                buf =spisok[j];
                if (j==0)
                for(int i=1; i<buf[1]+1;i++)
                {
                    buf_sum+=i;
                }
                else
                {
                    if(buf[1]==1)
                    buf_sum+=buf[1]+buf_iter;
                    else
                    {
                        for(int i=1; i<buf[1]+1;i++)
                        {
                            buf_sum+=buf_iter+i;
                        }
                    }
                }
                buf_iter+=buf[1];
                QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf_sum/buf[1]));
                ui->tableWidget_8->setItem(j,i,TAB);
            }
//правая часть
                double buf_sum=0;
                for (int var=0;var <spisok.size();var++)
                {
                    buf_sum+=ui->tableWidget_8->item(var,i)->text().toDouble();
                }

                if (i<5)
                for(int var = 0; var<5;var++)
                {
                    double buf_buf=0;
                    for (int var_1 =0 ;var_1 < spisok.size();var_1++)
                    {
                        buf = spisok[var_1];
                        buf_buf+=(qPow(buf[1],3)-buf[1]);
                    }
                    ll_t[i]=(buf_buf);
                }
                QTableWidgetItem *TAB = new QTableWidgetItem(QString::number(buf_sum));
                ui->tableWidget_8->setItem(ui->tableWidget_8->rowCount()-1,i,TAB);
        }

//расчеты по таблице 2.3
//левая
        double buf_sum=0;
        for (int var=0; var<ui->tableWidget_8->columnCount();var++)
        {
            buf_sum+=ui->tableWidget_8->item(ui->tableWidget_8->rowCount()-1,var)->text().toDouble();
        }
        ui->di->clear();
        ui->di->insert(QString::number(buf_sum/ui->tableWidget_8->rowCount()));
        double buf_sum_l_t = 0;
        for (int var =0; var <ui->tableWidget_8->columnCount();var++)
        {
            l_t[var]=(abs(buf_sum/ui->tableWidget_8->columnCount() - ui->tableWidget_8->item(ui->tableWidget_8->rowCount()-1,var)->text().toDouble()));
            buf_sum_l_t+=l_t[var];
        }
        buf_sum=0;
        double right_buf_sum_l_t=0;
        for (int var=0;var<29;var++)
        {
            right_buf_sum_l_t+=ll_t[var];
        }

        buf_sum=0;
        for (int var = 0; var < 29;var++)
        {
            buf_sum+=qPow(l_t[var],2);
        }
        buf_sum=(12*buf_sum);
        //buf_sum=buf_sum/(pow(ui->tableWidget_6->rowCount(),2) * (pow(ui->tableWidget_6->columnCount(),3)-1) - (ui->tableWidget_6->columnCount()* right_buf_sum_l_t));
        ui->Kk->setText(QString::number(buf_sum/(pow(ui->tableWidget_6->rowCount(),2) * (pow(ui->tableWidget_6->columnCount(),3)-1) - (ui->tableWidget_6->columnCount()* right_buf_sum_l_t))));
        ui->hi->setText(QString::number(buf_sum/(ui->tableWidget_6->rowCount() * ui->tableWidget_6->columnCount() * (ui->tableWidget_6->columnCount()+1) - (1/(ui->tableWidget_6->columnCount()-1) * right_buf_sum_l_t))));

//Tab2.4 - 2.10
    QTableWidget *tab_2[6] =
    {
        ui->tableWidget_161,
        ui->tableWidget_162,
        ui->tableWidget_163,
        ui->tableWidget_164,
        ui->tableWidget_165,
        ui->tableWidget_166
    };
    QLineEdit *LE [18]=
    {
        ui->sum_phi_K1,
        ui->sum_Kphi_K1,
        ui->K1,
        ui->sum_phi_K2,
        ui->sum_Kphi_K2,
        ui->K2,
        ui->sum_phi_K3,
        ui->sum_Kphi_K3,
        ui->K3,
        ui->sum_phi_K4,
        ui->sum_Kphi_K4,
        ui->K4,
        ui->sum_phi_K5,
        ui->sum_Kphi_K5,
        ui->K5,
        ui->sum_phi_K6,
        ui->sum_Kphi_K6,
        ui->K6
    };

    for (int i_g=0; i_g <6;i_g++)
    {
        query.clear();
        if (i_g == 0)
        {
            query.exec("SELECT *from Tab2_8");
        }
        else
        {
            if (i_g == 1)
            {
                query.exec("SELECT *from Tab2_3");
            }
            else
            {
                if (i_g == 2)
                {
                    query.exec("SELECT *from Tab2_4");
                }
                else
                {
                    if (i_g == 3)
                    {
                        query.exec("SELECT *from Tab2_5");
                    }
                    else
                    {
                        if (i_g == 4)
                        {
                            query.exec("SELECT *from Tab2_6");
                        }
                        else
                        {
                            if (i_g == 5)
                            {
                                query.exec("SELECT *from Tab2_7");
                            }
                        }
                    }
                }
            }
        }
        int j=0;
        while (tab_2[i_g]->rowCount() > 0)
        {
            tab_2[i_g]->removeRow(0);
        }
        while (query.next())
        {
            tab_2[i_g]->insertRow(tab_2[i_g]->rowCount() );
            for(int i =0; i<6; i ++)
            {
                QString c2 = query.value(i).toString();
                QTableWidgetItem *TAB = new QTableWidgetItem(c2);
                tab_2[i_g]->setItem(j,i,TAB);
            }
            j++;
        }
        double buf_sum1=0;
        double buf_sum2=0;
        for (int i =0; i < tab_2[i_g]->rowCount();i++)
        {
            for (int k=2; k<tab_2[i_g]->columnCount();k++)
            {
                QTableWidgetItem *TAB;
                if (k==2)
                {
                    if(tab_2[i_g]->item(i,1)->text().toDouble()!=0)
                    {
                        TAB = new QTableWidgetItem(QString::number(tab_2[i_g]->item(i,0)->text().toDouble()/tab_2[i_g]->item(i,1)->text().toDouble()));
                    }
                    else
                    {
                        TAB = new QTableWidgetItem(QString::number(0));
                    }
                }
                if (k==3)
                {
                    TAB = new QTableWidgetItem(QString::number(ui->tableWidget_7->item(i,0)->text().toDouble()));
                    buf_sum1+=ui->tableWidget_7->item(i,0)->text().toDouble();
                }
                if (k==4)
                {
                    TAB = new QTableWidgetItem(QString::number(tab_2[i_g]->item(i,2)->text().toDouble()*tab_2[i_g]->item(i,3)->text().toDouble()));
                    buf_sum2+=tab_2[i_g]->item(i,2)->text().toDouble()*tab_2[i_g]->item(i,3)->text().toDouble();
                }
                tab_2[i_g]->setItem(i,k,TAB);
                LE[i_g*3]->setText(QString::number(buf_sum1));
                LE[i_g*3+1]->setText(QString::number(buf_sum2));
                LE[i_g*3+2]->setText(QString::number(buf_sum2/buf_sum1));
            }
        }
    }

//таблица последняя
    query.clear();
    int j=0;
    query.exec("SELECT *from Tab2_10");
    while (ui->tableWidget_46->rowCount() > 0)
    {
        ui->tableWidget_46->removeRow(0);
    }
    while (query.next())
    {
        ui->tableWidget_46->insertRow( ui->tableWidget_46->rowCount() );
        for(int i =0; i<ui->tableWidget_46->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_46->setItem(j,i,TAB);
        }
        j++;
    }

//таблица ну из МАИ
    query.clear();
    j=0;
    query.exec("SELECT *from Tab3_1");
    while (query.next())
    {
        for(int i =0; i<ui->tableWidget_11->columnCount(); i ++)
        {
            QString c2 = query.value(i).toString();
            QTableWidgetItem *TAB = new QTableWidgetItem(c2);
            ui->tableWidget_11->setItem(i,j,TAB);
        }
        j++;
    }
    db.close();
}

/*!
 * \brief Widget::Chapter second  - comparative assessment of alternative STS options MAI
 */
void Widget::MAI()
{
    Chapter2();
    Chapter2();
    ///
    ui->tableWidget_11->horizontalHeader()->setVisible(true);
    ui->tableWidget_11->verticalHeader()->setVisible(true);
    ///
   // double buf_row[29] = {6,14.66,3698,230,60,1,8,1,0.5,0.625,1,0.49,0.48,5,140,4,1,0,0.3,0.9,8,10,6.60,0.8,10,30,3,1,1};
   // double buf_column[29] = {6,14.66,3698,230,60,1,8,1,0.5,0.625,1,0.49,0.48,5,140,4,1,0,0.3,0.9,8,10,6.60,0.8,10,30,3,1,1};
    double buf_row[29] = {10,10,8,7,7,8,6,75,5,7,7,6,6,5,5,5,5,6,4,9,7,7,7,7,6,5,5,5,5};
    double buf_column[29] = {10,10,8,7,7,8,6,75,5,7,7,6,6,5,5,5,5,6,4,9,7,7,7,7,6,5,5,5,5};
    double buf_sum=0;


    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
//Таблица 1 - НУ


    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
//Таблица 2
    for (int i =0; i < ui->tableWidget_12->rowCount();i++)
    {
        for (int k=0; k<ui->tableWidget_12->columnCount()-4;k++)
        {
            double buf;
            QTableWidgetItem *TAB;
            if (i>k)
            {
                buf=round((buf_column[k]/buf_row[i])*100)/100;
            }
            else
            {
                buf=round((buf_row[k]/buf_column[i])*100)/100;
            }
            TAB = new QTableWidgetItem(QString::number(buf));
            ui->tableWidget_12->setItem(i,k,TAB);
            ui->tableWidget_12->setColumnWidth(k,49);
        }
    }
    //произведение строк
    for (int k=0; k<ui->tableWidget_12->rowCount()-1;k++)
    {
        buf_sum=1;
        QTableWidgetItem *TAB;
        for (int i =0; i < ui->tableWidget_12->columnCount()-4;i++)
        {
            buf_sum*=ui->tableWidget_12->item(k,i)->text().toDouble();
        }
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(k,ui->tableWidget_12->columnCount()-4,TAB);
        buf_sum=pow(buf_sum,(0.166666667));
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(k,ui->tableWidget_12->columnCount()-3,TAB);
    }
    //сумма столбцов
    for (int k=0; k<ui->tableWidget_12->columnCount()-2;k++)
    {
        buf_sum=0;
        QTableWidgetItem *TAB;
        for (int i =0; i < ui->tableWidget_12->rowCount()-1;i++)
        {
            buf_sum+=ui->tableWidget_12->item(i,k)->text().toDouble();
        }
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(ui->tableWidget_12->rowCount()-1,k,TAB);
    }
    //предпоследний столбец
    for (int k=0; k<ui->tableWidget_12->rowCount()-1;k++)
    {
        buf_sum=0;
        QTableWidgetItem *TAB;
        for (int i =7; i < ui->tableWidget_12->columnCount()-2;i++)
        {
            buf_sum=ui->tableWidget_12->item(k,i)->text().toDouble()/ui->tableWidget_12->item(ui->tableWidget_12->rowCount()-1,i)->text().toDouble();
        }
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(k,ui->tableWidget_12->columnCount()-2,TAB);
    }
    //последний столбец
    for (int k=0; k<ui->tableWidget_12->rowCount()-1;k++)
    {
        buf_sum=0;
        QTableWidgetItem *TAB;
        for (int i =8; i < ui->tableWidget_12->columnCount()-1;i++)
        {
            buf_sum=ui->tableWidget_12->item(ui->tableWidget_12->rowCount()-1,k)->text().toDouble() * ui->tableWidget_12->item(k,i)->text().toDouble();
        }
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(k,ui->tableWidget_12->columnCount()-1,TAB);
    }
    //сумма последних двух столбцов
    for (int k=ui->tableWidget_12->columnCount()-2; k<ui->tableWidget_12->columnCount();k++)
    {
        buf_sum=0;
        QTableWidgetItem *TAB;
        for (int i =0; i < ui->tableWidget_12->rowCount()-1;i++)
        {
            buf_sum+=ui->tableWidget_12->item(i,k)->text().toDouble();
        }
        TAB = new QTableWidgetItem(QString::number(buf_sum));
        ui->tableWidget_12->setItem(ui->tableWidget_12->rowCount()-1,k,TAB);
    }
    ui->IS_1->setText(QString::number(abs((ui->tableWidget_12->item(ui->tableWidget_12->rowCount()-1,ui->tableWidget_12->columnCount()-1)->text().toDouble()-ui->tableWidget_13->item(0,5)->text().toDouble())/(ui->tableWidget_13->item(0,5)->text().toDouble()-1))));
    ui->OS_1->setText(QString::number((ui->IS_1->text().toDouble())/(ui->tableWidget_13->item(1,5)->text().toDouble())));


    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
//Таблица 3 - НУ


    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
//Таблица 4
    QTableWidget *numTable[29] =
    {
        ui->tableWidget_14,
        ui->tableWidget_15,
        ui->tableWidget_16,
        ui->tableWidget_17,
        ui->tableWidget_18,
        ui->tableWidget_19,
        ui->tableWidget_20,
        ui->tableWidget_21,
        ui->tableWidget_22,
        ui->tableWidget_23,
        ui->tableWidget_24,
        ui->tableWidget_25,
        ui->tableWidget_26,
        ui->tableWidget_27,
        ui->tableWidget_28,
        ui->tableWidget_29,
        ui->tableWidget_30,
        ui->tableWidget_31,
        ui->tableWidget_32,
        ui->tableWidget_33,
        ui->tableWidget_34,
        ui->tableWidget_35,
        ui->tableWidget_36,
        ui->tableWidget_37,
        ui->tableWidget_38,
        ui->tableWidget_39,
        ui->tableWidget_40,
        ui->tableWidget_41,
        ui->tableWidget_44
    };
    for (int var = 0; var<29;var++)
    {
        numTable[var]->horizontalHeader()->setVisible(true);
        numTable[var]->verticalHeader()->setVisible(true);
    }
    QLineEdit *IS[29] =
    {
        ui->IS_2,
        ui->IS_3,
        ui->IS_4,
        ui->IS_5,
        ui->IS_6,
        ui->IS_7,
        ui->IS_8,
        ui->IS_9,
        ui->IS_10,
        ui->IS_11,
        ui->IS_12,
        ui->IS_13,
        ui->IS_14,
        ui->IS_15,
        ui->IS_16,
        ui->IS_17,
        ui->IS_18,
        ui->IS_19,
        ui->IS_20,
        ui->IS_21,
        ui->IS_22,
        ui->IS_23,
        ui->IS_24,
        ui->IS_25,
        ui->IS_26,
        ui->IS_27,
        ui->IS_28,
        ui->IS_29,
        ui->IS_30
    };
    QLineEdit *OS[29] =
    {
        ui->OS_2,
        ui->OS_3,
        ui->OS_4,
        ui->OS_5,
        ui->OS_6,
        ui->OS_7,
        ui->OS_8,
        ui->OS_9,
        ui->OS_10,
        ui->OS_11,
        ui->OS_12,
        ui->OS_13,
        ui->OS_14,
        ui->OS_15,
        ui->OS_16,
        ui->OS_17,
        ui->OS_18,
        ui->OS_19,
        ui->OS_20,
        ui->OS_21,
        ui->OS_22,
        ui->OS_23,
        ui->OS_24,
        ui->OS_25,
        ui->OS_26,
        ui->OS_27,
        ui->OS_28,
        ui->OS_29,
        ui->OS_30
    };

//КТУ
    for (int nt=0; nt<29; nt++) // цикл по табличкам
    {
        //пробежка по пермвым 7 столбцам
        for (int i =0; i < 7; i++)
        {
            for (int j =0; j < 7; j++)
            {
                QTableWidgetItem *TAB;
                if(ui->tableWidget_11->item(j,nt)->text().toDouble()!=0)
                {
                    buf_sum =  ui->tableWidget_11->item(i,nt)->text().toDouble() / ui->tableWidget_11->item(j,nt)->text().toDouble();
                }
                else
                {
                    buf_sum =  0;
                }
                TAB = new QTableWidgetItem(QString::number(buf_sum));
                // в зависимости от того уменьшается показатель или увеличивается мы подаем j,i или i,j
                numTable[nt]->setItem(j,i,TAB);
            }
        }

        //произведение строк
        for (int k=0; k<numTable[nt]->rowCount()-1;k++)
        {
            buf_sum=1;
            QTableWidgetItem *TAB;
            for (int i =0; i < numTable[nt]->columnCount()-4;i++)
            {
                buf_sum*=numTable[nt]->item(k,i)->text().toDouble();
            }
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(k,numTable[nt]->columnCount()-4,TAB);
            buf_sum=pow(buf_sum,(0.166666667));
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(k,numTable[nt]->columnCount()-3,TAB);
        }

        //сумма столбцов
        for (int k=0; k<numTable[nt]->columnCount()-2;k++)
        {
            buf_sum=0;
            QTableWidgetItem *TAB;
            for (int i =0; i < numTable[nt]->rowCount()-1;i++)
            {
                buf_sum+=numTable[nt]->item(i,k)->text().toDouble();
            }
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(numTable[nt]->rowCount()-1,k,TAB);
        }
        //предпоследний столбец
        for (int k=0; k<numTable[nt]->rowCount()-1;k++)
        {
            buf_sum=0;
            QTableWidgetItem *TAB;
            for (int i =4; i < numTable[nt]->columnCount()-2;i++)
            {
                if(numTable[nt]->item(numTable[nt]->rowCount()-1,i)->text().toDouble()!=0)
                {
                    buf_sum=numTable[nt]->item(k,i)->text().toDouble()/numTable[nt]->item(numTable[nt]->rowCount()-1,i)->text().toDouble();
                }
                else
                {
                    buf_sum=0;
                }
            }
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(k,numTable[nt]->columnCount()-2,TAB);
        }
        //последний столбец
        for (int k=0; k<numTable[nt]->rowCount()-1;k++)
        {
            buf_sum=0;
            QTableWidgetItem *TAB;
            for (int i =5; i < numTable[nt]->columnCount()-1;i++)
            {
                buf_sum=numTable[nt]->item(numTable[nt]->rowCount()-1,k)->text().toDouble() * numTable[nt]->item(k,i)->text().toDouble();
            }
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(k,numTable[nt]->columnCount()-1,TAB);
        }
        //сумма последних двух столбцов
        for (int k=numTable[nt]->columnCount()-2; k<numTable[nt]->columnCount();k++)
        {
            buf_sum=0;
            QTableWidgetItem *TAB;
            for (int i =0; i < numTable[nt]->rowCount()-1;i++)
            {
                buf_sum+=numTable[nt]->item(i,k)->text().toDouble();
            }
            TAB = new QTableWidgetItem(QString::number(buf_sum));
            numTable[nt]->setItem(numTable[nt]->rowCount()-1,k,TAB);
        }
        //IS_2 увеличивается от 2 до 7
        IS[nt]->setText(QString::number(abs((numTable[nt]->item(numTable[nt]->rowCount()-1,numTable[nt]->columnCount()-1)->text().toDouble()-ui->tableWidget_13->item(0,6)->text().toDouble())/(ui->tableWidget_13->item(0,6)->text().toDouble()-1))));
        OS[nt]->setText(QString::number((IS[nt]->text().toDouble())/(ui->tableWidget_13->item(1,6)->text().toDouble())));
    }



    //4й слайд
    //сумма последних двух столбцов
    ui->tableWidget_122->horizontalHeader()->setVisible(true);
    ui->tableWidget_122->verticalHeader()->setVisible(true);
    for (int k=0; k<ui->tableWidget_122->columnCount();k++)
    {
        QTableWidgetItem *TAB;
        for (int i =0; i < ui->tableWidget_122->rowCount();i++)
        {
            if (i==0 && k!=ui->tableWidget_122->columnCount()-1)
            {
                TAB = new QTableWidgetItem(ui->tableWidget_12->item(k,ui->tableWidget_12->columnCount()-2)->text());
                ui->tableWidget_122->setItem(0,k,TAB);
            }
            else
            {
                buf_sum =0;
                if(k!=ui->tableWidget_122->columnCount()-1)
                {
                    TAB = new QTableWidgetItem(numTable[k]->item(i-1,numTable[k]->columnCount()-2)->text());
                    ui->tableWidget_122->setItem(i,k,TAB);
                }
                else
                {
                    if(i!=ui->tableWidget_122->rowCount()-1)
                    {
                        for (int j=0;j<ui->tableWidget_122->columnCount()-1;j++)
                        {
                            buf_sum += ui->tableWidget_122->item(0,j)->text().toDouble() * ui->tableWidget_122->item(i+1,j)->text().toDouble();
                        }
                        TAB = new QTableWidgetItem(QString::number(buf_sum));
                        ui->tableWidget_122->setItem(i+1,k,TAB);
                    }
                }
            }
        }
    }
}

/*!
 * \brief Widget::method of calculating probabilities
 */
void Widget::probability()
{
    double  p[17]={0};
    double column16=1;
    double column17=1;
    p[0]=1; //первый
    double str1;
    //проверка на некст элемент
    //если есть элемент ниже текущего и если следующая вероятность посчитана
    for (int i =1; i < ui->tableWidget->columnCount();i++) // столбец = 16
    {
        int buf_check_bot=0;
        int buf_check_top=0;
        for (int j =0; j < ui->tableWidget->rowCount();j++) // строка = 13
        {
            QTableWidgetItem *item = ui->tableWidget->item(j,i);
            if ((NULL != item)&&(i!=15 && i!=16))
            {
                //проверка на полноту элементов ниже диагонали
                for (int k=i+1;k<ui->tableWidget->rowCount();k++)
                {
                    if ( ui->tableWidget->item(k,i-1)->text().toDouble() != 0)
                    {
                        buf_check_bot++;
                        item = ui->tableWidget->item(k,i-1);
                        str1 = item->text().toDouble();
                    }
                }
                //проверка на полноту элементов выше диагонали начиная с диагонали
                for (int k=0;k<ui->tableWidget->rowCount();k++)
                {
                    if ( ui->tableWidget->item(k,i-1)->text().toDouble() != 0)
                    {
                        buf_check_top++;
                        item = ui->tableWidget->item(k,i-1);
                        str1 = item->text().toDouble();
                    }
                }
                if(j==0 && p[i]!=0)
                {
                    break;
                }
                //пропускной столбец
                if (buf_check_bot !=0 && (p[i+1] == 0))
                {
                    item = ui->tableWidget->item(j,i);
                    str1 = item->text().toDouble();
                    if (j==0)
                    {
                        p[i+1] += p[0] * str1;
                    }
                    else
                    p[i+1] += p[j+1] * str1;
                }
                //последствия пропускного столбца
                if ( p[i-1] == 0 && p[i] != 0)
                {
                    for (int k=i+1;k<ui->tableWidget->rowCount();k++)
                    {
                        if ( ui->tableWidget->item(k,i-2)->text().toDouble() != 0)
                        {
                            buf_check_bot++;
                            item = ui->tableWidget->item(k,i-2);
                            str1 = item->text().toDouble();
                        }
                    }
                    if (buf_check_bot!=0 && buf_check_top==0)
                    {
                        item = ui->tableWidget->item(j,i-1);
                        str1 = item->text().toDouble();
                        if (j==0)
                        {
                            p[i-1] += p[0] * str1;
                        }
                        else
                        p[i-1] += p[j-2] * str1;
                    }
                    else
                    {
                        item = ui->tableWidget->item(j,i-1);
                        str1 = item->text().toDouble();
                        if (j==0)
                        {
                            p[i] += p[0] * str1;
                        }
                        else
                        p[i] += p[j] * str1;
                    }
                }
                //нормальный столбец
                if(buf_check_top!=0)
                {
                    item = ui->tableWidget->item(j,i-1);
                    str1 = item->text().toDouble();
                    if (j==0)
                    {
                        p[i] += p[0] * str1;
                    }
                    else
                    p[i] += p[j] * str1;
                }
            }
            else
            {

                item = ui->tableWidget->item(j,i);
                str1 = item->text().toDouble();
                double str2 = ui->tableWidget->item(j,i-1)->text().toDouble();
                column17 *= 1-(p[j-1]*str2);
                column16 *= 1-(p[j-1]*str1);
            }
        }
        if (i==15)
        {
            p[i] = 1-column16;
            p[i+1] = 1-column17;
        }
    }
    QLineEdit *labels [51] ={ui->l1,  // 1 таблица 0
                             ui->l2,  // 1 таблица 1
                             ui->l3,  // 1 таблица 2
                             ui->l4,  // 1 таблица 3
                             ui->l5,  // 1 таблица 4
                             ui->l6,  // 1 таблица 5
                             ui->l7,  // 1 таблица 6
                             ui->l8,  // 1 таблица 7
                             ui->l9,  // 1 таблица 8
                             ui->l10, // 1 таблица 9
                             ui->l11, // 1 таблица 10
                             ui->l12, // 1 таблица 11
                             ui->l13, // 1 таблица 12
                             ui->l14, // 1 таблица 13
                             ui->l15, // 1 таблица 14
                             ui->l16, // 1 таблица 15
                             ui->l17, // 1 таблица 16
                             ui->l18, // 2 таблица 17
                             ui->l19, // 2 таблица 18
                             ui->l20, // 2 таблица 19
                             ui->l21, // 2 таблица 20
                             ui->l22, // 2 таблица 21
                             ui->l23, // 2 таблица 22
                             ui->l24, // 2 таблица 23
                             ui->l25, // 2 таблица 24
                             ui->l26, // 2 таблица 25
                             ui->l27, // 2 таблица 26
                             ui->l28, // 3 таблица 27
                             ui->l29, // 3 таблица 28
                             ui->l30, // 3 таблица 29
                             ui->l31, // 3 таблица 30
                             ui->l32, // 3 таблица 31
                             ui->l33, // 3 таблица 32
                             ui->l34, // 3 таблица 33
                             ui->l35, // 3 таблица 34
                             ui->l36, // 4 таблица 35
                             ui->l37, // 4 таблица 36
                             ui->l38, // 4 таблица 37
                             ui->l39, // 4 таблица 38
                             ui->l40, // 4 таблица 39
                             ui->l41, // 4 таблица 40
                             ui->l42, // 4 таблица 41
                             ui->l43, // 4 таблица 42
                             ui->l44, // 5 таблица 43
                             ui->l45, // 5 таблица 44
                             ui->l46, // 5 таблица 45
                             ui->l47, // 5 таблица 46
                             ui->l48, // 5 таблица 47
                             ui->l49, // 5 таблица 48
                             ui->l50, // 5 таблица 49
                             ui->l51  // 5 таблица 50
                            };

    ///
    // считалка в два прохода:
    // если следующая вероятность не ноль и буффер нижний >0 то считаю дальше
    ///
    double buf=0;
    double p2[10]={0};
    for (int q= 0; q<2; q++)
    {
        //в первый проход считваю всех у кого ниже диагонали, во второй считаю всех оставшихся нулевыхe
        if(q==0)
        {
            for (int i =0; i < ui->tableWidget_2->columnCount();i++) // столбец = 16
            {
                int buf_check_bot=0;
                for (int j =0; j < ui->tableWidget_2->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_2->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(i!=7 && i!=8)
                        {
                            //проверяю есть ли ниже диагонали
                            for (int k=4+i;k<ui->tableWidget_2->rowCount();k++)
                            {
                                if ( ui->tableWidget_2->item(k,i)->text().toDouble() != 0)
                                {
                                    buf_check_bot++;
                                }
                            }
                            // если ниже диагонали что-то есть, то пропускаю этот элемент
                            if (buf_check_bot!=0)
                            {
                                break;
                            }
                            // если столбец нормальный
                            if (buf_check_bot==0)
                            {
                                if(j<4)
                                {
                                    if (j==0)
                                    {
                                        buf += p[2] * str1;
                                    }
                                    if (j==1)
                                    {
                                        buf += p[4] * str1;
                                    }
                                    if (j==2)
                                    {
                                        buf += p[6] * str1;
                                    }
                                    if (j==3)
                                    {
                                        buf += p[7] * str1;
                                    }
                                }
                                else
                                {
                                    buf += p2[j-4] * str1;
                                }
                            }
                        }
                    }
                }
                p2[i] +=buf;
                buf=0;
            }
        }
        //второй заход
        if(q>0)
        {
            for (int i =0; i < ui->tableWidget_2->columnCount();i++) // столбец = 16
            {
                for (int j =0; j < ui->tableWidget_2->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_2->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(p2[i]==0)
                        {
                            //проверяю не нулевая ли вероятность, если да тоо пересчитываю и иду дальше
                            if(j<4)
                            {
                                if (j==0)
                                {
                                    buf += p[2] * str1;
                                }
                                if (j==1)
                                {
                                    buf += p[4] * str1;
                                }
                                if (j==2)
                                {
                                    buf += p[6] * str1;
                                }
                                if (j==3)
                                {
                                    buf += p[7] * str1;
                                }
                            }
                            else
                            {
                                if (j!=11)
                                {
                                     buf += p2[j-4] * str1;
                                }
                                else
                                {
                                    buf += p2[9] * str1;
                                }
                            }
                        }
                    }
                }
                p2[i] +=buf;
                buf=0;
            }
        }
    }

    ///
    // считалка в два прохода:
    // если следующая вероятность не ноль и буффер нижний >0 то считаю дальше
    ///
    double p3[8]={0};
    for (int q= 0; q<2; q++)
    {
        //в первый проход считваю всех у кого ниже диагонали, во второй считаю всех оставшихся нулевых
        if(q==0)
        {
            for (int i =0; i < ui->tableWidget_3->columnCount();i++) // столбец = 16
            {
                int buf_check_bot=0;
                for (int j =0; j < ui->tableWidget_3->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_3->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(i!=5 && i!=6)
                        {
                            //проверяю есть ли ниже диагонали
                            for (int k=3+i;k<ui->tableWidget_3->rowCount();k++)
                            {
                                if ( ui->tableWidget_3->item(k,i)->text().toDouble() != 0)
                                {
                                    buf_check_bot++;
                                }
                            }
                            // если ниже диагонали что-то есть, то пропускаю этот элемент
                            if (buf_check_bot!=0)
                            {
                                break;
                            }
                            // если столбец нормальный
                            if (buf_check_bot==0)
                            {
                                if(j<3)
                                {
                                    if (j==0)
                                    {
                                        buf += p[6] * str1;
                                    }
                                    if (j==1)
                                    {
                                        buf += p[7] * str1;
                                    }
                                    if (j==2)
                                    {
                                        buf += p[9] * str1;
                                    }
                                }
                                else
                                {
                                    buf += p3[j-3] * str1;
                                }
                            }
                        }
                    }
                }
                p3[i] +=buf;
                buf=0;
            }
        }
        if(q>0)
        {
            for (int i =0; i < ui->tableWidget_3->columnCount();i++) // столбец = 16
            {
                for (int j =0; j < ui->tableWidget_3->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_3->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(p3[i]==0)
                        {
                            //проверяю не нулевая ли вероятность, если да тоо пересчитываю и иду дальше
                            if(j<3)
                            {
                                if (j==0)
                                {
                                    buf += p[6] * str1;
                                }
                                if (j==1)
                                {
                                    buf += p[7] * str1;
                                }
                                if (j==2)
                                {
                                    buf += p[9] * str1;
                                }
                            }
                            else
                            {
                                if (j!=8)
                                {
                                     buf += p3[j-3] * str1;
                                }
                                else
                                {
                                    buf += p3[7] * str1;
                                }
                            }
                        }
                    }
                }
                p3[i] +=buf;
                buf=0;
            }
        }
    }

    ///
    // считалка в два прохода:
    // если следующая вероятность не ноль и буффер нижний >0 то считаю дальше
    ///
    double p4[8]={0};
    for (int q= 0; q<2; q++)
    {
        //в первый проход считваю всех у кого ниже диагонали, во второй считаю всех оставшихся нулевых
        if(q==0)
        {
            for (int i =0; i < ui->tableWidget_4->columnCount();i++) // столбец = 16
            {
                int buf_check_bot=0;
                for (int j =0; j < ui->tableWidget_4->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_4->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(i!=5 && i!=6)
                        {
                            //проверяю есть ли ниже диагонали
                            for (int k=2+i;k<ui->tableWidget_4->rowCount();k++)
                            {
                                if ( ui->tableWidget_4->item(k,i)->text().toDouble() != 0)
                                {
                                    buf_check_bot++;
                                }
                            }
                            // если ниже диагонали что-то есть, то пропускаю этот элемент
                            if (buf_check_bot!=0)
                            {
                                break;
                            }
                            // если столбец нормальный
                            if (buf_check_bot==0)
                            {
                                if(j<2)
                                {
                                    if (j==0)
                                    {
                                        buf += p[4] * str1;
                                    }
                                    if (j==1)
                                    {
                                        buf += p[7] * str1;
                                    }
                                }
                                else
                                {
                                    buf += p4[j-2] * str1;
                                }
                            }
                        }
                    }
                }
                p4[i] +=buf;
                buf=0;
            }
        }
        if(q>0)
        {
            for (int i =0; i < ui->tableWidget_4->columnCount();i++) // столбец = 16
            {
                for (int j =0; j < ui->tableWidget_4->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_4->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(p4[i]==0)
                        {
                            //проверяю не нулевая ли вероятность, если да тоо пересчитываю и иду дальше
                            if(j<2)
                            {
                                if (j==0)
                                {
                                    buf += p[4] * str1;
                                }
                                if (j==1)
                                {
                                    buf += p[7] * str1;
                                }
                            }
                            else
                            {
                                if (j!=7)
                                {
                                     buf += p4[j-2] * str1;
                                }
                                else
                                {
                                    buf += p4[7] * str1;
                                }
                            }
                        }
                    }
                }
                p4[i] +=buf;
                buf=0;
            }
        }
    }

    ///
    // считалка в два прохода:
    // если следующая вероятность не ноль и буффер нижний >0 то считаю дальше
    ///
    double p5[8]={0};
    for (int q= 0; q<2; q++)
    {
        //в первый проход считваю всех у кого ниже диагонали, во второй считаю всех оставшихся нулевых
        if(q==0)
        {
            for (int i =0; i < ui->tableWidget_5->columnCount();i++) // столбец = 16
            {
                int buf_check_bot=0;
                for (int j =0; j < ui->tableWidget_5->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_5->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(i!=5 && i!=6)
                        {
                            //проверяю есть ли ниже диагонали
                            for (int k=2+i;k<ui->tableWidget_5->rowCount();k++)
                            {
                                if ( ui->tableWidget_5->item(k,i)->text().toDouble() != 0)
                                {
                                    buf_check_bot++;
                                }
                            }
                            // если ниже диагонали что-то есть, то пропускаю этот элемент
                            if (buf_check_bot!=0)
                            {
                                break;
                            }
                            // если столбец нормальный
                            if (buf_check_bot==0)
                            {
                                if(j<2)
                                {
                                    if (j==0)
                                    {
                                        buf += p[4] * str1;
                                    }
                                    if (j==1)
                                    {
                                        buf += p[10] * str1;
                                    }
                                }
                                else
                                {
                                    buf += p5[j-2] * str1;
                                }
                            }
                        }
                    }
                }
                p5[i] +=buf;
                buf=0;
            }
        }
        if(q>0)
        {
            for (int i =0; i < ui->tableWidget_5->columnCount();i++) // столбец = 16
            {
                for (int j =0; j < ui->tableWidget_5->rowCount();j++) // строка = 13
                {
                    QTableWidgetItem *item = ui->tableWidget_5->item(j,i);
                    str1 = item->text().toDouble();
                    if (NULL != item)
                    {
                        if(p5[i]==0)
                        {
                            //проверяю не нулевая ли вероятность, если да тоо пересчитываю и иду дальше
                            if(j<2)
                            {
                                if (j==0)
                                {
                                    buf += p[4]* str1;
                                }
                                if (j==1)
                                {
                                    buf += p[10] * str1;
                                }
                            }
                            else
                            {
                                if (j!=7)
                                {
                                     buf += p5[j-2] * str1;
                                }
                                else
                                {
                                    buf += p5[7] * str1;
                                }
                            }
                        }
                    }
                }
                p5[i] +=buf;
                buf=0;
            }
        }
    }

    for (int i=0; i<51;i++)
    {
        if (i<=16)
        {
            labels[i]->clear();
            labels[i]->setText(QString::number(p[i]));
        }
        else
        {
            if (i>16 && i <=26 )
            {
                labels[i]->clear();
                labels[i]->setText(QString::number(p2[i-17]));
            }
            else
            {
                if (i>26 && i <=34 )
                {
                    labels[i]->clear();
                    labels[i]->setText(QString::number(p3[i-27]));
                }
                else
                {
                    if (i>34 && i <=42 )
                    {
                        labels[i]->clear();
                        labels[i]->setText(QString::number(p4[i-35]));
                    }
                    else
                    {
                        if (i>42 && i <=51 )
                        {
                            labels[i]->clear();
                            labels[i]->setText(QString::number(p5[i-43]));
                        }
                    }
                }
            }
        }
    }


}
