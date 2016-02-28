/* Advanced AyyLmao by Patrick Pedersen 11:25 AM :25 29.12.2015  */

#include <iostream>

using namespace std;

string space = " ";

void ayylmao ();
void custom_ayylmao (string ayy, string lmao);

int main ()
{
	
	int option;
	cout << "Welcome to ayylmao" << endl << endl;
	cout << "1. Ayy Lmao" << endl;
	cout << "2. Custom Ayy Lmao" << endl << endl;
	cout << "Select Option :" << space;
	cin >> option;
	cout << endl;
	
	if (option == 1)
	{
		ayylmao();
	}
	else if (option == 2)
	{
		string ayy;
		string lmao;
		cout << "Ayy? :" << space;
		cin >> ayy;
		cout << endl << "Lamo? :" << space;
		cin >> lmao;
		custom_ayylmao (ayy, lmao);
	}
	else
	{
		cout << "no!" << endl;
	}
	return 0;
}


void ayylmao ()
{
	cout << "Ayy Lmao" << endl;
}

void custom_ayylmao (string ayy, string lmao)
{
	cout << ayy << lmao << endl;
}
