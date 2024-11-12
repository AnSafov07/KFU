#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, bool up) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            if (up) {
                if (arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                } else {
                    break;
                }
            } else {
                if (arr[j] < key) {
                    arr[j + 1] = arr[j];
                    j--;
                } else {
                    break;
                }
            }
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arrAsc[n], arrDesc[n];
    for (int i = 0; i < n; i++) {
        arrAsc[i] = arr[i];
        arrDesc[i] = arr[i];
    }

    insertionSort(arrAsc, n, true);
    insertionSort(arrDesc, n, false);

    cout << "Массив по неубыванию: ";
    for (int i = 0; i < n; i++) {
        cout << arrAsc[i] << " ";
    }
    cout << endl;

    cout << "Массив по невозрастанию: ";
    for (int i = 0; i < n; i++) {
        cout << arrDesc[i] << " ";
    }
    cout << endl;

    return 0;
}
