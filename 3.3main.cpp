#include <iostream>
#include <cmath>

using namespace std;

float DlugoscBoku(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float a = DlugoscBoku(Ax, Ay, Bx, By);
    float b = DlugoscBoku(Bx, By, Cx, Cy);
    float c = DlugoscBoku(Cx, Cy, Ax, Ay);

    float p = (a + b + c) / 2.0;

    float pole = sqrt(p * (p - a) * (p - b) * (p - c));

    return pole;
}

int main() {
    float ax, ay, bx, by, cx, cy;

    cout << "Podaj punkt a: ";
    cin >> ax >> ay;
    cout << "Podaj punkt b: ";
    cin >> bx >> by;
    cout << "Podaj punkt c: ";
    cin >> cx >> cy;

    float wynik = PoleTrojkata(ax, ay, bx, by, cx, cy);

    if (isnan(wynik) || wynik == 0) {
        cout << "To nie jest trojkat" << endl;
    } else {
        cout << "Pole trojkata: " << wynik << endl;
    }

    return 0;
}