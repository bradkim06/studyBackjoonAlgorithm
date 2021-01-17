#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;

    while (1) {
        cin >> a >> b >> c;

        if ((a >= 2) && (b >= 2) && (c <= 10000)) {
            break;
        }
    }

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;

    return 0;
}

