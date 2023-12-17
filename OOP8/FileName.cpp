#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;

    // Введення розміру масиву
    cout << "Введіть розмір масиву: ";
    cin >> n;

    vector<int> arr(n);

    // Введення елементів масиву
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Знайдення мінімального елемента по модулю
    int minAbs = abs(arr[0]);
    for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) < minAbs) {
            minAbs = abs(arr[i]);
        }
    }

    cout << "Мінімальний по модулю елемент: " << minAbs << endl;

    // Знайдення суми модулів елементів після першого нульового елемента
    int sum = 0;
    bool foundZero = false;
    for (int i = 0; i < n; ++i) {
        if (foundZero) {
            sum += abs(arr[i]);
        }
        else if (arr[i] == 0) {
            foundZero = true;
        }
    }

    cout << "Сума модулів елементів після першого нульового елемента: " << sum << endl;

    // Перетворення масиву
    vector<int> transformedArr(n);
    int j = 0;

    // Додаємо елементи, що стоять на парних позиціях у першу половину
    for (int i = 0; i < n; i += 2) {
        transformedArr[j++] = arr[i];
    }

    // Додаємо елементи, що стоять на непарних позиціях у другу половину
    for (int i = 1; i < n; i += 2) {
        transformedArr[j++] = arr[i];
    }

    // Виведення перетвореного масиву
    cout << "Перетворений масив:\n";
    for (int i = 0; i < n; ++i) {
        cout << transformedArr[i] << " ";
    }

    return 0;
}
