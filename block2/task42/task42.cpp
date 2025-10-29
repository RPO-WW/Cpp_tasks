#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

void calculateAngles(int h, int m, double& hour_angle, double& minute_angle) {
    minute_angle = m * 6.0;
    hour_angle = h * 30.0 + m * 0.5;
}

double normalizeAngle(double angle) {
    while (angle >= 360) angle -= 360;
    while (angle < 0) angle += 360;
    return angle;
}

double minAngleDifference(double angle1, double angle2) {
    double diff = abs(angle1 - angle2);
    return min(diff, 360 - diff);
}

int main() {
    int h, m;
    
    cout << "Введите время (часы и минуты): ";
    cin >> h >> m;

    if (h <= 0 || h > 12 || m < 0 || m > 59) {
        cout << "Ошибка: часы должны быть от 1 до 12, минуты от 0 до 59" << endl;
        return 1;
    }
    
    cout << "\nТекущее время: " << h << ":" << setw(2) << setfill('0') << m << endl;
    
    double hour_angle, minute_angle;
    calculateAngles(h, m, hour_angle, minute_angle);
    
    cout << fixed << setprecision(2);
    cout << "Угол часовой стрелки: " << hour_angle << "°" << endl;
    cout << "Угол минутной стрелки: " << minute_angle << "°" << endl;

    cout << "\n--- а) Время до совпадения стрелок ---" << endl;

    double hour_speed = 0.5;
    double minute_speed = 6.0;

    double relative_speed = minute_speed - hour_speed;

    double current_diff = normalizeAngle(minute_angle - hour_angle);

    double time_to_match;
    if (current_diff == 0) {
        time_to_match = 360.0 / relative_speed;
    } else {
        time_to_match = (360.0 - current_diff) / relative_speed;
    }
    
    int full_minutes_match = static_cast<int>(ceil(time_to_match));
    cout << "Точное время: " << time_to_match << " минут" << endl;
    cout << "Полных минут до совпадения: " << full_minutes_match << endl;

    cout << "\n--- б) Время до перпендикулярного положения ---" << endl;

    double time_to_perpendicular1, time_to_perpendicular2;

    double target_diff1 = 90.0;
    if (current_diff < target_diff1) {
        time_to_perpendicular1 = (target_diff1 - current_diff) / relative_speed;
    } else {
        time_to_perpendicular1 = (360.0 - current_diff + target_diff1) / relative_speed;
    }

    double target_diff2 = 270.0;
    if (current_diff < target_diff2) {
        time_to_perpendicular2 = (target_diff2 - current_diff) / relative_speed;
    } else {
        time_to_perpendicular2 = (360.0 - current_diff + target_diff2) / relative_speed;
    }

    double min_time_perpendicular = min(time_to_perpendicular1, time_to_perpendicular2);
    int full_minutes_perp = static_cast<int>(ceil(min_time_perpendicular));
    
    cout << "Время до положения 90°: " << time_to_perpendicular1 << " минут" << endl;
    cout << "Время до положения 270°: " << time_to_perpendicular2 << " минут" << endl;
    cout << "Минимальное время: " << min_time_perpendicular << " минут" << endl;
    cout << "Полных минут до перпендикулярного положения: " << full_minutes_perp << endl;

    cout << "\n=== РЕЗУЛЬТАТ ===" << endl;
    cout << "До совпадения стрелок: " << full_minutes_match << " минут" << endl;
    cout << "До перпендикулярного положения: " << full_minutes_perp << " минут" << endl;
    
    return 0;
}