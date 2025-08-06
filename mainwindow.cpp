#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->radioButton->setText("Первая опция");
    ui->radioButton_2->setText("Вторая опция");
    ui->radioButton->setChecked(true);
    ui->comboBox->addItem("Элемент 1");
    ui->comboBox->addItem("Элемент 2");
    ui->comboBox->addItem("Элемент 3");
    ui->comboBox->addItem("Элемент 4");
    ui->comboBox->addItem("Элемент 5");
    ui->comboBox->addItem("Элемент 6");
    ui->comboBox->addItem("Элемент 7");
    ui->comboBox->addItem("Элемент 8");

    ui->pushButton->setText("Увеличить прогресс");
    ui->pushButton->setCheckable(true);

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    int currentValue = ui->progressBar->value();

    currentValue += 10;

    if (currentValue > 100) {
        currentValue = 0;
    }

    ui->progressBar->setValue(currentValue);
}
