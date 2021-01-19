#include "iostream"

using namespace std;

int main(void) {
    int A, B, T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }

    return 0;
}
