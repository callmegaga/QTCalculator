#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private slots:

    void click_zero_button();

    void click_one_button();

    void click_two_button();

    void click_three_button();

    void click_four_button();

    void click_five_button();

    void click_six_button();

    void click_seven_button();

    void click_eight_button();

    void click_nine_button();

    void click_plus_button();

    void click_sub_button();

    void click_mul_button();

    void click_div_button();

    void click_enter_button();

    void click_clear_button();

    void click_delete_button();

    void click_left_button();

    void click_right_button();

private:
    Ui::Widget *ui;
    QString expression;

};

#endif // WIDGET_H
