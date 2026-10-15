// Chapter 4 Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	
		cout << "Enter a number between 0 and 10: ";
		cin >> number;

		switch (number)
	{
	case 1:
		cout << "You entered I." << endl;
		break;
	case 2:
		cout << "You entered II." << endl;
		break;
	case 3:
		cout << "You entered III." << endl;
		break;
	case 4:
		cout << "You entered IV." << endl;
		break;
	case 5:
		cout << "You entered V." << endl;
		break;
	case 6:
		cout << "You entered VI." << endl;
		break;
	case 7:
		cout << "You entered VII." << endl;
		break;
	case 8:
		cout << "You entered VIII." << endl;
		break;
	case 9:
		cout << "You entered IX." << endl;
		break;
	case 10:
		cout << "You entered X." << endl;
		break;
	default:
		cout << "Number out of range." << endl;
		break;
	}

	return 0;
}