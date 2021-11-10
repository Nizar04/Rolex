#include "rolex.h"
#include <QHBoxLayout>
#include <QTime>
#include<QTimerEvent>

rolex::rolex(QWidget *parent):QWidget(parent)
{
 createWidgets();
 placeWidgets();
 setWindowTitle("Rolex Clock");
 updatetime();
 startTimer(1000);
}
void rolex::createWidgets(){
    lcd1 = new QLCDNumber;
    lcd2 = new QLCDNumber;
    lcd3 = new QLCDNumber;
    lcd1->setDigitCount(2);
    lcd2->setDigitCount(2);
    lcd3->setDigitCount(2);
     lcd1->setMinimumHeight(80);
     lcd2->setMinimumHeight(80);
     lcd3->setMinimumHeight(50);

}
void rolex::placeWidgets(){
    QLayout *layout = new QHBoxLayout ;
    layout->addWidget(lcd1);
    layout->addWidget(lcd2);
    layout->addWidget(lcd3);
    setLayout(layout);
}
void rolex::updatetime(){
 auto T= QTime::currentTime();

 lcd1->display(T.hour());
 lcd2->display(T.minute());
 lcd3->display(T.second());

}
void rolex::timerEvent(QTimerEvent *e) {
    updatetime();
}
