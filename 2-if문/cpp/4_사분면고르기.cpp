#include "iostream"

#define FIRST_QUADRANT 0
#define SECOND_QUADRANT 0
#define THIRD_QUADRANT 0
#define FOURTH_QUADRANT 0

#define INVALID_RANGE -1

using namespace std;

int main(void) {
    int x, y;

    cin >> x >> y;

    if (x == 0 || y == 0) {
        return INVALID_RANGE;
    }

    if ((x < -1000) || (x > 1000) || (y < -1000) || (y > 1000)) {
        return INVALID_RANGE;
    }

    if (x > 0) {
        if (y > 0) {
            cout << "1";
            return FIRST_QUADRANT;
        }

        cout << "4";
        return FOURTH_QUADRANT;
    }

    if (y > 0) {
        cout << "2";
        return SECOND_QUADRANT;
    }

    cout << "3";
    return THIRD_QUADRANT;
}
