
#include <iostream>

using namespace std;

int main()
{
    int liczba, liczba1, liczba2, znak;
    cout << "Podaj 1 liczbe " << endl;
    cin >> liczba1;
    cout << "Podaj 2 liczbe" << endl;
    cin >> liczba2;
    cout << "Wybierz jakie dzialanie chcesz zrobic: " << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" << endl;
    cin >> znak; 
    
    if(znak == 1)
    {
        liczba = liczba1 + liczba2;
        cout << liczba << endl;
    }
    else if(znak == 2)
    {
        liczba = liczba1 - liczba2;
        cout << liczba << endl;
    }
    else if(znak == 3)
    {
        liczba = liczba1 * liczba2;
        cout << liczba << endl;
    }
    else if(znak == 4)
    {
        liczba = liczba1 / liczba2;
        cout << liczba << endl;
    }
    else if(znak == 0)
    {
        exit;
    }
    else 
    {
        cout << "błędna cyfra" << endl;
    }
    return 0;
}
