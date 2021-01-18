#include "iostream"

#define ORDINARY_YEAR 0
#define LEAP_YEAR 0
#define INVALID_RANGE -1

using namespace std;

int main(void) {
    int year;

    cin >> year;

    if (year < 1 || year > 4000) {
        return INVALID_RANGE;
    }

    if ((year % 4) == 0) {
        if ((year % 100) != 0) {
            cout << "1";
            return LEAP_YEAR;
        }

        if ((year % 400) == 0) {
            cout << "1";
            return LEAP_YEAR;
        }
    }

    cout << "0";
    return ORDINARY_YEAR;
}
