#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2, sayi3;
	float ortalama;

	cout << "Birinci say�y� giriniz : ";
	cin >> sayi1;

	cout << "�kinci say�y� giriniz : ";
	cin >> sayi2;

	cout << "���nc� say�y� giriniz : ";
	cin >> sayi3;

	ortalama = (sayi1 + sayi2 + sayi3) / 3;
	cout << "Ortalama : " << ortalama << endl;

	return 0;
}