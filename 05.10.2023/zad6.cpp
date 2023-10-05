
#include <iostream>

using namespace std;

int main()
{
    int x;
 

	cout<<"Podaj rok: " << endl;
	cin>>x;


	if((x%4==0 && x%100!=0) || x%400==0) 
	{
		cout<<"Rok "<<x<<" jest przestępny." << endl;
		cout << "W tym roku luty mial 29 dni" << endl;
	}
	else
		cout<<"Rok "<<x<<" nie jest przestępny." << endl;
        cout << "W tym roku luty mial 28 dni" << endl;

    return 0;
}
