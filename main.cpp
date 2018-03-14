#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float firstFloat 	= 0;
	float secondFloat 	= 0;
	float thirdFloat 	= 0;

	//Input
	cout << "Value 1: ";
	cin  >> firstFloat;
	cin.ignore(10000, '\n');

	cout << "Value 2: ";
	cin  >> secondFloat;
	cin.ignore(10000, '\n');

	cout << "Value 3: ";
	cin  >> thirdFloat;
	cin.ignore(10000, '\n');
	cout << endl;

	//Processing and Output
	if (firstFloat > secondFloat)
	{
		if (firstFloat > thirdFloat)
		{
			cout << fixed << setprecision(2);
			cout << "The largest value is the 1st value: " << firstFloat;
		}
		else
		{
			cout << fixed << setprecision(2);
			cout << "The largest value is the 3rd value: " << thirdFloat;
		}
	}
	else
	{
		if (secondFloat > thirdFloat)
		{
			cout << fixed << setprecision(2);
			cout << "The largest value is the 2nd value: " << secondFloat;
		}
		else
		{
			cout << fixed << setprecision(2);
			cout << "The largest value is the 3rd value: " << thirdFloat;
		}
	}


	return 0;
}

