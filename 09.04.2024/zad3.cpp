#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream plik("plik.txt");
	char tekst[12] = {};

	if (!plik)
		cout << "B³¹d odczytu pliku";
	else {
		plik.seekg(0);
		plik.read(tekst, 11);
	}
	plik.close();

	cout << tekst << endl;

	system("PAUSE");
	return EXIT_SUCCESS;

}

