#include <iostream>

int main() {
    double V1, V2, S;

    // Ввод данных
    std::cout << "Введите скорость первого автомобиля (V1): ";
    std::cin >> V1;
    std::cout << "Введите скорость второго автомобиля (V2): ";
    std::cin >> V2;
    std::cout << "Введите начальное расстояние (S): ";
    std::cin >> S;

    // Расчет времени в часах
    double time_minutes = 30;
    double time_hours = time_minutes / 60.0; // 30 минут = 0.5 часа

    // Расчет разницы скоростей
    double speed_difference = V1 - V2;

    // Расчет изменения расстояния за 30 минут
    double distance_change = speed_difference * time_hours;

    // Расчет и вывод конечного расстояния
    double final_distance = S - distance_change;

    std::cout << "Расстояние между автомобилями через 30 минут: " << final_distance << " км" << std::endl;

    return 0;
}
