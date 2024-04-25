#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;



string  Losowanie(string nazwaPliku) {
    ifstream plik(nazwaPliku);
    vector<string> slowa;
    if (plik) {
        string slowo;
        while (plik >> slowo) {
            slowa.push_back(slowo);
        }
    }
    else {
        cout << "Blad" << endl;
    }
    int indeks = rand() % slowa.size();
    return slowa[indeks];
}


    int main()
    {
        string imie, sekretneSlowo;
        cout << "Podaj swoje imie" << endl;
        cin >> imie;
        ofstream osoba(imie + ".txt", ios::out | ios::_Noreplace);
        osoba.close();

        sekretneSlowo = Losowanie("plik.txt");
        cout << sekretneSlowo;
    }



