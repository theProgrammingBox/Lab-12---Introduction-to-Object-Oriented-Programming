#include "header.h"

/**********************************************************
* ErrorCheckFloatInput
* --------------------------------------------------------
* This function will return if the input is a valid
* float.
*
* returns true if the input is not a valid float
**********************************************************/

bool ErrorCheckFloatInput(float& input, float min, float max)
{
	cout << fixed << setprecision(0);
	if (!(cin >> input))
	{
		cout << "\n**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else if (input < min || input > max)
	{
		cout << "\n**** The number " << setw(5) << input << " is an invalid entry  ****\n";
		cout << "**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else
	{
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
}

/**********************************************************
* ErrorCheckCharInput
* --------------------------------------------------------
* This function will return if the input is a valid
* char.
*
* returns true if the input is not a valid char
**********************************************************/

bool ErrorCheckCharInput(char& input, char option1, char option2)
{
	cin.get(input);
	if (toupper(input) != option1 && toupper(input) != option2)
	{
		cout << "\n**** " << input << " is an invalid entry ****\n";
		cout << "**** Please input " << option1 << " or " << option2 << "   ****\n\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else
	{
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
}