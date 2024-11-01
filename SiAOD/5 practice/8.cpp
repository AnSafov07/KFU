#include <iostream>
#include <vector>

using namespace std;

int sumPairs(vector<int>& numbers) {
  while (numbers.size() > 1) {
    vector<int> newNumbers;
    for (int i = 0; i < numbers.size() - 1; i += 2) {
      newNumbers.push_back(numbers[i] + numbers[i + 1]);
    }
    if (numbers.size() % 2 != 0) {
      newNumbers.push_back(numbers.back());
    }
    numbers = newNumbers;
  }
  return numbers[0];
}

int main() {
    vector<int> numbers;
    int massive_length, massive_element;

    cout << "Введите количество элементов массива: ";
    cin >> massive_length;  
    cout << endl;

    for (int i = 0; i < massive_length; i++) {
        cin >> massive_element;
        numbers.push_back(massive_element);
    }

  int result = sumPairs(numbers);
  cout << "Результат: " << result << endl;
  return 0;
}
