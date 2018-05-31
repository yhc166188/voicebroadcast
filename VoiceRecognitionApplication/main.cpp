#include "VoiceRecognitionApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VoiceRecognitionApplication w;
    w.show();
    return a.exec();
}
