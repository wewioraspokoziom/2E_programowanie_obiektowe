#include <iostream>

using namespace std;

int fib(int n) {
    int i, p1, p2, wynik;
    if (n < 3)
        wynik = 1;
    else {
        p1 = 1;
        p2 = 1;
        for (i = 3; i <= n; i++) {
            wynik = p1 + p2;
            p2 = p1;
            p1 = wynik;
        }
    }
    return wynik;
}

int main()
{
    int liczba, j;
    cout << "Podaj liczbe dokad chcesz obliczyc ciag fibonacciego" << endl;
    cin >> liczba;
    for (j = 1; j <= liczba; j++)
        cout << fib(j) << " ";
}
