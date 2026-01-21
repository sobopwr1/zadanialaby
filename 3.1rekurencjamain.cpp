#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Podaj n: ";
    cin >> n;

    if (n < 0) {
        cout << "n musi być większe od zera."<< endl;
    } else {
        long long wynik = fibonacci(n);
        
        cout << n << " wyraz ciagu to: " << wynik << endl;
    }
    return 0;
}