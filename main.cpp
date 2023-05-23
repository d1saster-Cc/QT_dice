#include "dice.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dice w;
    w.first = 5;
    w.second = 6;
    w.resize(280, 270);
    w.setWindowTitle("Dice");
    w.show();
    return a.exec();
}
