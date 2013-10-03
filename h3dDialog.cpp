#include "h3dDialog.h"
#include <QtGui>
#include "glwidget.h"
#include "QPushButton.h"
h3dDialog::h3dDialog(conhouse *house,conshelf *shelf,conbill *bill,QWidget *parent) :
    QDialog(parent)
{

    glWidget = new GLWidget(house,shelf,bill);
    hou=house;
    she=shelf;
    bll=bill;
    path= new QPushButton("path");
 //   path->setMaximumSize(5,2);
    xSlider = createSlider();
    ySlider = createSlider();
    zSlider = createSlider();

    connect(xSlider, SIGNAL(valueChanged(int)), glWidget, SLOT(setXRotation(int)));
    connect(glWidget, SIGNAL(xRotationChanged(int)), xSlider, SLOT(setValue(int)));
    connect(ySlider, SIGNAL(valueChanged(int)), glWidget, SLOT(setYRotation(int)));
    connect(glWidget, SIGNAL(yRotationChanged(int)), ySlider, SLOT(setValue(int)));
    connect(zSlider, SIGNAL(valueChanged(int)), glWidget, SLOT(setZRotation(int)));
    connect(glWidget, SIGNAL(zRotationChanged(int)), zSlider, SLOT(setValue(int)));
    connect(path,SIGNAL(clicked()),glWidget,SLOT(setPath()));
//! [0]

//! [1]
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(glWidget);
    mainLayout->addWidget(xSlider);
    mainLayout->addWidget(ySlider);
    mainLayout->addWidget(zSlider);
    mainLayout->addWidget(path);
    setLayout(mainLayout);

    xSlider->setValue(15 * 16);
    ySlider->setValue(345 * 16);
    zSlider->setValue(0 * 16);
    setWindowTitle(tr("Hello GL"));

    //ui->house_3d->
  //  ui->house_3d(h);
    //now.figure=curItem;
}
QSlider *h3dDialog::createSlider()
{
    QSlider *slider = new QSlider(Qt::Vertical);
    slider->setRange(0, 360 * 16);
    slider->setSingleStep(16);
    slider->setPageStep(15 * 16);
    slider->setTickInterval(15 * 16);
    slider->setTickPosition(QSlider::TicksRight);
    return slider;
}
h3dDialog::~h3dDialog(){
//    delete ui;
}

void h3dDialog::accept()
{
    onAccepted();
    QDialog::accept();
}

void h3dDialog::onAccepted()
{

}

/*void shelfdialog::on_buttonBox_rejected()
{

}
*/
