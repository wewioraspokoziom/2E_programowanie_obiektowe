
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbe " << endl;
    cin >> x;
    if(x>=100 && x <150)
    cout << "Podana liczba miesci sie w przedziale od 100-150" << endl;
    else
    cout << "Podana liczba nie miesci sie w przedziale od 100-150" << endl;

    return 0;
}
