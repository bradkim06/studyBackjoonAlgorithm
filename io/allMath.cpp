#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;

    while (1) {
        cin >> a >> b >> c;

        if ((a >= 1) && (b <= 10000)) {
            break;
        }
    }

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}
