#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
/*
    string const nazwaPliku("C:\scores.txt");
    ofstream mojStrumien(nazwaPliku.c_str());



    if (mojStrumien)
    {
        mojStrumien << "Witaj, jestem zdaniem zapisanym w pliku" << endl;
        mojStrumien << 42.1337 << endl;
        int age(23);
        mojStrumien << "Mam" << age << " lata." << endl;
    }
    else
    {
        cout << "Blad: nie mozna otwozyc pliku" << endl;
    }
    

    ifstream plik("C:\plik.txt");
    
    if (plik)
    {
        string linia;

        while (getline(plik, linia))
        {
            cout << linia << endl;
        }
    }
    else
    {
        cout << "B³¹d: nie mozna otworzyc pliku do odczytu" << endl;
    }
    */

    ifstream plik("C:\najlepszeWyniki.txt");
    plik.seekg(0, ios::end);

    int dlugosc;
    dlugosc = plik.tellg();

    cout << "Dlugosc pliku w bajtach wynosi: " << dlugosc << "." << endl;

    return 0;
}

