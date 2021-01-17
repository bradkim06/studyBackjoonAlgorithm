#include <iostream>

using namespace std;

#define NO_ERROR 0
#define INVALID_RANGE -1

int main(void) {
    int a, b, c;

    cin >> a >> b >> c;

    if (a < 1 || b < 1 || b > 10000) {
        cout << "Invalid Range";
        return INVALID_RANGE;
    }

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return NO_ERROR;
}
