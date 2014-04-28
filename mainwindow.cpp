#include <QtGui>
#include <QHBoxLayout>

 #include "glwidget.hpp"
 #include "mainwindow.hpp"

 Window::Window()
 {
     glWidget = new GLWidget;


     QHBoxLayout *mainLayout = new QHBoxLayout;
     mainLayout->addWidget(glWidget);
     setLayout(mainLayout);

     setWindowTitle(tr("Symulator"));
 }

 void Window::keyPressEvent(QKeyEvent *e)
 {
     if (e->key() == Qt::Key_Escape)
         close();
     else
         QWidget::keyPressEvent(e);
 }
