#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTableWidget>
#include <QtDebug>
#include <QPalette>


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
    void on_solve_button_clicked();
    void keypad_number_pressed();
    void on_sudoku_board_cellClicked(int row, int column);
    void on_erase_button_clicked();
    void on_new_game_clicked();
    void gameLevel();

private:
    void display();
    int activated_number=1;
    int level=2;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
