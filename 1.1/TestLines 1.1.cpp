#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

Snova: //����� �������

	char SimvolLinii;
	double DlinnaLinii;
	int TipLinii;
	int Vail = 0;
	int Povtor;

	for (int Nachalo = 0; Nachalo < 100; Nachalo++)
	{
		cout << "\n";
	}
	
	cout << "����� ������ ����������? ";
	cin >> SimvolLinii; cout << endl;

	cout << "����� ���������� ������ ������������? ";
	cin >> DlinnaLinii; cout << endl;

	cout << "�������������� ����� = 1" << endl << "������������ ����� = 2" << endl;
	cout << endl; cin >> TipLinii; cout << endl;

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

	cout << "\t������ ������ = 1" << endl << "\t������� = ����� ������" << endl; //����� �� ������
	cout << "\t"; cin >> Povtor;

	if (Povtor == 1)
	{
		for (int Zakrit = 0; Zakrit < 100; Zakrit++)
		{
			cout << "\n";
		}
		goto Snova;
	}

	else
	{
		for (int Zakrit = 0; Zakrit < 100; Zakrit++)
		{
			cout << "\n";
		}
		cout << "\t\t\t\t\t\t\t\t\t\tv1.1" << endl << endl << "\t\t\t\t\t\t\t\t\t\tby Sowtyy" << endl << "\t\t\t\t\t\t\t\t\t\t03.08.2020 @ ~6:00 am";
		Sleep(1000);
	}
return 0;
}