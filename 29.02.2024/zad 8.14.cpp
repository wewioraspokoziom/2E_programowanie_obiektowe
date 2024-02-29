#include <iostream>

using namespace std;

void pobierzLancuch(string& lancuch){
    cin >> lancuch;
}

void sumaLancuchow(string lancuch1, string lancuch2, string lancuch3, string& lancuch4) {
    lancuch4 = lancuch1 + " " + lancuch2 + " " + lancuch3;
}

void wyswietlLancuch(string lancuch) {
    cout << lancuch << endl;
}

int main() 
{
    string czlon1 = "", czlon2 = "", czlon3;
    string nazwa = "";
    
    cout << "Podaj nazwe jezyka programowania: ";
    pobierzLancuch(czlon1);
    
    cout << "Podaj wersje: ";
    pobierzLancuch(czlon2);
    
    cout << "Podaj wersje: ";
    pobierzLancuch(czlon3);
    
    sumaLancuchow(czlon1, czlon2, czlon3, nazwa);
    
    cout << "Jezyk programowania: ";
    wyswietlLancuch(nazwa);
    
    return 0;
}

