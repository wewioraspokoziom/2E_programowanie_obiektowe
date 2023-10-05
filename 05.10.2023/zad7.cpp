
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Podaj 1 cyfre" << endl;
    cin >> a;
    cout << "Podaj 2 cyfre" << endl;
    cin >> b;
    cout << "Podaj 3 cyfre" << endl;
    cin >> c;
    if (a < b && a < c)
    cout << "Najmniejsza liczba to " << a << endl;
    else if (b < a && b < c)
    cout << "Najmniejsza liczba to " << b << endl;
    else if (c < b && c < a )
    cout << "Najmniejsza liczba to " << c << endl;
   
    return 0;
}
