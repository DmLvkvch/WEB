
#include "settingswidget.h"
#include "settingsitem.h"
#include "connectioniface.h"
#include "setting.h"
#include <QLabel>
#include <QLineEdit>
#include <QPainter>
#include <QSpinBox>
#include <QStyleOption>
#include <QVBoxLayout>

SettingsWidget::SettingsWidget(QList<QSharedPointer<ConnectionIFace>> & ifaces): QWidget(nullptr)
{
    _saveButton = new QPushButton;
    _layout = new QVBoxLayout;
    _buttonsLayout = new QHBoxLayout;
    this->_ifaces = ifaces;
    this->setWindowTitle(tr("Настройки"));
    _saveButton->setText(tr("Сохранить"));
    setLayout(_layout);
    _buttonsLayout->addWidget(_saveButton);
    init();
    _layout->addLayout(_buttonsLayout);
}

SettingsWidget::~SettingsWidget()
{

}

void SettingsWidget::init()
{
    foreach (auto &iface, _ifaces)
    {
        QVBoxLayout* vbl = new QVBoxLayout;
        QLabel* name = new QLabel;
        name->setText(iface->name());
        vbl->addWidget(name);
        foreach (auto& setting, iface->settings())
        {
            vbl->addWidget(new Setting(setting));
        }
         _layout->addLayout(vbl);
    }
}

void SettingsWidget::paintEvent(QPaintEvent* e)
{
    QWidget::paintEvent(e);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    p.drawRoundedRect(0,5,width()-5, height()-7,3,3);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void SettingsWidget::saveSettings()
{

}
