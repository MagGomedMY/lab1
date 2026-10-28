#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream in("f.txt");
    if (!in.is_open()) {
        std::cerr << "Ошибка открытия файла f.txt" << std::endl;
        return 1;
    }

    std::vector<double> numbers;
    double num;
    while (in >> num) {
        numbers.push_back(num);
    }
    in.close();

    if (numbers.empty()) {
        std::cout << "Файл пуст." << std::endl;
        return 0;
    }

    double min_val = numbers[0];
    double max_val = numbers[0];

    for (double x : numbers) {
        if (x < min_val) min_val = x;
        if (x > max_val) max_val = x;
    }

    std::cout << "Наименьшее значение: " << min_val << std::endl;
    std::cout << "Наибольшее значение: " << max_val << std::endl;
    std::cout << "Сумма наибольшего и наименьшего: " << (min_val + max_val) << std::endl;

    return 0;
}