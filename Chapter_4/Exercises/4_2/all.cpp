#include <bits/stdc++.h>

using namespace std;

double std_dev(int s_1, int s_2, int s_3, int s_4, double mean, double inter_val);
// Предусловие: переменные s_1 - s_4 получили значение.
// Постусловие: функция вернула среднее стандартное отклонение этих чисел.
double calc_mean(int s_1, int s_2, int s_3, int s_4);
// Предусловие: переменные s_1 - s_4 получили значение.
// ПОстусловие функция вернула среднее значение этих 4-х чисел.
double calc_inter_val(int s_x, double mean);


int main() {
    int s_1 = 0, s_2 = 0, s_3 = 0, s_4 = 0;
    double mean = 0, inter_val = 0;
    cout << "Введите последовательно 4 числа, для которых необходимо найти стандартное отклонение:" << endl;
    cin >> s_1 >> s_2 >> s_3 >> s_4;

    cout << "Среднее значение: " << calc_mean(s_1, s_2, s_3, s_4) << endl;
    cout << "Стандартное отклонение: " << std_dev(s_1, s_2, s_3, s_4, mean, inter_val) << endl;


    return 0;

}

double std_dev(int s_1, int s_2, int s_3, int s_4, double mean, double inter_val) {
    mean = calc_mean(s_1, s_2, s_3, s_4);
    inter_val = calc_inter_val(s_1, mean) + calc_inter_val(s_2, mean) + calc_inter_val(s_3, mean) + calc_inter_val(s_4, mean);
    return sqrt(inter_val / 4);
}

double calc_mean(int s_1, int s_2, int s_3, int s_4) {
    return double(s_1 + s_2 + s_3 + s_4) / 4;
}

double calc_inter_val(int s_x, double mean) {
    return pow((s_x - mean), 2);

}