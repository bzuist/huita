#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmath.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    chrt = new QChart;

    ui->vchrt->setChart(chart);
    chrt->setTitle("График");

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, 200);
    axisX->setTickCount(11);
    axisX->setLabelFormat("%.2f");

    QValueAxis *axisY = new QValueAxis;
    axisX->setRange(0, 200);
    axisX->setTickCount(3);
    axisX->setLabelFormat("%g");

    QLineSeries* series1 = new QLineSeries();
    QLineSeries* series2 = new QLineSeries();

    for (int i = 0; i < 200; i++)
    {
        series1->append();
        series1->append();
    }

    chrt->addSeries(series1);
    chrt->addSeries(series2);

    chrt->setAxisX(axisX, series1);
    chrt->setAxisY(axisY, series1);
    chrt->setAxisX(axisX, series2);
    chrt->setAxisY(axisY, series2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

