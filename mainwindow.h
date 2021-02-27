#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_Zero_clicked();

    void on_Plus_clicked();

    void on_Minus_clicked();

    void on_Multiplication_clicked();

    void on_Division_clicked();

    void on_Clear_clicked();

    void on_dot_clicked();

    void on_equalto_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
