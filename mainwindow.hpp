 #ifndef MAINWINDOW_H
 #define MAINWINDOW_H

 #include <QWidget>

 class GLWidget;

 class Window : public QWidget
 {
     Q_OBJECT

 public:
     Window();

 protected:
     void keyPressEvent(QKeyEvent *event);

 private:

     GLWidget *glWidget;
 };

 #endif
