//#include "renderarea.h"
#include "dice.h"

#include <QtWidgets>

Dice::Dice(QWidget *parent) : QWidget(parent), first(1), second(1) {}

void Dice::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    paint();
}

void Dice::paint() {
  QString text = "6";
  QPainter painter(this);
  painter.setPen(QColor("#000000"));

  painter.setBrush(QBrush("#ffffff"));
  painter.drawRect(50, 50, 50, 50);
  painter.drawRect(120, 50, 50, 50);

  painter.setBrush(QBrush("#111111"));
  switch (first) {
    case 1:
        painter.drawEllipse(70, 70, 10, 10);
        break;
    case 2:
        painter.drawEllipse(55, 85, 10, 10);
        painter.drawEllipse(85, 55, 10, 10);
        break;
    case 3:
        painter.drawEllipse(55, 85, 10, 10);
        painter.drawEllipse(70, 70, 10, 10);
        painter.drawEllipse(85, 55, 10, 10);
        break;
    case 4:
        painter.drawEllipse(55, 85, 10, 10);
        painter.drawEllipse(85, 55, 10, 10);
        painter.drawEllipse(85, 85, 10, 10);
        painter.drawEllipse(55, 55, 10, 10);
        break;
    case 5:
        painter.drawEllipse(55, 85, 10, 10);
        painter.drawEllipse(85, 55, 10, 10);
        painter.drawEllipse(85, 85, 10, 10);
        painter.drawEllipse(55, 55, 10, 10);
        painter.drawEllipse(70, 70, 10, 10);
        break;
    case 6:
        painter.drawEllipse(55, 85, 10, 10);
        painter.drawEllipse(85, 55, 10, 10);
        painter.drawEllipse(85, 85, 10, 10);
        painter.drawEllipse(55, 55, 10, 10);
        painter.drawEllipse(55, 70, 10, 10);
        painter.drawEllipse(85, 70, 10, 10);
        break;
  }

  switch (second) {
    case 1:
        painter.drawEllipse(140, 70, 10, 10);
        break;
    case 2:
        painter.drawEllipse(125, 85, 10, 10);
        painter.drawEllipse(155, 55, 10, 10);
        break;
    case 3:
        painter.drawEllipse(125, 85, 10, 10);
        painter.drawEllipse(140, 70, 10, 10);
        painter.drawEllipse(155, 55, 10, 10);
        break;
    case 4:
        painter.drawEllipse(125, 85, 10, 10);
        painter.drawEllipse(155, 55, 10, 10);
        painter.drawEllipse(155, 85, 10, 10);
        painter.drawEllipse(125, 55, 10, 10);
        break;
    case 5:
        painter.drawEllipse(125, 85, 10, 10);
        painter.drawEllipse(155, 55, 10, 10);
        painter.drawEllipse(155, 85, 10, 10);
        painter.drawEllipse(125, 55, 10, 10);
        painter.drawEllipse(140, 70, 10, 10);
        break;
    case 6:
        painter.drawEllipse(125, 85, 10, 10);
        painter.drawEllipse(155, 55, 10, 10);
        painter.drawEllipse(155, 85, 10, 10);
        painter.drawEllipse(125, 55, 10, 10);
        painter.drawEllipse(125, 70, 10, 10);
        painter.drawEllipse(155, 70, 10, 10);
        break;
  }
}
