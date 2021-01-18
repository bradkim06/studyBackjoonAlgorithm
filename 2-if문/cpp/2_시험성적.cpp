#include "iostream"

#define NO_ERROR 0
#define INVALID_RANGE -1

using namespace std;

int main(void) {
    int score;

    cin >> score;

    if (score > 100 || score < 0) {
        cout << "Invalid Range";
        return INVALID_RANGE;
    }

    if (score >= 90) {
        cout << "A";
    } else if (score >= 80) {
        cout << "B";
    } else if (score >= 70) {
        cout << "C";
    } else if (score >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }

    return NO_ERROR;
}
