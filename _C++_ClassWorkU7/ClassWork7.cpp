#include "ClassWork7.h"

char** Task1(char* text, int& iterI)
{
	char temp = '\0';
	int count = 0, curIter = 0, j = 0;

	char** words = new char* [256];
	for (int i = 0; i < 256; ++i) words[i] = new char[256];

	for (int i = 0; text[i - 1] != '\0'; i++)
	{
		if (temp == '\0' && text[i] != ' ')
		{
			curIter = i;
			temp = text[i];
		}

		if (text[i + 1] == ' ' || text[i + 1] == '\0')
		{
			if (curIter < i && temp != '\0')
			{
				for (int j = curIter, g = 0; j <= i; j++)
				{
					words[iterI][g++] = text[j];
				}
				iterI++;
			}
			temp = '\0';
		}
	}

	cout << endl;

	for (int i = 0; i < iterI - 1; i++)
	{
		for (int j = 0; j < iterI - 1; j++)
		{
			if (words[j][0] > words[j + 1][0])
			{
				swap(words[j], words[j + 1]);
			}
		}
	}

	return words;

	for (int i = 0; i < 256; ++i) delete[] words[i];
	delete[]words;
}

int StrLen(char** a, int j)
{
	int count = 0;
	for (int i = 0; a[j][i] > 0; i++) count++;

	return count;
}

char** Task2(char* text, int& iterI)
{
	char temp = '\0';
	int count = 0, curIter = 0, j = 0;

	char** words = new char* [256];
	for (int i = 0; i < 256; ++i) words[i] = new char[256];

	for (int i = 0; text[i - 1] != '\0'; i++)
	{
		if (temp == '\0' && text[i] != ' ')
		{
			curIter = i;
			temp = text[i];
		}

		if (text[i + 1] == ' ' || text[i + 1] == '\0')
		{
			if (curIter < i && temp != '\0')
			{
				for (int j = curIter, g = 0; j <= i; j++)
				{
					words[iterI][g++] = text[j];
				}
				iterI++;
			}
			temp = '\0';
		}
	}

	cout << endl;

	for (int i = 0; i < iterI - 1; i++)
	{
		for (int j = 0; j < iterI - 1; j++)
		{
			int x = StrLen(words, j);
			int y = StrLen(words, j + 1);
			if (x > y)
			{
				swap(words[j], words[j + 1]);

			}
		}
	}

	return words;

	for (int i = 0; i < 256; ++i) delete[] words[i];
	delete[]words;
}
