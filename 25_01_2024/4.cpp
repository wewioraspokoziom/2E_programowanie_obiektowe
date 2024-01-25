#include <iostream>

using namespace std;

double Obwodko(double promien)
{
	return 2 * 3.14 * promien;
}

double Poleko(double promien)
{
	return promien * promien * 3.14;
}

int main()
{
	double promien;
	
	cout << "Podaj promien kola" << endl;
	cin >> promien;
	
	cout << "Obwod wynosi " << Obwodko(promien) << endl;
	cout << "Pole wynosi " << Poleko(promien) << endl;

}

