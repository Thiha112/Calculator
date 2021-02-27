#include "mainwindow.h"
#include "ui_mainwindow.h"

QString calcVal = "";
QString calcVal2 = "";
QString finalVal = "";
char Operator;
double answer;
int plus,minus,into,by = 0;
char sign;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_One_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "1";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "1";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Two_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "2";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "2";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Three_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "3";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "3";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Four_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "4";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "4";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Five_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "5";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "5";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Six_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "6";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "6";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Seven_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "7";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "7";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Eight_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "8";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "8";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Nine_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "9";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "9";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Zero_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += "0";
        ui->display->setText(calcVal);}
    else{
         calcVal2 += "0";
       if(plus==1 && minus==0 && into==0 && by==0) {
           ui->display->setText(calcVal+"+"+calcVal2);
       }
       if(plus==0 && minus==1 && into==0 && by==0) {
           ui->display->setText(calcVal+"-"+calcVal2);
       }
       if(plus==0 && minus==0 && into==1 && by==0) {
           ui->display->setText(calcVal+"×"+calcVal2);
       }
       if(plus==0 && minus==0 && into==0 && by==1) {
           ui->display->setText(calcVal+"÷"+calcVal2);
       }

   }
}

void MainWindow::on_Plus_clicked()
{

    Operator = '+';
    plus++;
    QString plus_ans = calcVal+"+"+calcVal2;
    ui->display->setText(plus_ans);

}

void MainWindow::on_Minus_clicked()
{
    Operator = '-';
    minus++;
    QString minus_ans = calcVal+"-"+calcVal2;
    ui->display->setText(minus_ans);
}

void MainWindow::on_Multiplication_clicked()
{
    Operator = '*';
    into++;
    QString into_ans = calcVal+"×"+calcVal2;
    ui->display->setText(into_ans);
}

void MainWindow::on_Division_clicked()
{
    Operator = '/';
    by++;
    QString by_ans = calcVal+"÷"+calcVal2;
    ui->display->setText(by_ans);
}

void MainWindow::on_Clear_clicked()
{
    calcVal = "";
    calcVal2 = "";
    plus = 0;
    minus = 0;
    into = 0;
    by = 0;
    Operator = ' ';
    ui->display->setText(calcVal);
}

void MainWindow::on_dot_clicked()
{
    if(plus==0 && minus==0 && into==0 && by==0){
        calcVal += ".";
        ui->display->setText(calcVal);}
    else{
        calcVal2 += ".";
        if(plus==1 && minus==0 && into==0 && by==0) {
             ui->display->setText(calcVal+"+"+calcVal2);
        }
        if(plus==0 && minus==1 && into==0 && by==0) {
            ui->display->setText(calcVal+"-"+calcVal2);
        }
        if(plus==0 && minus==0 && into==1 && by==0) {
            ui->display->setText(calcVal+"×"+calcVal2);
        }
        if(plus==0 && minus==0 && into==0 && by==1) {
            ui->display->setText(calcVal+"÷"+calcVal2);
        }

   }
}

void MainWindow::on_equalto_clicked()
{
    double in1 = calcVal.toDouble();
    double in2 = calcVal2.toDouble();
    if(Operator == '+'){ answer = in1+in2; }
    if(Operator == '-'){ answer = in1-in2; }
    if(Operator == '*'){ answer = in1*in2; }
    if(Operator == '/'){ answer = in1/in2; }
    QString ans = QString::number(answer);
    ui->display->setText(ans);
}
