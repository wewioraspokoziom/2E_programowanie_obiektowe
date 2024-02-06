#include <iostream>

using namespace std;

double zamiana(int mila)
{
	double wynik;
	wynik = mila * 1.609;
	cout << "Ta odleglosc w km to: " << wynik << endl;
	return 0;

}

int main()
{
	double mila;
	cout << "Jaka odleglosc w milach chcesz zamienic na odleglosc w kilometrach?" << endl;
	cin >> mila;
	zamiana(mila);
	

}
