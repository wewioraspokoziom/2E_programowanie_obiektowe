#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int main()
{
    int liczba;
    string typ;
    string wybor, k, n, p;


    for (;;)
    {


        cout << "Wybierz umiejetnosc: " << endl;
        cout << "1 - nozyczki " << endl;
        cout << "2 - papier " << endl;
        cout << "3 - kamien " << endl;
        cout << "4 - jaszczurka " << endl;
        cout << "5 - spock " << endl;
        cin >> wybor;
        srand(time(NULL));
        liczba = rand() % 5 + 1;
        cout << liczba << endl;

        switch (liczba)
        {
        case 1: typ = "1"; break;
        case 2: typ = "2"; break;
        case 3: typ = "3"; break;
        case 4: typ = "1"; break;
        case 5: typ = "2"; break;

        }


        if (wybor == typ)
        {
            cout << "Remis. Jeszcze raz: " << endl;
        }
        if (((wybor == "1") && (typ == "2")) || ((wybor == "1") && (typ == "4")) || ((wybor == "2") && (typ == "3")) || ((wybor == "2") && (typ == "4")) || ((wybor == "3") && (typ == "1")) || ((wybor == "3") && (typ == "5")) || ((wybor == "4") && (typ == "2")) || ((wybor == "4") && (typ == "3")) || ((wybor == "5") && (typ == "1")) || ((wybor == "5") && (typ == "2")))
        {
            cout << "Wygrales!" << endl;
            cout << "Liczba wylosowana: " << typ << endl;
            cout << "Twoja umiejetnosc :" << wybor << endl;
        }
        else
        {
            cout << "Przegrales" << endl;
            cout << "Liczba wylosowana: " << typ << endl;
            cout << "Twoja umiejetnosc: " << wybor << endl;
        }


    }
    return 0;
}