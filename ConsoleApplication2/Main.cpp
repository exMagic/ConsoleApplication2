#include <iostream>
#include <string>


using namespace std;

class Zwierze
{
public:
	//atrybuty
	string gatunek;
	string imie;
	int wiek;
	//metody
	void dodaj_zwierze() {
		cout << "DODAWANIE ZWIERZA" << endl;
		cout << "podaj gatunek: ";
		cin >> gatunek;
		cout << "podaj imie: ";
		cin >> imie;
		cout << "podaj wiek: ";
		cin >> wiek;
		
	}
	void daj_glos() {
		if(gatunek=="kot") cout<<imie<<" lat "<<wiek<<": Maiu!";
		else if (gatunek == "koza") cout << imie << " lat" << wiek << ": Beee!";
		else if (gatunek == "krowa") cout << imie << " lat" << wiek << ": Buuu!";
		else  cout << " nieznany gatunek moze jakies nawet ufo!? ";
		cout << endl;
	}
	
};


int main() {
	Zwierze z1;
	z1.dodaj_zwierze();
	z1.daj_glos();
	
	return 0;
}