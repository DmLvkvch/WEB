#ifndef MODALWIDGET_H
#define MODALWIDGET_H

#include <QDialog>

namespace Ui {
class ModalWidget;
}

class ModalWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ModalWidget(QWidget *parent = nullptr);
    ~ModalWidget();

private:
    Ui::ModalWidget *ui;
};

#endif // MODALWIDGET_H
