#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;

    long long a = 0;
    long long b = 1;
    long long c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    cout << "Podaj n: ";
    cin >> n;

    if (n < 0) {
        cout << "n nie moze byc mniejsze od zera." << endl;
    } else {
        long long wynik = fibonacci(n);

        cout << n << " rowna sie: " << wynik << endl;
    }
    return 0;
}