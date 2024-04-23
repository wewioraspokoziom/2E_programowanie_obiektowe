#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string mieszajLitery(string PodaneSlowo);
string Zgadywanie(string WymieszaneSlowo, string PodaneSlowo);
int Powtorka();

int main()
{


	do
	{
		string const Slowo("C:/Users/Uczen/source/repos/ConsoleApplication4/ConsoleApplication4/scores.txt");
		ofstream Strumien(Slowo.c_str());
		string PodaneSlowo;

		if (Strumien)
		{


			cout << "Podaj slowo do odgadniecia: " << endl << "Pamietaj masz 5 prob!" << endl;
			cin >> PodaneSlowo;

			Strumien << PodaneSlowo << endl;
		}
		

		else
		{
			cout << "B³¹d";
		}

		string wymieszane = mieszajLitery(PodaneSlowo);
		Zgadywanie(wymieszane, PodaneSlowo);
		Strumien.close();

	} while (Powtorka() == 1);

	

	return 0;

}

string mieszajLitery(string PodaneSlowo)
{
	string WymieszaneSlowo;
	int pozycja(0);

	while (PodaneSlowo.size() != 0)
	{
		pozycja = rand() % PodaneSlowo.size();
		WymieszaneSlowo += PodaneSlowo[pozycja];
		PodaneSlowo.erase(pozycja, 1);

	}


	return WymieszaneSlowo;
}


string Zgadywanie(string WymieszaneSlowo, string PodaneSlowo)
{
	string SlowoZgadywane;
	int i = 1;


	do
	{
		cout << "Podaj poprawne odgadniecie slowa: " << WymieszaneSlowo << endl;
		cin >> SlowoZgadywane;
		if (SlowoZgadywane == PodaneSlowo)
		{
			cout << "Gratuluje, zgadles!\n";


		}
		else
		{
			cout << "Niestety nie zgadles\n";
			i++;
			if (i > 5)
			{
				cout << "Wykorzystales limit prob!\n";

			}
		}

	} while (SlowoZgadywane != PodaneSlowo && i <= 5);


	return SlowoZgadywane;
}


int Powtorka()
{
	char taknie;
	cout << "Czy chcesz zagrac jeszce raz: " << endl << "t - Tak" << endl << "n - Nie" << endl;
	cin >> taknie;
	if (taknie == 't')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}