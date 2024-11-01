#include <iostream>
using namespace std;

int main() {
    int n;
    double x, answer = 0;
    
    cout << "Введите значение n: "; 
    cin >> n;
    
    cout << "Введите значение x: "; 
    cin >> x;
    
    if (n < 1) {
        cout << "Ошибка, введено ненатуральное число n" << endl;
    } else {
        double currentPower = 1;
        for (int i = 1; i < n; i++) {
            currentPower *= x;
            if (i % 2 == 0) {
                answer -= currentPower / i;
            } else {
                answer += currentPower / i;
            }
        }
        cout << "Результат: " << answer << endl;
    }
}
