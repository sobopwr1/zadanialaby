#include <iostream>

using namespace std;

bool funkcja(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float wynik = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);

    if (wynik == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    float ax, ay, bx, by, cx, cy;

    cout << "Podaj wspolrzedne punktu A (x y): ";
    cin >> ax >> ay;

    cout << "Podaj wspolrzedne punktu B (x y): ";
    cin >> bx >> by;

    cout << "Podaj wspolrzedne punktu C (x y): ";
    cin >> cx >> cy;

    if (funkcja(ax, ay, bx, by, cx, cy)) {
        cout << "Punkty leza na prostej." << endl;
    } else {
        cout << "Punkty nie leza na prostej." << endl;
    }

    return 0;
}