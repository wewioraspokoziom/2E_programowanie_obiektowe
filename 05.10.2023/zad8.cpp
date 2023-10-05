
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Podaj 1 liczbe" << endl;
    cin >> a;
    cout << "Podaj 2 liczbe" << endl;
    cin >> b;
    cout << "Podaj 3 liczbe" << endl;
    cin >> c;
    if(a==b || b==c || c==a)
    cout << "2 liczby sa takie same" << endl;
    else
    cout << "Wszystkie liczby sa rozne" << endl;
    return 0;
}
