#ifndef ROLEX_H
#define ROLEX_H
#include <QWidget>
#include <QLCDNumber>
#include<QTimerEvent>
#include <QTime>



class rolex : public QWidget{
    Q_OBJECT
public:
    rolex(QWidget *parent = nullptr);
    void timerEvent(QTimerEvent *e);
    void updatetime();
protected:
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QLCDNumber *lcd3;

protected:
    void createWidgets();
    void placeWidgets();
};

#endif // ROLEX_H
