#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string slowo, odwrocone;

    cout << "Podaj slowo: ";
    cin >> slowo;

    odwrocone = slowo;
    reverse(odwrocone.begin(), odwrocone.end());

    if (slowo == odwrocone) {
        cout << "To jest palindrom" << endl;
    } else {
        cout << "To nie jest palindrom" << endl;
    }

    return 0;
}