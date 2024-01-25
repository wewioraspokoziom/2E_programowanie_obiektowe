#include <iostream>

using namespace std;

double ObwodPr(double bok1, double bok2)
{
	return 2 * bok1 + 2 * bok2;
}

int main()
{
	double bok1;
	double bok2;
	cout << "Podaj bok 1" << endl;
	cin >> bok1;
	cout << "Podaj bok 2" << endl;
	cin >> bok2;
	cout << "Pole wynosi " << ObwodPr(bok1, bok2);

}

