#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe: " << endl;
    cin >> a;
    if (a <= 30)
    {
        switch (a)
        {
        case 1:
            cout << "bmw" << endl;
            break;
        case 2:
            cout << "porsche" << endl;
            break;
        case 3:
            cout << "audi" << endl;
            break;
        case 4:
            cout << "mercedes" << endl;
            break;
        case 5:
            cout << "opel" << endl;
            break;
        case 6:
            cout << "nissan" << endl;
            break;
        case 7:
            cout << "toyota" << endl;
            break;
        case 8:
            cout << "lexus" << endl;
            break;
        case 9:
            cout << "lotus" << endl;
            break;
        case 10:
            cout << "subaru" << endl;
            break;
        case 11:
            cout << "mazda" << endl;
            break;
        case 12:
            cout << "mitsubishi" << endl;
            break;
        case 13:
            cout << "peugeot" << endl;
            break;
        case 14:
            cout << "bugatti" << endl;
            break;
        case 15:
            cout << "lamborghini" << endl;
            break;
        case 16:
            cout << "pagani" << endl;
            break;
        case 17:
            cout << "skoda" << endl;
            break;
        case 18:
            cout << "fiat" << endl;
            break;
        case 19:
            cout << "ford" << endl;
            break;
        case 20:
            cout << "volkswagen" << endl;
            break;
        case 21:
            cout << "seat" << endl;
            break;
        case 22:
            cout << "saab" << endl;
            break;
        case 23:
            cout << "hyundai" << endl;
            break;
        case 24:
            cout << "honda" << endl;
            break;
        case 25:
            cout << "renault" << endl;
            break;
        case 26:
            cout << "citroen" << endl;
            break;
        case 27:
            cout << "jeep" << endl;
            break;
        case 28:
            cout << "ferrari" << endl;
            break;
        case 29:
            cout << "volvo" << endl;
            break;
        case 30:
            cout << "kia" << endl;
            break;
        }
    }
    else
        cout << "bledna liczba" << endl;
}

