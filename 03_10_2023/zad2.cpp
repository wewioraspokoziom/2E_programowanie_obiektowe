//

#include <iostream>

using namespace std;

int main()
{
    int a;
    int bokkw;
    int pole;
    int boktr1;
    int boktr2;
    int wysokosc;
    int bokro;
    int boktro;
    cout << "Podaj pole jakiej figury chcesz obliczyc: " << endl;
    cout << "1 - kwadrat" << endl;
    cout << "2 - trapez" << endl;
    cout << "3 - romb" << endl;
    cout << "4 - trojkat" << endl;
    cin >> a;

    if (a == 1)
    {
        cout << "Podaj dlugosc boku kwadrata" << endl;
        cin >> bokkw;
        pole = bokkw * bokkw;
        cout << "Pole wynosi: " << pole << endl;
    }
    else if (a == 2)
    {
        cout << "Podaj dlugosc 1 boku trapeza" << endl;
        cin >> boktr1;
        cout << "Podaj dlugosc 2 boku trapeza" << endl;
        cin >> boktr2;
        cout << "Podaj wysokosc trapeza" << endl;
        cin >> wysokosc;
        pole = ((boktr1 + boktr2) * wysokosc) / 2;
        cout << "Pole trapeza wynosi: " << pole << endl;
    }
    else if (a == 3)
    {
        cout << "Podaj  dlugosc boku romba" << endl;
        cin >> bokro;
        cout << "Podaj wysokosc rombu" << endl;
        cin >> wysokosc;
        pole = bokro * wysokosc;
        cout << "Pole rombu wynosi: " << pole << endl;
    }
    else if (a == 4)
    {
        cout << "Podaj dlugosc boku trojkata" << endl;
        cin >> boktro;
        cout << "Podaj wysokosc trojkata" << endl;
        cin >> wysokosc;
        pole = (boktro * wysokosc) / 2;
        cout << "Pole trojkata wynosi: " << pole << endl;
    }
    else
        cout << "Bledna wartosc" << endl;
    
}

