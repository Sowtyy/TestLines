#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

Zanovo: //точка повтора при ответе "1" на "Начать заново"

	char SimvolLinii;
	double DlinnaLinii;
	double TipLinii;
	int Vail = 0;
	int Povtor;

	for (int nLinii = 0; nLinii < 100; nLinii++)
	{
		cout << "\n";
	}
	
	cout << "Какой символ отображать? ";
	cin >> SimvolLinii; cout << endl;
	
	cout << "Какое количество должно отображаться? ";
	cin >> DlinnaLinii; cout << endl;

TipLiniiError: //точка повтора если else при выборе TipLinii

	cout << "Горизонтальная линия = 1" << endl << "Вертикальная линия = 2" << endl;
	cin >> TipLinii; cout << endl;
	
	for (int nLinii = 0; nLinii < 100; nLinii++)
	{
		cout << "\n";
	}
	
	if (TipLinii != 1 && TipLinii != 2)
	{
		cout << "Принимаются только ответы '1' или '2'" << endl << endl;
		goto TipLiniiError; //переход при else
	}

	while (Vail < DlinnaLinii)
	{
		if (TipLinii == 1)
		{
			cout << SimvolLinii;
		}

		if (TipLinii == 2)
		{
			cout << SimvolLinii << endl;
		}
		Vail++;
	}

	cout << "\n\n\n\n";

	cout << "Начать заново = 1" << endl << "Закрыть = Любой символ" << endl; //нужен ли полный повтор
	cin >> Povtor;

	if (Povtor == 1)
	{
		for (int nLinii = 0; nLinii < 100; nLinii++)
		{
			cout << "\n";
		}
		goto Zanovo;
	}
	
	else
	{
		for (int nLinii = 0; nLinii < 100; nLinii++)
		{
			cout << "\n";
		}
		cout << "\t\t\t\t\t\t\t\t\t\tv1.1.3" << endl << endl << "\t\t\t\t\t\t\t\t\t\tby Sowtyy" << endl << "\t\t\t\t\t\t\t\t\t\t03.09.2020 @ 18:00 pm";
		Sleep(1000);
	}
	return 0;
}