#include <QtCore>
#include <QtGui>
 
int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
 
   QWidget *mainWindow = new QWidget();
   mainWindow->setMinimumSize(700, 350);
 
   mainWindow->show();
 
   return app.exec();
}