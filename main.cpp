/*******************************************************************************
 * AUTHOR		: Zac Campos
 * STUDENT ID	: 1058476
 * ASSIGNMENT #6: Nested If-Then-Else Statements
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/26/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*******************************************************************************
 * NESTED IF-THEN-ELSE STATEMENTS
 * -----------------------------------------------------------------------------
 * This program will output the largest of 3 values.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<Three values taking in from the user.>
 *
 * OUTPUT:
 * 	<This program will output the largest of the thre values.>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  ASSIGN_NUM	= 6;
	const char ASSIGN_NAME[]= "Nested If-Then-Else Statements";

	const int C_STRING_SIZE = 10;
	const char FIRST_VAL[]	= "1st value";
	const char SECOND_VAL[]	= "2nd value";
	const char THIRD_VAL[]	= "3rd value";

	//INPUT & CALCULATION VARIABLES
	float firstFloat 	= 0;
	float secondFloat 	= 0;
	float thirdFloat 	= 0;
	char highestValueString[C_STRING_SIZE];
	float highestValue;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  ASSIGNMENT #" << setw(9) << ASSIGN_NUM	<< ": "	<< ASSIGN_NAME;
	cout << endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT - describe input here
	 **************************************************************************/
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
	/***************************************************************************
	 * PROCESSING - describe processing here
	 **************************************************************************/
	if (firstFloat > secondFloat)
	{
		if (firstFloat > thirdFloat)
		{
			highestValue = firstFloat;
			strncpy(highestValueString, FIRST_VAL, C_STRING_SIZE);
		}
		else
		{
			highestValue = thirdFloat;
			strncpy(highestValueString, THIRD_VAL, C_STRING_SIZE);
		}
	}
	else
	{
		if (secondFloat > thirdFloat)
		{
			highestValue = secondFloat;
			strncpy(highestValueString, SECOND_VAL, C_STRING_SIZE);
		}
		else
		{
			highestValue = thirdFloat;
			strncpy(highestValueString, THIRD_VAL, C_STRING_SIZE);
		}
	}

	// OUTPUT
	cout << fixed << setprecision(2);
	cout << "The largest value is the " << highestValueString << ": "
		 << highestValue;

	return 0;
}





