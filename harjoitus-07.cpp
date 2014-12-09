//Made by Toni Pajukanta,Ryhmä IIO14S1

/*
#include <iostream>
#include <iomanip>
#include < stdio.h >
using namespace std;
float main()
{
float pituus;
float paino;
char nimi[40];
char osoite[40];
printf ("Anna Nimesi ");
scanf(nimi, 40);
cout << "Anna Pituutesi sentteina ";
cin >> pituus;
cout << "Anna osoitteesi ";
cin.get();
cin.getline(osoite, 40);
cout << "Anna Painosi kiloina ";
cin >> paino;
float ihanne = pituus - 100;
float ero = paino - ihanne;
cout << "\nArvoisa " << nimi;
cout << "\nOsoitteesi on " << osoite;
cout << "\nNykyinen painosi " << setprecision(1) << fixed << paino << " kg";
cout << "\nIhannepainosi " << setprecision(1) << fixed << ihanne << " kg";
cout << "\nErotus " << setprecision(1) << fixed << ero << " kg\n";
return 0;
*/

#include <iostream>
#include <iomanip>
using namespace std;
float main()
{
	float pituus;
	float paino;
	char nimi[40];
	char osoite[40];
	cout << "Anna Nimesi ";
	cin.getline(nimi, 40);
	cout << "Anna Pituutesi sentteina ";
	cin >> pituus;
	cout << "Anna osoitteesi ";
	cin.get();
	cin.getline(osoite, 40);
	cout << "Anna Painosi kiloina ";
	cin >> paino;
	float ihanne = pituus - 100;
	float ero = paino - ihanne;
	cout << "\nArvoisa " << nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen painosi " << setprecision(1) << fixed << paino << " kg";
	cout << "\nIhannepainosi " << setprecision(1) << fixed << ihanne << " kg";
	cout << "\nErotus " << setprecision(1) << fixed << ero << " kg\n";
	return 0;
}