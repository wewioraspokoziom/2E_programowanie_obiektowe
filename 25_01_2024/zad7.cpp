#include <iostream>
#include <cmath>

using namespace std;

void Obwodko(double, double&);
void Poleko(double, double&);

int main()
{
	double promien;

	cout << "Podaj promien kola" << endl;
	cin >> promien;

	double pole;
	Poleko(promien, pole);
	double obwod;
	Obwodko(promien, obwod);

	cout << "Obwod wynosi " << obwod << endl;
	cout << "Pole wynosi " << pole << endl;

}
void Obwodko(double promien, double &obwod){

	2 * 3.14 * promien;
}

void Poleko(double promien, double &pole){

	promien * promien * 3.14;
}
