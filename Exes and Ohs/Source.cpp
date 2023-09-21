/*
Check to see if a string has the same amount of 'x's and 'o's. The method must return
a boolean and be case insensitive. The string can contain any char.
*/
#include<iostream>
#include<string>
#include<cassert>

bool XO(const std::string& str)
{
	int x{ 0 };
	int o{ 0 };
	int lengh = str.length();
	for (int i{ 0 }; i < lengh; ++i)
	{
		if (str[i] == 'o'||str[i] == 'O')
			++o;
		if (str[i] == 'x' || str[i] == 'X')
			++x;
	}
	return (x==o);
}

int main()
{
	std::cout << XO("ooxx");
	std::cout << XO("xooxx");
	std::cout << XO("ooxXm");
	std::cout << XO("zpzpzpp");
	std::cout << XO("zzoo");
}
