// Лабораторная работа №1. Задание 6, Вариант 4
// Найти сумму наибольшего и наименьшего из значений компонент.

#include <iostream>
#include <vector>
#include <limits>

int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<double> numbers;
    double num;

    std::cout << "Введите действительные числа:" << std::endl;

    // Ручной ввод чисел до тех пор, пока ввод успешен
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    // Очистка потока после неудачного ввода
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Проверка, что введено хотя бы одно число
    if (numbers.empty()) {
        std::cout << "Вы не ввели ни одного числа." << std::endl;
        return 0;
    }

    // Поиск минимума и максимума вручную (без algorithm)
    double min_val = numbers[0];
    double max_val = numbers[0];

    for (double x : numbers) {
        if (x < min_val) min_val = x;
        if (x > max_val) max_val = x;
    }

    // Вывод результата
    std::cout << "\nВведено чисел: " << numbers.size() << std::endl;
    std::cout << "Наименьшее значение: " << min_val << std::endl;
    std::cout << "Наибольшее значение: " << max_val << std::endl;
    std::cout << "Сумма наибольшего и наименьшего: " << (min_val + max_val) << std::endl;

    return 0;
}