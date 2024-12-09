#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    cout << "Введите степень полинома n: ";
    cin >> n;

    vector<double> coeffs(n + 1);
    cout << "Введите коэффициенты полинома: ";
    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    cout << "Введите количество производных m (m <= n): ";
    cin >> m;

    if (m > n) {
        cout << "Ошибка: m должно быть меньше или равно n." << endl;
        return 1;
    }

    for (int k = 0; k <= m; k++) {
        cout << k << "-я производная: ";
        for (int i = 0; i < coeffs.size() - 1; i++) {
            if (k == 0) {
                cout << coeffs[i] << " ";
            } else {
                coeffs[i] = coeffs[i] * (coeffs.size() - 1 - i);
            }
        }
        if (k > 0) {
            coeffs.pop_back(); // Удаляем последний коэффициент
        }
        cout << endl;
    }

    return 0;
}
