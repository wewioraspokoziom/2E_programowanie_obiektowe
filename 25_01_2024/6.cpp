#include <iostream>
#include <cmath>

using namespace std;

double Obwodko(const double*);
double Poleko(const double*);


int main()
{
	double promien;
	
	cout << "Podaj promien kola" << endl;
	cin >> promien;
	
	double* w_promien = &promien;
	
	cout << "Obwod wynosi " << Obwodko(w_promien) << endl;
	cout << "Pole wynosi " << Poleko(w_promien) << endl;

}
double Obwodko(const double *promien)
{
	return 2 * 3.14 * *promien;
}

double Poleko(const double *promien)
{
	return *promien * *promien * 3.14;
}

