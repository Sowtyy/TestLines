#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	char SimvolLinii;
	double DlinnaLinii;
	int TipLinii;
	int Ch = 0;

	cout << "Какой символ отображать? ";
	cin >> SimvolLinii; cout << endl;

	cout << "Какое количество должно отображаться? ";
	cin >> DlinnaLinii; cout << endl;

	cout << "Горизонтальная линия = 1" << endl << "Вертикальная линия = 2" << endl;
	cin >> TipLinii; cout << endl;

	while (Ch < DlinnaLinii)
	{
		if (TipLinii == 1)
		{
			cout << SimvolLinii;
		}
	
		if (TipLinii == 2)
		{
			cout << SimvolLinii << endl;
		}
	Ch++;
	}
	
	cout << endl << endl;
	
	system("pause");
}