#include <iostream>

using namespace std;

#define NO_ERROR 0
#define INVALID_RANGE -1

int main(void) {
    int a, b;

    cin >> a >> b;

    if (a < 1 || b > 9) {
        cout << "Invalid Range";
        return INVALID_RANGE;
    }

    cout << a + b << endl;

    return NO_ERROR;
}

