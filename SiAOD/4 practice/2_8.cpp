#include <iostream>
#include <cmath>
using namespace std;

long double sumfunc(long double x, long double E) {
    long double sum = 0;
    long double term = 1;
    long double highsum = 1 / (1 + x);

    for (int n = 0; fabs(term) > E; n++) {
        sum += term;
        term = pow(-1, n + 1) * pow(x, n + 1);
    }

    cout << endl;
    cout << "Приближенное значение бесконечной суммы: " << sum << endl;
    cout << "Значение по формуле: " << highsum << endl;
    cout << "Разность значений: " << fabs(highsum - sum) << endl;

    return sum;
}

int main() {
    long double E, x;
    cout << "Введите x ∈ (-1;1): "; cin >> x;
    cout << "Введите значение E: "; cin >> E;

    if ((x < -1 || x > 1) || E <= 0) {
        cout << "Ошибка ввода данных!" << endl;
        return 0;
    }

    sumfunc(x, E);
}
