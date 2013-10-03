/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>
#include <QtOpenGL>

#include <math.h>

#include "glwidget.h"
#include "qtlogo.h"
#define PI 3.1415926
#ifndef GL_MULTISAMPLE
#define GL_MULTISAMPLE  0x809D
#endif
// x,z,y  2,3,6,7
//! [0]
static const float vertex_list1[][3] =
{
    -0.5f, -0.5f, -0.5f,
    0.5f, -0.5f, -0.5f,
    -0.5f, 0.5f, -0.5f,
    0.5f, 0.5f, -0.5f,
    -0.5f, -0.5f, 0.5f,
    0.5f, -0.5f, 0.5f,
    -0.5f, 0.5f, 0.5f,
    0.5f, 0.5f, 0.5f,
};
static const float vertex_list2[][3] =
{
    -0.05f, -0.5f, -0.05f,
    0.05f, -0.5f, -0.05f,
    -0.05f, 0.1f, -0.05f,
    0.05f, 0.1f, -0.05f,
    -0.05f, -0.5f, 0.05f,
    0.05f, -0.5f, 0.05f,
    -0.05f, 0.1f, 0.05f,
    0.05f, 0.1f, 0.05f,
};
// 将要使用的顶点的序号保存到一个数组里面
static const float vertex_list3[][3] =
{
    -0.05f, -0.5f, -0.05f,
    0.05f, -0.5f, -0.05f,
    -0.05f, -0.1f, -0.05f,
    0.05f, -0.1f, -0.05f,
    -0.05f, -0.5f, 0.05f,
    0.05f, -0.5f, 0.05f,
    -0.05f, -0.1f, 0.05f,
    0.05f, -0.1f, 0.05f,
};
static const GLint index_list[][2] =
{
    {0, 1},
    {2, 3},//
    {4, 5},
    {6, 7},//
    {0, 2},
    {1, 3},
    {4, 6},
    {5, 7},
    {0, 4},
    {1, 5},
    {7, 3},//
    {2, 6}//
};
void GLWidget::setmypoint(float x, float z, float y, float xh, float zh, float yh)
{
    mypoint[0][0]=x;
    mypoint[0][1]=z;
    mypoint[0][2]=y;
    mypoint[1][0]=x+xh;
    mypoint[1][1]=z;
    mypoint[1][2]=y;
    mypoint[2][0]=x;
    mypoint[2][1]=z+zh;
    mypoint[2][2]=y;
    mypoint[3][0]=x+xh;
    mypoint[3][1]=z+zh;
    mypoint[3][2]=y;
    mypoint[4][0]=x;
    mypoint[4][1]=z;
    mypoint[4][2]=y+yh;
    mypoint[5][0]=x+xh;
    mypoint[5][1]=z;
    mypoint[5][2]=y+yh;
    mypoint[6][0]=x;
    mypoint[6][1]=z+zh;
    mypoint[6][2]=y+yh;
    mypoint[7][0]=x+xh;
    mypoint[7][1]=z+zh;
    mypoint[7][2]=y+yh;
}

