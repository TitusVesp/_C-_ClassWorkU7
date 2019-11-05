// _C++_ClassWorkU7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "ClassWork7.h"

int main()
{
	cout << "Enter your string: " << endl;
	char* text = new char[256];
	char** words = new char* [256];
	for (int i = 0; i < 256; ++i) words[i] = new char[256];
	int iterI = 0;
	cin.getline(text, 256);

	words = Task1(text, iterI);

	for (int i = 0; i < iterI; i++)
	{
		for (int k = 0; words[i][k] > 0; k++)
			cout << words[i][k];
		cout << endl;
	}

	iterI = 0;
	words = Task2(text, iterI);

	for (int i = 0; i < iterI; i++)
	{
		for (int k = 0; words[i][k] > 0; k++)
			cout << words[i][k];
		cout << " ";
	}
	cout << endl;
	delete[] text;
}