#include "iostream"

#define NO_ERROR 0
#define INVALID_RANGE -1
#define EARLY_TIME 45

using namespace std;

int main(void) {
    int hour, min;

    cin >> hour >> min;

    if (hour < 0 || hour > 23) {
        return INVALID_RANGE;
    }

    if (min < 0 || min > 59) {
        return INVALID_RANGE;
    }

    if (min < EARLY_TIME) {
        min += 15;
        hour--;
        if (hour < 0) {
            hour = 23;
        }
    } else {
        min -= EARLY_TIME;
    }

    cout << hour << " " << min;

    return NO_ERROR;
}
