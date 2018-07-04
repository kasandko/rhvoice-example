#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAudioOutput>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_cmd_speak_clicked();
    void slotReadReady();
    void slotReadyToWrite();
    void handleStateChanged(QAudio::State newState);

private:
    Ui::MainWindow *ui;

    QProcess* process;
    QAudioOutput* audio;

};

#endif // MAINWINDOW_H
