#include <iostream>
#include <cstring>

using namespace std;

void pobierzNapis(char napis[]) {
    cin >> napis;
}

void wyswietlNapis(const char napis[]) {
    cout << napis << endl;
}

void sumaNapisow(const char napis1[], const char napis2[], const char napis3[], char napis4[]){
    char temp[30] = "";
    
    strcat(temp, napis1);
    strcat(temp, " ");
    strcat(temp, napis2);
    strcat(temp, " ");
    strcat(temp, napis3);
    
    
    strcat(napis4, temp);
}

int main()
{
    char pierwszyCzlon[15] = "", drugiCzlon[15] = "", trzeciCzlon[15] = "";
    char czlony[30] = "";
    
    cout << "Podaj pierwszy czlon: ";
    pobierzNapis(pierwszyCzlon);
    
    cout << "Podaj drugi czlon: ";
    pobierzNapis(drugiCzlon);
    
    cout << "Podaj trzeci czlon: ";
    pobierzNapis(trzeciCzlon);
    
    sumaNapisow(pierwszyCzlon, drugiCzlon, trzeciCzlon, czlony);
    
    cout << "Cala nazwa: ";
    wyswietlNapis(czlony);
    
    return 0;

}