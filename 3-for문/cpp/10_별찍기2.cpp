#include "iostream"

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int k = N; k > i; k--) {
            cout << " ";
        }

        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

