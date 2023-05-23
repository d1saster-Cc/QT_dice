#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QComboBox;
class QLabel;
class QSpinBox;
QT_END_NAMESPACE
class RenderArea;

class Dice : public QWidget
{
    Q_OBJECT

public:
    Dice(QWidget *parent = 0);
    size_t first, second;
protected:
    void paintEvent(QPaintEvent *e);

private:
    void paint();
};

#endif // DICE_H
