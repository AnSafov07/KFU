#include <iostream>
#include <cmath>
using namespace std;

double sumfunc(double x, double E) {
    double sum = 0.0;
    double term = 1.0;
    int k = 0;

    while (fabs(term) > E) {
        sum += term;
        term *= (pow(x, 2) / (pow(2, k) * (k + 1))); 
        k++;
    }

    cout << "Приближенное значение бесконечной суммы: " << sum << endl;
    return sum;
}

int main() {
    double E, x;
    cout << "Введите значение x: "; cin >> x;
    cout << "Введите значение E: "; cin >> E;

    if (E <= 0 || x == 0) {
        cout << "Ошибка ввода данных!" << endl;
        return 0;
    }
    else { sumfunc(x, E); }
}
