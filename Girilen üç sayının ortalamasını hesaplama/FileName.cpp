#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2, sayi3;
	float ortalama;

	cout << "Birinci sayýyý giriniz : ";
	cin >> sayi1;

	cout << "Ýkinci sayýyý giriniz : ";
	cin >> sayi2;

	cout << "Üçüncü sayýyý giriniz : ";
	cin >> sayi3;

	ortalama = (sayi1 + sayi2 + sayi3) / 3;
	cout << "Ortalama : " << ortalama << endl;

	return 0;
}