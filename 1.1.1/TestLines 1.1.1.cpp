#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

Snova: //точка повтора

	char SimvolLinii;
	double DlinnaLinii;
	int TipLinii;
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

	cout << "Горизонтальная линия = 1" << endl << "Вертикальная линия = 2" << endl;
	cin >> TipLinii; cout << endl;

	for (int nLinii = 0; nLinii < 100; nLinii++)
	{
		cout << "\n";
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

	cout << "Начать заного = 1" << endl << "Закрыть = Любой символ" << endl; //нужен ли повтор
	cin >> Povtor;

	if (Povtor == 1)
	{
		for (int nLinii = 0; nLinii < 100; nLinii++)
		{
			cout << "\n";
		}
		goto Snova;
	}

	else
	{
		for (int nLinii = 0; nLinii < 100; nLinii++)
		{
			cout << "\n";
		}
		cout << "\t\t\t\t\t\t\t\t\t\tv1.1.1" << endl << endl << "\t\t\t\t\t\t\t\t\t\tby Sowtyy" << endl << "\t\t\t\t\t\t\t\t\t\t03.09.2020 @ 12:00 pm";
		Sleep(1000);
	}
	return 0;
}