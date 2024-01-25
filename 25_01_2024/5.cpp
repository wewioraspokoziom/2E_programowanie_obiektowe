#include <iostream>

using namespace std;

double Obwodko(const double&);
double Poleko(const double&);


int main()
{
	double promien;
	
	cout << "Podaj promien kola" << endl;
	cin >> promien;
	
	cout << "Obwod wynosi " << Obwodko(promien) << endl;
	cout << "Pole wynosi " << Poleko(promien) << endl;

}
double Obwodko(const double& promien)
{
	return 2 * 3.14 * promien;
}

double Poleko(const double& promien)
{
	return promien * promien * 3.14;
}

