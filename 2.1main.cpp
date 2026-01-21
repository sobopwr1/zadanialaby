#include <iostream>

using namespace std;

int main()
{
    int n;
    double liczba, max_wartosc;

    cout << "Ile liczb chcesz podać:";
    cin >> n;

    if (n <= 0)
    {
        cout << "To nie może być ujemne" << endl;
        return 0;
    }
    else if (n == 0)
    {
        cout << "To nie może być zerem" << endl;
        return 0;
    }

    cout << "Podaj 1. liczbe: ";
    cin >> max_wartosc;

    for (int i = 2; i <= n; i++)
    {
        cout << "Podaj " << i << ". liczbe: ";
        cin >> liczba;

        if (liczba > max_wartosc)
        {
            max_wartosc = liczba;
        }
    }

    cout << "Najwieksza liczba to: " << max_wartosc << endl;

    return 0;
}