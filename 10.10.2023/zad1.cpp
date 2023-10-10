#include <iostream>

using namespace std;

int main()
{
    string login;
    string haslo;

    do {
        cout << "Wpisz login" << endl;
        cin >> login;
        cout << "Wpisz haslo" << endl;
        cin >> haslo;

        if (login == "admin" && haslo == "haslo") {
            cout << "Zostales zalogowany! " << endl;
            break;
        }
        else if (login == "admin1" && haslo == "haslo1") {
            cout << "Zostales zalogowany! " << endl;
            break;
        }
        else if (login == "admin2" && haslo == "haslo2") {
            cout << "Zostales zalogowany! " << endl;
            break;
        }
        else
            cout << "Bledne dane, sprobuj ponownie! " << endl;
    } while (true);

    return 0;
}

