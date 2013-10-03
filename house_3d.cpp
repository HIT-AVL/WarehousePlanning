#include "house_3d.h"
#include <QtGui>
#include <QtCore>
#include <QtOpenGL>
#include "ui_h3dDialog.h"
house_3d::house_3d(QWidget *parent) :
    QGLWidget(parent)
{
  //  ui->setupUi(this);
    fullscreen = false;

}

//这是对虚函数，这里是重写该函数
void house_3d::initializeGL()
{
    setGeometry(300, 150, 640, 480);//设置窗口初始位置和大小
    glShadeModel(GL_FLAT);//设置阴影平滑模式
    glClearColor(0.5, 1.0, 0.2, 0);//改变窗口的背景颜色，不过我这里貌似设置后并没有什么效果
    glClearDepth(1.0);//设置深度缓存
    glEnable(GL_DEPTH_TEST);//允许深度测试
    glDepthFunc(GL_LEQUAL);//设置深度测试类型
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);//进行透视校正
}

void house_3d::paintGL()
{
    //glClear()函数在这里就是对initializeGL()函数中设置的颜色和缓存深度等起作用
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();//重置当前的模型观察矩阵？不是很理解！
}

//该程序是设置opengl场景透视图，程序中至少被执行一次(程序启动时).
void house_3d::resizeGL(int width, int height)
{
    if(0 == height)
        height = 1;//防止一条边为0
    glViewport(0, 0, (GLint)width, (GLint)height);//重置当前视口，本身不是重置窗口的，只不过是这里被Qt给封装好了
    glMatrixMode(GL_PROJECTION);//选择投影矩阵
    glLoadIdentity();//重置选择好的投影矩阵
   // gluPerspective(45.0, (GLfloat)width/(GLfloat)height, 0.1, 100.0);//建立透视投影矩阵
    //glMatirxMode(GL_MODELVIEW);//以下2句和上面出现的解释一样
    glLoadIdentity();


}
void house_3d::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
        //F1键为全屏和普通屏显示切换键
        case Qt::Key_F1:
            fullscreen = !fullscreen;
            if(fullscreen)
                showFullScreen();
            else
            {
                setGeometry(300, 150, 640, 480);
                showNormal();
            }
            updateGL();
            break;
        //Ese为退出程序键
        case Qt::Key_Escape:
            close();
    }
}

house_3d::~house_3d()
{
   // delete ui;
}
