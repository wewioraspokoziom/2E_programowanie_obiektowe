
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Podaj liczbe do podzielenia " << endl;
    cin >> a;
    cout << "Podaj dzielnik" << endl;
    cin >> b;
    
    if (a%b==0)
    cout << "Podana liczba jest podzielna przez liczbe: " << b << endl;
    else
    cout << "Podana liczba nie jest podzielna przez ta liczbe bez reszty z dzielenia " << endl;

    return 0;
}
