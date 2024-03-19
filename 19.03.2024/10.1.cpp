#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    cout << "Wartosc stalej Pi: " << M_PI << endl;
    cout << "Wartosc bezwzgledna liczby -1 = " << abs(-1) << endl;
    cout << "Kwadrat liczby 3 = " << pow(3, 2) << endl;
    cout << "Pierwiastek kwadratowy liczby 4 = " << sqrt(4) << endl;
    cout << "Mniejsza z dwoch liczb: 1 i 10 = " << fmin(1, 10) << endl;
    cout << "Wieksza z dwoch liczb: 1 i 10 = " << fmax(1, 10) << endl;
    cout << "Zaokrąglenie do liczby całkowitej liuczby 1.55 = " << round(1.55) << endl;
    double czesc_calkowita;
    double czesc_ulamkowa = modf(1.55, &czesc_calkowita);
    cout << "Czesc calkowita liczby 1.55 = " << czesc_calkowita << endl;
    cout << "Czesc ulamkowa liczby 1.55 = " << czesc_ulamkowa << endl;
    cout << "Zaokraglenie w gore liczby 1.55 = " << ceil(1.55) << endl;
    cout << "Zaokraglenie w dol liczby 1.55 = " << floor(1.55) << endl;
    cout << "Sinus liczby PI/2 = " << sin(M_PI / 2) << endl;

    return 0;
}
