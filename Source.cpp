#include<iostream>

using namespace std;


void main()
{
	double a, b, c = 0;
	int k;
	
	cin >> a;
	
	cin >> b;
	
	cin >> k;
	switch (k)
	{
	case 1:
		c = a + b;
		break;
	case 2:
		c = a - b;
		break;
	case 3: 
		c = a * b;
		break;
	case 4:
		c = a / b;
		break;
	default:
		c = a + b;
		break;
	}

}