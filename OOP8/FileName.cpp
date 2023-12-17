#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;

    // �������� ������ ������
    cout << "������ ����� ������: ";
    cin >> n;

    vector<int> arr(n);

    // �������� �������� ������
    cout << "������ �������� ������:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // ��������� ���������� �������� �� ������
    int minAbs = abs(arr[0]);
    for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) < minAbs) {
            minAbs = abs(arr[i]);
        }
    }

    cout << "̳�������� �� ������ �������: " << minAbs << endl;

    // ��������� ���� ������ �������� ���� ������� ��������� ��������
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

    cout << "���� ������ �������� ���� ������� ��������� ��������: " << sum << endl;

    // ������������ ������
    vector<int> transformedArr(n);
    int j = 0;

    // ������ ��������, �� ������ �� ������ �������� � ����� ��������
    for (int i = 0; i < n; i += 2) {
        transformedArr[j++] = arr[i];
    }

    // ������ ��������, �� ������ �� �������� �������� � ����� ��������
    for (int i = 1; i < n; i += 2) {
        transformedArr[j++] = arr[i];
    }

    // ��������� ������������� ������
    cout << "������������ �����:\n";
    for (int i = 0; i < n; ++i) {
        cout << transformedArr[i] << " ";
    }

    return 0;
}
