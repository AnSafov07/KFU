#include <iostream>

using namespace std;

double part(int x) {
    double total = 0;
    for (int k = 1; k <= x; k++) {
        double x_znamenatel = 0;
        double factorial = 1;

        for (int i = 1; i <= k; i++) {
            x_znamenatel += 1.0 / i;
            factorial *= i;
        }
        
        if (x_znamenatel != 0) {
            total += factorial / x_znamenatel;
        }
    }
    return total;
}

int main() {
    setlocale(LC_ALL, "Russian"); 
    int n = 0;
    cout << "Введите число n: ";
    cin >> n;
    
    cout << part(n) << endl;
}
