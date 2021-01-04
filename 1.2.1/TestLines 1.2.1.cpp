#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

Again: //точка повтора при ответе "1" на "Начать заново"

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
	
lineSymbolError: //точка повтора при ошибке lineSymbol

	cout << "Какой символ отображать? ";
	cin >> lineSymbol; cout << endl;

	if (lineSymbol[1] > 1)
	{
		for (int nLines = 0; nLines < 100; nLines++)
		{
			cout << "\n";
		}
		cout << "Введите только один символ" << endl << endl << endl << endl;
		goto lineSymbolError; // переход при больше чем одном символе в lineSymbol
	}
	
	cout << "Какое количество должно отображаться? ";
	cin >> lineLength; cout << endl;

lineTypeError: //точка повтора если значение lineType не 1 и не 2

	cout << "Горизонтальная линия = 1" << endl << "Вертикальная линия = 2" << endl;
	cin >> lineType; cout << endl;
	
	for (int nLines = 0; nLines < 100; nLines++)
	{
		cout << "\n";
	}
	
	if (lineType[0] != 49 && lineType[0] != 50)
	{
		cout << "Принимаются только ответы '1' или '2'" << endl << endl << endl << endl;
		goto lineTypeError; //переход если значение lineType не 1 и не 2
	}

	if (lineType[1] != 0)
	{
		cout << "Принимаются только ответы '1' или '2'" << endl << endl << endl << endl;
		lineType[1] = 0;
		goto lineTypeError; //переход если значение lineType не 1 и не 2
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

Yarik: //точка повтора при нажатии на '2'

	cout << "Начать заново = 1" << endl << "Закрыть = Любой символ" << endl; //нужен ли полный повтор
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
		cout << "\t\t\t\t\t«Ярик пидор»\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		goto Yarik; //переход если значение qAgain = 2
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