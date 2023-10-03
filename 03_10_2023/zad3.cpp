
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout <<  "Podaj wartosci podanych bokow" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Z tych bokow da sie zrobic trojkat" << endl;
    }
    else
        cout << "Z tych bokow nie da sie zrobic trojkata " << endl;
    
}
