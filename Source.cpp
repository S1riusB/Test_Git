#include<iostream>

using namespace std;


void main()
{
	double a, b, c = 0;
	int k;
	cout << "Enter first digit: ";
	cin >> a;
	cout << "Enter second digit: ";
	cin >> b;
	cout << "Enter |1: +|, |2: -|, |3: *|, |4: /|\n";
	cin >> k;
	switch (k)
	{
	case 1:
		c = a + b;
		cout << "Your digit is: ";
		cout << c;
		 break;
	case 2:
		c = a - b;
		cout << "Your digit is: ";
		cout << c;
		break;
	case 3: 
		c = a * b;
		cout << "Your digit is: ";
		cout << c;
		break;
	case 4:
		c = a / b;
		cout << "Your digit is: ";
		cout << c;
		break;
	default:
		c = a + b;
		cout << "Your digit is: ";
		cout << c;
		break;
	}

}