// 绘制立方体
void GLWidget::DrawCube(const float vertex_list[][3],bool f)
{
    int i,j;
    if(f)
    {
        glEnable(GL_LINE_STIPPLE);
        glLineWidth (1.0);
        glLineStipple (1, 0x0F0F);
    }
    else
        glDisable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    for(i=0; i<12; ++i) // 12 条线段

    {
        if(i==1||i==3||i==10||i==11)
            glColor3f(1.0, 1.0, 0.0);
        else
            glColor3f(1.0, 1.0, 1.0);
        for(j=0; j<2; ++j) // 每条线段 2个顶点

        {

            glVertex3fv(vertex_list[index_list[i][j]]);
        }
    }
    glEnd();
}
void GLWidget::drawSphere(GLfloat xx, GLfloat yy, GLfloat zz, GLfloat radius, GLfloat M, GLfloat N)
{
 float step_z = PI/M;
 float step_xy = 2*PI/N;
 float x[4],y[4],z[4];
 float angle_z = 0.0;
 float angle_xy = 0.0;
 int i=0, j=0;
 glBegin(GL_QUADS);
  for(i=0; i<M; i++)
  {
   angle_z = i * step_z;

   for(j=0; j<N; j++)
   {
    angle_xy = j * step_xy;
    x[0] = radius * sin(angle_z) * cos(angle_xy);
    y[0] = radius * sin(angle_z) * sin(angle_xy);
    z[0] = radius * cos(angle_z);
    x[1] = radius * sin(angle_z + step_z) * cos(angle_xy);
    y[1] = radius * sin(angle_z + step_z) * sin(angle_xy);
    z[1] = radius * cos(angle_z + step_z);
    x[2] = radius*sin(angle_z + step_z)*cos(angle_xy + step_xy);
    y[2] = radius*sin(angle_z + step_z)*sin(angle_xy + step_xy);
    z[2] = radius*cos(angle_z + step_z);
    x[3] = radius * sin(angle_z) * cos(angle_xy + step_xy);
    y[3] = radius * sin(angle_z) * sin(angle_xy + step_xy);
    z[3] = radius * cos(angle_z);
    for(int k=0; k<4; k++)
    {
     glVertex3f(xx+x[k], yy+y[k],zz+z[k]);
    }
   }
  }
 glEnd();
}
void GLWidget::setPath()
{
    fp=true;
    updateGL();

}
void GLWidget::drawPath()
{
     float p[3];
     glColor3f(1.0,0.0,0.0);
  //   glBegin(GL_LINES);
     int i;
     for(i=0;i<bill->ploylen-1;i++)
     {
         if(bill->ploy[i].z>0)
         {
             glBegin(GL_LINES);
             p[0]=ax+(bill->ploy[i].x-bx)/div;
             p[1]=-0.5f;
             p[2]=ay+(bill->ploy[i].y-by)/div;
             glVertex3fv(p);
             p[0]=ax+(bill->ploy[i].x-bx)/div;
             p[1]=-0.5f+bill->ploy[i].z*0.06;
             p[2]=ay+(bill->ploy[i].y-by)/div;
             glVertex3fv(p);
             glEnd();
             drawSphere(p[0], p[1], p[2],  0.01,  31 ,  62);
             glBegin(GL_LINES);
             p[0]=ax+(bill->ploy[i].x-bx)/div;
             p[1]=-0.5f+bill->ploy[i].z*0.06;
             p[2]=ay+(bill->ploy[i].y-by)/div;
             glVertex3fv(p);
             p[0]=ax+(bill->ploy[i].x-bx)/div;
             p[1]=-0.5f;
             p[2]=ay+(bill->ploy[i].y-by)/div;
             glVertex3fv(p);
             glEnd();
         }
         glBegin(GL_LINES);
         p[0]=ax+(bill->ploy[i].x-bx)/div;
         p[1]=-0.5f;
         p[2]=ay+(bill->ploy[i].y-by)/div;
         glVertex3fv(p);
         p[0]=ax+(bill->ploy[i+1].x-bx)/div;
         p[1]=-0.5f;
         p[2]=ay+(bill->ploy[i+1].y-by)/div;
         glVertex3fv(p);
         glEnd();
         drawSphere(p[0], p[1], p[2],  0.01,  31 ,  62);
     }
   //  glEnd();

}

static float rotate = 0;
static int times = 0;
GLWidget::GLWidget(conhouse *hou,conshelf *she,conbill *bll,QWidget *parent)
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{
    logo = 0;
    xRot = 0;
    yRot = 0;
    zRot = 0;
    fp=false;
    house=hou;
    shelf=she;
    bill=bll;
    qtGreen = QColor::fromCmykF(0.40, 0.0, 1.0, 0.0);
    qtPurple = QColor::fromCmykF(0.39, 0.39, 0.0, 0.0);
}
//! [0]

