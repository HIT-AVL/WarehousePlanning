#include <qgl.h>                              //要加入的库
#include <QtGui/qevent.h>                     //要加入的库

class house_3d : public QGLWidget
{
    Q_OBJECT

public:
    explicit house_3d(QWidget* parent = 0);
    ~house_3d();

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void keyPressEvent(QKeyEvent *e);
    bool fullscreen;

  //  Ui::h3dDialog *ui;
private:

};
