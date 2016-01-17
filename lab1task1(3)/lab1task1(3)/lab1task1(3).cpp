// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool SearchForStringInString(string const& line, string const& searchString)
{	
	if (line.size() < searchString.size())
	{
		return false;
	}
	//cout << int(line.size()) - searchString.size() << endl;
	for (size_t i = 0; i <= line.size() - searchString.size(); i++)
	{
		if (searchString == line.substr(i, searchString.size()))
		{
			return true;
		}
	}
	return false;
}

void PrintVector(vector <size_t> const& result)
{
	for (size_t i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
}

vector <size_t> StringSearchInAFile(ifstream & file, string const& searchString) 
{
	vector <size_t> result;
	size_t number = 1;
	while (!file.eof()) 
	{
		string line; 
		getline(file, line);
		if (SearchForStringInString(line, searchString))
		{
			result.push_back(number);

		}
		number++;
	}
	return result;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	if (argc != 3)
	{
		cout << "Неверное количество параметров" << endl;
		return 1;
	}
	ifstream file(argv[1]);

	if (!file.is_open()) 
	{
		cout << "Не удалось открыть файл" << endl;
		return 1;
	}

	vector <size_t> result = StringSearchInAFile(file, argv[2]);
	if (result.size() == 0)
	{
		cout << "Text not found" << endl;
		return 1;
	}
	else
	{
		PrintVector(result);
	}
	return 0;
}


