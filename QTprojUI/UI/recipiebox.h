#ifndef RECIPIEBOX_H
#define RECIPIEBOX_H

#include <QDockWidget>

namespace Ui {
class recipieBox;
}

class recipieBox : public QDockWidget
{
    Q_OBJECT

public:
    explicit recipieBox(QWidget *parent = nullptr);
    ~recipieBox();

private:
    Ui::recipieBox *ui;
};

#endif // RECIPIEBOX_H
