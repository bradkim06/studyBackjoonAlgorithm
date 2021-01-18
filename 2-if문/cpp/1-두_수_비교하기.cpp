#include "iostream"

#define NO_ERROR 0

using namespace std;

int main(void) {
    int a, b;

    // cin은 공백으로 입력구분을 자동으로 해준다.
    cin >> a >> b;

    if (a > b) {
        cout << ">";
    } else if (a < b) {
        cout << "<";
    } else {
        cout << "==";
    }

    return NO_ERROR;
}
