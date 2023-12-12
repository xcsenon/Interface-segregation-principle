#include <iostream>

// Інтерфейс для основної функціональності для відображення тексту
class Displayable {
public:
    virtual void display() const = 0;
};

// Інтерфейс для додаткової функціональності для логування тексту
class Loggable {
public:
    virtual void log() const = 0;
};

// Клас, який реалізує основний інтерфейс для відображення тексту
class BasicDisplay : public Displayable {
public:
    void display() const override {
        std::cout << "Displaying text" << std::endl;
    }
};

// Клас, який реалізує додатковий інтерфейс для логування тексту
class AdvancedLogger : public Loggable {
public:
    void log() const override {
        std::cout << "Logging text" << std::endl;
    }
};

// Клас, який використовує обидва інтерфейси
class TextProcessor : public Displayable, public Loggable {
public:
    void display() const override {
        std::cout << "Processing and displaying text" << std::endl;
    }

    void log() const override {
        std::cout << "Processing and logging text" << std::endl;
    }
};

int main() {
    // Створюємо об'єкти різних класів
    BasicDisplay basicDisplay;
    AdvancedLogger advancedLogger;
    TextProcessor textProcessor;

    // Викликаємо методи відображення та логування для кожного об'єкта
    basicDisplay.display();

    advancedLogger.log();

    textProcessor.display();
    textProcessor.log();

    return 0;
}
