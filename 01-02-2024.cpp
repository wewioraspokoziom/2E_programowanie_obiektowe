#include <iostream>

using namespace std;

double suma(double liczba1, double liczba2) {
    return liczba1 + liczba2;
}

double roznica(double liczba1, double liczba2) {
    return liczba1 - liczba2;

}

double iloczyn(double liczba1, double liczba2) {
    return liczba1* liczba2;
}

double iloraz(double liczba1, double liczba2) {
    return liczba1 / liczba2;
}

double sposoby(int sposob) {
    switch(sposob){
        double liczba1, liczba2;
 
    case 1:
        cout << "Podaj 1 liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj 2 liczbe: " << endl;
        cin >> liczba2;
        cout << suma(liczba1, liczba2);
        break;
    case 2:
        cout << "Podaj 1 liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj 2 liczbe: " << endl;
        cin >> liczba2;
        cout << roznica(liczba1, liczba2);
        break;
    case 3:
        cout << "Podaj 1 liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj 2 liczbe: " << endl;
        cin >> liczba2;
        cout << iloczyn(liczba1, liczba2);
        break;
    case 4:
        cout << "Podaj 1 liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj 2 liczbe: " << endl;
        cin >> liczba2;
        cout << iloraz(liczba1, liczba2);
        break;
    default:
        cout << "Blad" << endl;
        break;
    }
  
    return 0;
}



int main()
{
    int sposobb;
    cout << "Jaki znak dzialania chcesz wykorzystac? " << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" << endl;
    cin >> sposobb;
    sposoby(sposobb);


}

