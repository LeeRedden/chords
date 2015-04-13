#include "CMakeQt.h"

CMakeQt::CMakeQt(QWidget *parent)
    : QDialog(parent)
    , sumSoFar(0)
{
    m_ui.setupUi(this);
    m_ui.label->setText( "Hand Movement GUI for Roy the Robot, by Lee Redden" );

    m_ui.horizontalSlider->setRange(0,100);
    connect( m_ui.horizontalSlider, SIGNAL(sliderMoved(int)), this, SLOT(sliderMoved()));

    m_ui.dial->setRange(0,200);
    connect( m_ui.dial, SIGNAL(sliderMoved(int)), this, SLOT(dialMoved()));
}
void CMakeQt::dialMoved()
{
    m_ui.lcdNumber->display( m_ui.dial->value() );
}
void CMakeQt::sliderMoved()
{
    m_ui.lcdNumber->display( m_ui.horizontalSlider->value() );
}
