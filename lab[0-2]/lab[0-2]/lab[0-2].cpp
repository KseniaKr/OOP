// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>

int SumDigits(int i)
{
	int sum = 0;
	// цикл продолжается до тех пор, пока число не станет равным 0
	while (i != 0)
	{
		sum += i % 10;
		i /= 10;
	}
	return sum;
}
int main()
{
	int j;
	std::cin >> j;
	for (int i = 1; i <= 1000; ++i)
	{
		if (i % SumDigits(i)== 0)
		{
			std::cout << i << std::endl;
		}
			
	}
	char *ptr;
	ptr = "4";
	_getch();
	return 0;
}
