#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

Again: //����� ������� ��� ������ "1" �� "������ ������"

	char lineSymbol[500];
	lineSymbol[1] = 0;
	double lineLength;
	char lineType[500];
	int Wh = 0;
	int qAgain;
	
	for (int nLines = 0; nLines < 100; nLines++)
	{
		cout << "\n";
	}
	
lineSymbolError: //����� ������� ��� ������ lineSymbol

	cout << "����� ������ ����������? ";
	cin >> lineSymbol; cout << endl;

	if (lineSymbol[1] > 1)
	{
		for (int nLines = 0; nLines < 100; nLines++)
		{
			cout << "\n";
		}
		cout << "������� ������ ���� ������" << endl << endl << endl << endl;
		goto lineSymbolError; // ������� ��� ������ ��� ����� ������� � lineSymbol
	}
	
	cout << "����� ���������� ������ ������������? ";
	cin >> lineLength; cout << endl;

lineTypeError: //����� ������� ���� �������� lineType �� 1 � �� 2

	cout << "�������������� ����� = 1" << endl << "������������ ����� = 2" << endl;
	cin >> lineType; cout << endl;
	
	for (int nLines = 0; nLines < 100; nLines++)
	{
		cout << "\n";
	}
	
	if (lineType[0] != 49 && lineType[0] != 50)
	{
		cout << "����������� ������ ������ '1' ��� '2'" << endl << endl << endl << endl;
		goto lineTypeError; //������� ���� �������� lineType �� 1 � �� 2
	}

	if (lineType[1] != 0)
	{
		cout << "����������� ������ ������ '1' ��� '2'" << endl << endl << endl << endl;
		lineType[1] = 0;
		goto lineTypeError; //������� ���� �������� lineType �� 1 � �� 2
	}

	while (Wh < lineLength)
	{
		if (lineType[0] == 49)
		{
			cout << lineSymbol;
		}

		if (lineType[0] == 50)
		{
			cout << lineSymbol << endl;
		}
		Wh++;
	}

	cout << "\n\n\n\n";

Yarik: //����� ������� ��� ������� �� '2'

	cout << "������ ������ = 1" << endl << "������� = ����� ������" << endl; //����� �� ������ ������
	cin >> qAgain;

	if (qAgain == 1)
	{
		for (int nLines = 0; nLines < 100; nLines++)
		{
			cout << "\n";
		}
		goto Again;
	}
	
	else if (qAgain == 2)
	{
		for (int nLines = 0; nLines < 100; nLines++)
		{
			cout << "\n";
		}
		cout << "\t\t\t\t\t����� �����\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		goto Yarik; //������� ���� �������� qAgain = 2
	}
	
	else
	{
		for (int nLines = 0; nLines < 100; nLines++)
		{
			cout << "\n";
		}
		cout << "\t\t\t\t\t\t\t\t\t\tv1.2.1" << endl << endl << "\t\t\t\t\t\t\t\t\t\tby Sowtyy" << endl << "\t\t\t\t\t\t\t\t\t\t04.09.2020 @ 01:00 pm";
		Sleep(1000);
	}
	return 0;
}