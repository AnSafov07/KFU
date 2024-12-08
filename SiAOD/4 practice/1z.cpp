#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, e;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение E: ";
    cin >> e;

    double chisl = 1.0; 
    double q = 1.0;  
    double result = 1.0; 
    double factorial = 1.0; 

    for(int k = 1; ; k++) {
        chisl *= x * x;
        q *= 2;
        factorial *= k;

        double term = chisl / (q * factorial);

        if (abs(term) <= e) break;
        result += term;
    }

    cout << result << endl;
    return 0;
}
