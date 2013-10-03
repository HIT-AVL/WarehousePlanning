#ifndef H3DDIALOG_H
#define H3DDIALOG_H
#include <QDialog>
#include<conhouse.h>
#include<conshelf.h>
#include<conbill.h>
QT_BEGIN_NAMESPACE
class QSlider;
QT_END_NAMESPACE
//! [0]
class GLWidget;
class h3dDialog : public QDialog
{
    Q_OBJECT
public:
    explicit h3dDialog(conhouse *house,conshelf*shelf,conbill *bill,QWidget *parent = 0);
    ~h3dDialog();
    void accept();
signals:

public slots:
protected:
    QSlider *createSlider();
    QPushButton *path;
    GLWidget *glWidget;
    QSlider *xSlider;
    QSlider *ySlider;
    QSlider *zSlider;
    conhouse *hou;
    conshelf *she;
    conbill *bll;
private slots:
    void onAccepted();
   // void onP
    //void on_buttonBox_rejected();
};

#endif // SHELFDIALOG_H
