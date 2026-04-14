#include <iostream>
#include <limits>
#include <string>
#include "Pyramid.h"
#include "Cube.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "Parallelepiped.h"


double getDoubleInput(const std::string& prompt, bool canBeNegative = false) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (!canBeNegative && value < 0 && value != -1) {
            std::cout << "Ошибка! Значение не может быть отрицательным (кроме -1, если параметр неизвестен).\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
    }
}

void handlePyramid() {
    Pyramid pyramid;
    double a = getDoubleInput("Введите сторону основания (a) или -1, если неизвестно: ", true);
    double h = getDoubleInput("Введите высоту (h) или -1, если неизвестно: ", true);

    if (a != -1) pyramid.setA(a);
    if (h != -1) pyramid.setH(h);

    std::cout << "\nРезультат: " << pyramid.calculateArea() << std::endl;
}

void handleParallelepiped() {
    Parallelepiped parallelepiped;
    double a = getDoubleInput("Введите длину (a) или -1, если неизвестно: ", true);
    double b = getDoubleInput("Введите ширину (b) или -1, если неизвестно: ", true);
    double c = getDoubleInput("Введите высоту (c) или -1, если неизвестно: ", true);

    if (a != -1) parallelepiped.setA(a);
    if (b != -1) parallelepiped.setB(b);
    if (c != -1) parallelepiped.setC(c);

    std::cout << "\nРезультат: " << parallelepiped.calculateArea() << std::endl;
}

void handleCube() {
    Cube cube;
    double a = getDoubleInput("Введите сторону куба (a) или -1, если неизвестно: ", true);

    if (a != -1) cube.setA(a);

    std::cout << "\nРезультат: " << cube.calculateArea() << std::endl;
}

void handleSphere() {
    Sphere sphere;
    double r = getDoubleInput("Введите радиус (r) или -1, если неизвестно: ", true);

    if (r != -1) sphere.setR(r);

    std::cout << "\nРезультат: " << sphere.calculateArea() << std::endl;
}

void handleCylinder() {
    Cylinder cylinder;
    double r = getDoubleInput("Введите радиус основания (r) или -1, если неизвестно: ", true);
    double h = getDoubleInput("Введите высоту (h) или -1, если неизвестно: ", true);

    if (r != -1) cylinder.setR(r);
    if (h != -1) cylinder.setH(h);

    std::cout << "\nРезультат: " << cylinder.calculateArea() << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    while (true) {
        std::cout << "\n========================================\n";
        std::cout << "   КАЛЬКУЛЯТОР ПЛОЩАДЕЙ ФИГУР\n";
        std::cout << "========================================\n";
        std::cout << "Выберите фигуру:\n";
        std::cout << "1. Пирамида\n";
        std::cout << "2. Параллелепипед\n";
        std::cout << "3. Куб\n";
        std::cout << "4. Сфера\n";
        std::cout << "5. Цилиндр\n";
        std::cout << "0. Выход\n";
        std::cout << "----------------------------------------\n";
        std::cout << "Введите номер (0-5): ";

        int choice;
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка! Введите число от 0 до 5.\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            std::cout << "\n--- Пирамида ---\n";
            handlePyramid();
            break;
        case 2:
            std::cout << "\n--- Параллелепипед ---\n";
            handleParallelepiped();
            break;
        case 3:
            std::cout << "\n--- Куб ---\n";
            handleCube();
            break;
        case 4:
            std::cout << "\n--- Сфера ---\n";
            handleSphere();
            break;
        case 5:
            std::cout << "\n--- Цилиндр ---\n";
            handleCylinder();
            break;
        case 0:
            std::cout << "До свидания!\n";
            return 0;
        default:
            std::cout << "Неверный выбор. Попробуйте снова.\n";
        }

        std::cout << "\nНажмите Enter, чтобы продолжить...";
        std::cin.get();

        system("cls");
    }

    return 0;
}