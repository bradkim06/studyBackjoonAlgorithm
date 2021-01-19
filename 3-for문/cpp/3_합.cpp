#include "iostream"

using namespace std;

int main() {
    int n;
    long sum = 0;

    cin >> n;

    if (n < 1 || n > 10000) {
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum;

    return 0;
}
