#include <iostream>

using namespace std;

int main(void) {
    int num1, num2;
    int remain[3];
    int result[3];

    cin >> num1 >> num2;

    if (num1 > 999) {
        num1 = num1 % 1000;
    }

    if (num2 > 999) {
        num2 = num2 % 1000;
    }

    remain[0] = num2 % 10;
    result[0] = num1 * remain[0];
    cout << result[0] << endl;

    remain[1] = (num2 % 100) - remain[0];
    result[1] = num1 * remain[1];
    cout << result[1] / 10 << endl;

    remain[2] = (num2 % 1000) - remain[1] - remain[0];
    result[2] = num1 * remain[2];
    cout << result[2] / 100 << endl;

    cout << result[0] + result[1] + result[2] << endl;

    return 0;
}
