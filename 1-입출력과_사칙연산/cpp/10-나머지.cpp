#include <iostream>

using namespace std;

#define NO_ERROR 0
#define INVALID_RANGE -1

int main(void) {
    int a, b, c;

    cin >> a >> b >> c;

    if (a < 2 || b < 2 || c > 10000) {
        cout << "Invalid Range";
        return INVALID_RANGE;
    }

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;

    return NO_ERROR;
}

