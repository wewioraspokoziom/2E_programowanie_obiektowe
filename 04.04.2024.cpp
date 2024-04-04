#include <iostream>

using namespace std;

int main()
{
	double iloscpieniedzy;
	int przedwaluta;
	double powaluta;
	int przewalutowanie;
	cout << "Podaj ile masz pieniedzy " << endl;
	cin >> iloscpieniedzy;
	cout << "Wybierz, jaka chcesz walute " << endl;
	cout << "1: zloty na euro " << endl;
	cout << "2: euro na zloty " << endl;
	cout << "3: zloty na dolar " << endl;
	cout << "4: dolar na zloty " << endl;
	cout << "5: zloty na dirham " << endl;
	cout << "6: dirham na zloty " << endl;
	cout << "7: zloty na funt " << endl;
	cout << "8: funt na zloty " << endl;
	cout << "9: zloty na jen " << endl;
	cout << "10: jen na zloty " << endl;
	cin >> przedwaluta;

	if (iloscpieniedzy < 1)
		cout << "B³¹d " << endl;
	else
		switch (przedwaluta)
		{
			case 1:
				cout << iloscpieniedzy * 0.23 << endl;
				break;
			
			case 2:
				cout << iloscpieniedzy * 4.3 << endl;
				break;
			case 3:
				cout << iloscpieniedzy * 0.25 << endl;
				break;
			case 4:
				cout << iloscpieniedzy * 3.95 << endl;
				break;
			case 5:
				cout << iloscpieniedzy * 0.93 << endl;
				break;
			case 6:
				cout << iloscpieniedzy * 1.08 << endl;
				break;
			case 7:
				cout << iloscpieniedzy * 0.20 << endl;
				break;
			case 8:
				cout << iloscpieniedzy * 5.01 << endl;
				break;
			case 9:
				cout << iloscpieniedzy * 38.38 << endl;
				break;
			case 10:
				cout << iloscpieniedzy * 0.026 << endl;
		}
	
}
