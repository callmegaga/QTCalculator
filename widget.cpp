#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget), expression() {
    ui->setupUi(this);
    QIcon delete_icon(":/icon/keyboard-backspace.png");
    ui->delete_button->setIcon(delete_icon);
    this->setMaximumSize(200, 300);
    this->setMinimumSize(200, 300);
    this->setWindowTitle("计算器");
    connect(ui->zeor_button, &QPushButton::clicked, this, &Widget::click_zero_button);
    connect(ui->one_button, &QPushButton::clicked, this, &Widget::click_one_button);
    connect(ui->two_button, &QPushButton::clicked, this, &Widget::click_two_button);
    connect(ui->three_button, &QPushButton::clicked, this, &Widget::click_three_button);
    connect(ui->four_button, &QPushButton::clicked, this, &Widget::click_four_button);
    connect(ui->five_button, &QPushButton::clicked, this, &Widget::click_five_button);
    connect(ui->six_button, &QPushButton::clicked, this, &Widget::click_six_button);
    connect(ui->seven_button, &QPushButton::clicked, this, &Widget::click_seven_button);
    connect(ui->eight_button, &QPushButton::clicked, this, &Widget::click_eight_button);
    connect(ui->nine_button, &QPushButton::clicked, this, &Widget::click_nine_button);
    connect(ui->plus_button, &QPushButton::clicked, this, &Widget::click_plus_button);
    connect(ui->sub_button, &QPushButton::clicked, this, &Widget::click_sub_button);
    connect(ui->mul_button, &QPushButton::clicked, this, &Widget::click_mul_button);
    connect(ui->div_button, &QPushButton::clicked, this, &Widget::click_div_button);
    connect(ui->clear_button, &QPushButton::clicked, this, &Widget::click_clear_button);
    connect(ui->enter_button, &QPushButton::clicked, this, &Widget::click_enter_button);
    connect(ui->delete_button, &QPushButton::clicked, this, &Widget::click_delete_button);
    connect(ui->left_button, &QPushButton::clicked, this, &Widget::click_left_button);
    connect(ui->right_button, &QPushButton::clicked, this, &Widget::click_right_button);
}

Widget::~Widget() {
    delete ui;
}

void Widget::click_zero_button() {
    expression += "0";
    ui->result_input->setText(expression);
}

void Widget::click_one_button() {
    expression += "1";
    ui->result_input->setText(expression);
}

void Widget::click_two_button() {
    expression += "2";
    ui->result_input->setText(expression);
}

void Widget::click_three_button() {
    expression += "3";
    ui->result_input->setText(expression);
}

void Widget::click_four_button() {
    expression += "4";
    ui->result_input->setText(expression);

}

void Widget::click_five_button() {
    expression += "5";
    ui->result_input->setText(expression);

}

void Widget::click_six_button() {
    expression += "6";
    ui->result_input->setText(expression);

}

void Widget::click_seven_button() {
    expression += "7";
    ui->result_input->setText(expression);

}

void Widget::click_eight_button() {
    expression += "8";
    ui->result_input->setText(expression);

}

void Widget::click_nine_button() {
    expression += "9";
    ui->result_input->setText(expression);

}

void Widget::click_plus_button() {
    expression += "+";
    ui->result_input->setText(expression);

}

void Widget::click_sub_button() {
    expression += "-";
    ui->result_input->setText(expression);

}

void Widget::click_mul_button() {
    expression += "*";
    ui->result_input->setText(expression);

}

void Widget::click_div_button() {
    expression += "/";
    ui->result_input->setText(expression);

}

void Widget::click_enter_button() {
}

void Widget::click_clear_button() {
    expression.clear();
    ui->result_input->setText(expression);
}

void Widget::click_delete_button() {
    expression.chop(1);
    ui->result_input->setText(expression);
}

void Widget::click_left_button() {
    expression += "(";
    ui->result_input->clear();

}

void Widget::click_right_button() {
    expression += ")";
    ui->result_input->setText(expression);

}
