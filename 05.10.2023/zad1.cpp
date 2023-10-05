

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Podaj liczbe" << endl;
    cin >> a;
    if(a % 2 == 0)
    {
        cout << "Podana liczba jest parzysta" << endl;
    }
    else
    {
    cout << "Podana liczba nie jest parzysta" << endl;
    }
    return 0;
}
