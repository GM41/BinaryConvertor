#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int number, digit = 0;
	string result = "";
	cout << "Hi!" << endl;
	cout << "Input number please=";
	cin >> number;
	while (number > 0)
	{
		digit = number % 2;
		result = to_string(digit) + result;
		number /= 2;
	}
	cout << result;

	return 0;
}
