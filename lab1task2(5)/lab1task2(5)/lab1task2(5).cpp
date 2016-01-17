// lab1task2(5).cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int StringToInt(const char * str, bool & err)
{
	char * pLastChar = NULL;
	int param = strtol(str, &pLastChar, 10);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}

unsigned char FlipByte(unsigned char const& num)
{
	unsigned char result = 0;
	for (int i = 0; i < 8; i++)
	{
		result = (result << 1) | ((num >> i) & 1);
			//((unsigned char(pow(2, i)) & num) >> i) << (7 - i);
	}
	return result;
}

int main(int argc, char* argv[])
{ 
	setlocale(LC_ALL, "Rus");
	if (argc != 2 )
	{
		cout << "Ќеверное кол-во параметров ";
		return 1;
	}
	bool err;
	int param = StringToInt(argv[1], err);
	if (err || param < 0 || param > 255)
	{
		printf("Argument error ");
		return 1;
	}

	cout << int(FlipByte(param)) << endl;
	return 0;
}

