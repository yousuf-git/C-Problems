#include <QtWidgets>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create widgets
    QLabel *label = new QLabel("Enter numbers separated by commas:");
    QLineEdit *input = new QLineEdit();
    QPushButton *button = new QPushButton("Calculate Mean");
    QLabel *result = new QLabel();

    // Create layout and add widgets
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(label);
    layout->addWidget(input);
    layout->addWidget(button);
    layout->addWidget(result);

    // Create window and set layout
    QWidget *window = new QWidget();
    window->setLayout(layout);
    window->setWindowTitle("Mean Calculator");

    // Connect button to slot
    QObject::connect(button, &QPushButton::clicked, [&]() {
        // Get input text
        QString inputText = input->text();

        // Split text into numbers
        QStringList numbersText = inputText.split(",");
        QList<double> numbers;
        for (QString numberText : numbersText) {
            bool ok;
            double number = numberText.toDouble(&ok);
            if (ok) {
                numbers.append(number);
            }
        }

        // Calculate mean
        double sum = 0;
        for (double number : numbers) {
            sum += number;
        }
        double mean = sum / numbers.size();

        // Set result text
        result->setText(QString("Mean: %1").arg(mean));
    });

    // Show window
    window->show();

    // Run event loop
    return app.exec();
}