//! [1]
GLWidget::~GLWidget()
{
}
//! [1]

//! [2]
QSize GLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}
//! [2]

//! [3]
QSize GLWidget::sizeHint() const
//! [3] //! [4]
{
    return QSize(800, 800);
}
//! [4]

static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}

//! [5]
void GLWidget::setXRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != xRot) {
        xRot = angle;
        emit xRotationChanged(angle);
        updateGL();
    }
}
//! [5]

void GLWidget::setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != yRot) {
        yRot = angle;
        emit yRotationChanged(angle);
        updateGL();
    }
}

void GLWidget::setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != zRot) {
        zRot = angle;
        emit zRotationChanged(angle);
        updateGL();
    }
}

//! [6]
void GLWidget::initializeGL()
{
    qglClearColor(qtPurple.dark());

 //   logo = new QtLogo(this, 64);
  //  logo->setColor(qtGreen.dark());

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_MULTISAMPLE);
    static GLfloat lightPosition[4] = { 0.5, 5.0, 7.0, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
}
//! [6]

//! [7]
void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
    glRotatef(xRot / 16.0, 1.0, 0.0, 0.0);
    glRotatef(yRot / 16.0, 0.0, 1.0, 0.0);
    glRotatef(zRot / 16.0, 0.0, 0.0, 1.0);
    if(fp)
    {
        drawPath();
    }
    myDraw();
   // DrawCube(vertex_list1);
    //DrawCube(vertex_list2);
    //DrawCube(vertex_list3);
    //setmypoint(-0.05,-0.5,-0.05,0.2,0.2,0.1);
   // DrawCube(mypoint);
   // logo->draw();
}
//! [7]
void GLWidget::myDraw()
{
    div=-1;
    bx = house->house.figure->rect().x();
    by = house->house.figure->rect().y();
   // float ax ,ay;
    int i,j;
    if(house->house.figure->rect().width()>div)
        div=house->house.figure->rect().width();
    if(house->house.figure->rect().height()>div)
        div=house->house.figure->rect().height();
    ax=-house->house.figure->rect().width()/(div*2);
    ay=-house->house.figure->rect().height()/(div*2);
    setmypoint(ax,-0.5,ay,house->house.figure->rect().width()/div,1,house->house.figure->rect().height()/div);
    DrawCube(mypoint,false);
    for(i=0;i<shelf->len;i++)
    {

        for(j=0;j<shelf->sh[i].layer-1;j++)
        {
            setmypoint(ax+(shelf->sh[i].x-bx)/div,-0.5,ay+(shelf->sh[i].y-by)/div,shelf->sh[i].xh/div,0.06*(j+1),shelf->sh[i].yh/div);
            DrawCube(mypoint,true);
        }
        setmypoint(ax+(shelf->sh[i].x-bx)/div,-0.5,ay+(shelf->sh[i].y-by)/div,shelf->sh[i].xh/div,0.06*(j+1),shelf->sh[i].yh/div);
        DrawCube(mypoint,false);
    }

}

//! [8]
void GLWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#ifdef QT_OPENGL_ES_1
    glOrthof(-0.8, +0.8, -0.8, +0.8, 6.4, 24.0);
 //   glOrthof(-0.5, +0.5, -0.5, +0.5, 4.0, 15.0);
#else
    glOrtho(-0.8, +0.8, -0.8, +0.8, 6.4, 24.0);
 //   glOrtho(-0.5, +0.5, -0.5, +0.5, 4.0, 15.0);
#endif
    glMatrixMode(GL_MODELVIEW);
}
//! [8]

//! [9]
void GLWidget::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}
//! [9]

//! [10]
void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        setXRotation(xRot + 8 * dy);
        setYRotation(yRot + 8 * dx);
    } else if (event->buttons() & Qt::RightButton) {
        setXRotation(xRot + 8 * dy);
        setZRotation(zRot + 8 * dx);
    }
    lastPos = event->pos();
}
//! [10]
