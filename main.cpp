#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>
#include <QVBoxLayout>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget *window = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(window); 

    QLineEdit *queryOrURL = new QLineEdit(window);

    queryOrURL->setFixedHeight(35);
    queryOrURL->setFixedWidth(3000);

    layout->addWidget(queryOrURL);
    layout->setAlignment(queryOrURL, Qt::AlignCenter | Qt::AlignTop);

    window->setLayout(layout); 
    window->showMaximized();

    return app.exec();
}
