#include <iostream>
#include <string>
#include "przyjaciele.h"


using namespace std;


void sedzia(Punkt pkt, Prostokat p) {
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
		cout << endl << "Punkt " << pkt.nazwa << " nalezy do rodziny " << p.nazwa;
	else
		cout << endl << "Punkt " << pkt.nazwa << " NIENALEZY do rodziny " << p.nazwa;
}

int main() {
	int a;
	//
	Punkt pkt1("Mike", 3, 18);
	pkt1.wczytaj();

	Prostokat p1("Corleone", 0, 0, 6, 4);
	p1.wczytaj();

	sedzia(pkt1, p1);

	//
	cin >> a;
	return 0;
}