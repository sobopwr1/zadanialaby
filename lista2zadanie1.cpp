#include <iostream>

using namespace std;

int n;
int tab[5];
int najwiekszaw=0;

int main()
{
    for(int i=0;i<5;i++)
        {
        cout<<"Podaj "<<i+1<<" liczbe: "; cin>>tab[i];
        if(najwiekszaw<tab[i]) {
            najwiekszaw=tab[i];}
    }
    cout<<"Najwieksza wartosc: "<<najwiekszaw<<endl;
    return 0;
}
