
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj swoj wiek" << endl;
    cin >> x;
    if(x<11)
    cout << "Jestes dzieckiem" << endl;
    else if(x>=11 && x<=17)
    cout << "Jestes nastolatkiem" << endl;
    else
    cout << "Jestes dorosly" << endl;
    return 0;
}
