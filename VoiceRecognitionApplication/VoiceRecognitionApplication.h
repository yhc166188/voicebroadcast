#ifndef VOICERECOGNITIONAPPLICATION_H
#define VOICERECOGNITIONAPPLICATION_H

#include <QtWidgets/QMainWindow>
#include "ui_VoiceRecognitionApplication.h"
#include <QAudioOutput>
#include <QTimer>
#include <QBuffer>
#include <QPointer>
//#include "./aip-cpp-sdk-0.3.3/speech.h"
class VoiceRecognitionApplication : public QMainWindow
{
    Q_OBJECT

public:
    VoiceRecognitionApplication(QWidget *parent = Q_NULLPTR);
private:
    Ui::VoiceRecognitionApplicationClass ui;
    QByteArray m_array;
    QBuffer* m_buffer = nullptr;
    
public slots:
    void on_pushbutton_clicked();
    void on_settingdefault_clicked();
};
#endif // 