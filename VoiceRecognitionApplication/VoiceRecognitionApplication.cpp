#include "VoiceRecognitionApplication.h"

#include <QPushButton>
#include <QObject>
#include <QMediaPlayer>
#include <chrono>
#include <QAudioInput>
#include <QAudioOutput>
#include <QBuffer>
#include <QFile>
#include <QtGui>
#include "./aip-cpp-sdk-0.3.3/speech.h"
static int64_t ot() {
    using namespace std::chrono;
    auto const elapsed = system_clock::now().time_since_epoch();
    return duration_cast<milliseconds>(elapsed).count();
}
//// 设置APPID/AK/SK
std::string app_id = "10527831";
std::string api_key = "f1TKqPxGYT3nt6kQFkO2izSn";
std::string secret_key = "QXpRrC890sVxbnuvCa5z88A0yPTnEOBI";
std::string tts(aip::Speech& client, QString strinput, int64_t &spendtime,std::map<std::string, std::string> const & options);
VoiceRecognitionApplication::VoiceRecognitionApplication(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, &QPushButton::clicked, this, &VoiceRecognitionApplication::on_pushbutton_clicked);
   // audioOutput();
    connect(ui.pushButton_2, &QPushButton::clicked, this, &VoiceRecognitionApplication::on_settingdefault_clicked);
    //ofile.open("test.mp3", std::ios::out | std::ios::binary);

    ui.comboBox->insertItem(0, QStringLiteral("女声"));
    ui.comboBox->insertItem(1, QStringLiteral("男声"));
    ui.comboBox->insertItem(2, QStringLiteral("度逍遥"));
    ui.comboBox->insertItem(3, QStringLiteral("度丫丫"));
    on_settingdefault_clicked();
}
void VoiceRecognitionApplication::on_pushbutton_clicked()
{
    static aip::Speech client(app_id, api_key, secret_key);
    QString strinput = ui.lineEdit->text();
    std::map<std::string, std::string> options;
    options.insert(std::pair<std::string, std::string>("spd",std::to_string(ui.speedrate->value())));
    options.insert(std::pair<std::string, std::string>("pit", std::to_string(ui.speedtone->value())));
    options.insert(std::pair<std::string, std::string>("vol", std::to_string(ui.volume->value())));
    int speaker = ui.comboBox->currentIndex();
    if (speaker == 2 || speaker == 3)
        speaker++;
    options.insert(std::pair<std::string, std::string>("per", std::to_string(speaker)));
    int64_t spendtime = 0;
    std::string stringret = tts(client,strinput, spendtime, options);
    std::string spend = std::to_string(spendtime)+"ms";
    ui.label_3->setText(QString::fromStdString(spend));
    m_array = QByteArray(stringret.c_str(), stringret.size());
    if (m_buffer)
        delete m_buffer;
    m_buffer = new QBuffer(&m_array);
    m_buffer->open(QIODevice::ReadOnly);
    m_buffer->seek(0);
    static QMediaPlayer media;
    media.setMedia(QMediaContent(), m_buffer);
    media.play();
}

std::string tts(aip::Speech& client, QString strinput, int64_t &spendtime, std::map<std::string, std::string> const & options)
{
    //QString strinput = ui.lineEdit->text();//(QStringLiteral("巴贝河北侧一条1450米长的施工便道联通着各个区域。"));//河边山脚下，在农田的包围中，出现了一片高大的厂区——管片厂和沙石料厂。
    if (strinput.length() > 1024)
        return "";
    //std::ofstream ofile;
   // ofile.open("test.mp3", std::ios::out | std::ios::binary | std::ios::trunc);
    std::string file_ret;
    int64_t start_int64 = ot();
    QByteArray ba = strinput.toUtf8();
    QByteArray byteArrayPercentEncoded = ba.toPercentEncoding();
    std::string str = byteArrayPercentEncoded;//"%E4%BD%A0%E5%A5%BD%EF%BC%8C%E5%8F%AF%E4%BB%A5%E7%BB%99%E6%88%91%E8%AE%B2%E4%B8%AA%E6%95%85%E4%BA%8B%E5%90%97%EF%BC%9F";
    Json::Value result = client.text2audio(str, options, file_ret);
    int64_t end_int64 = ot();
    spendtime = end_int64 - start_int64;
    qDebug() << "spend time:" << spendtime << "ms";
    //// 如果error_code字段为空则说明合成成功，返回mp3文件内容，否则json数据为相应的错误反回结果
    if (result["error_code"] == Json::nullValue)
    {
        //ofile << file_ret;
        //ofile.close();
        int length = file_ret.length();    
    }
    return file_ret;
}
void VoiceRecognitionApplication::on_settingdefault_clicked()
{
    ui.speedrate->setValue(5);
    ui.speedtone->setValue(5);
    ui.volume->setValue(5);
    ui.comboBox->setCurrentIndex(0);
}