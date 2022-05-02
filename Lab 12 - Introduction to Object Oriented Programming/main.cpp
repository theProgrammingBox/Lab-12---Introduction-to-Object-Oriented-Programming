#include "animal.h"

/**********************************************************
* Introduction to Object Oriented Programming
* _________________________________________________________
* This program will first prompt the user to either
* initialize the animals, or exit. It will then prompt
* the user to either exit, reinitialize the animals,
* change the age of an animal, change the value of an
* animal, or display the animals.
* _________________________________________________________
* INPUTS:
*  input:	User option input
* animalInput:	User animal input
* charInput:	User char input
*
* OUTPUTS:
* fluffy:	The animal object for Fluffy
* maa:		The animal object for Maa
* babe:		The animal object for Babe
***********************************************************/

int main()
{
	float input;			// INPUT - User option input
	float animalInput;		// INPUT - User animal option input
	char charInput;			// INPUT - User character input
	bool running;			// CALC  - Tells if program is running

	Animal fluffy;
	Animal maa;
	Animal babe;

	running = true;
	do
	{
		cout << "1 - Initialize Animals\n";
		cout << "0 - Exit\n";
		cout << "Enter selection: ";
	} while (ErrorCheckFloatInput(input, 0, 1));

	switch ((int)input)
	{
	case EXIT:
		running = false;
		break;
	case INITIALIZE:
		cout << "Initializing Fluffy, Maa, & Babe...\n\n";
		fluffy.SetInitialValues("Fluffy", "Sheep", 1, (float)15000.00);
		maa.SetInitialValues("Maa", "Sheep", 3, (float)16520.35);
		babe.SetInitialValues("Babe", "Pig", 2, (float)10240.67);
		break;
	default:
		cout << "ERROR: Invalid input!\n\n";
		break;
	}

	while (running)
	{
		do
		{
			cout << "1 - Initialize Animals\n";
			cout << "2 - Change Age\n";
			cout << "3 - Change Value\n";
			cout << "4 - Display\n";
			cout << "0 - Exit\n";
			cout << "Enter selection: ";
		} while (ErrorCheckFloatInput(input, 0, 4));

		switch ((int)input)
		{
		case EXIT:
			running = false;
			break;
		case INITIALIZE:
			do
			{
				cout << "Are you sure you want to reinitialize (Y/N)? ";
			} while (ErrorCheckCharInput(charInput, 'Y', 'N'));

			if (toupper(charInput) == 'Y')
			{
				cout << "Initializing Fluffy, Maa, & Babe...\n\n";
				fluffy.SetInitialValues("Fluffy", "Sheep", 1, (float)15000.00);
				maa.SetInitialValues("Maa", "Sheep", 3, (float)16520.35);
				babe.SetInitialValues("Babe", "Pig", 2, (float)10240.67);
			}
			else
			{
				cout << "Animals have not been re-initialized!\n\n";
			}
			break;
		case CHANGE_AGE:
			do
			{
				cout << "CHANGE AGE:\n";
				cout << "1 - Fluffy\n";
				cout << "2 - Maa\n";
				cout << "3 - Babe\n";
				cout << "Select the animal you'd like to change: ";
			} while (ErrorCheckFloatInput(animalInput, 1, 3));

			do
			{
				cout << "NEW AGE: ";
			} while (ErrorCheckFloatInput(input, 0, 10));

			switch ((int)animalInput)
			{
			case FLUFFY:
				fluffy.ChangeAge(input);
				break;
			case MAA:
				maa.ChangeAge(input);
				break;
			case BABE:
				babe.ChangeAge(input);
				break;
			default:
				cout << "ERROR: Invalid input!\n\n";
				break;
			}
			break;
		case CHANGE_VALUE:
			do
			{
				cout << "CHANGE VALUE:\n";
				cout << "1 - Fluffy\n";
				cout << "2 - Maa\n";
				cout << "3 - Babe\n";
				cout << "Select the animal you'd like to change: ";
			} while (ErrorCheckFloatInput(animalInput, 1, 3));

			do
			{
				cout << "NEW VALUE: ";
			} while (ErrorCheckFloatInput(input, 0, 400000));

			switch ((int)animalInput)
			{
			case FLUFFY:
				fluffy.ChangeValue(input);
				break;
			case MAA:
				maa.ChangeValue(input);
				break;
			case BABE:
				babe.ChangeValue(input);
				break;
			default:
				cout << "ERROR: Invalid input!\n\n";
				break;
			}
			break;
		case DISPLAY:
			cout << "ANIMAL     NAME           AGE    VALUE\n";
			cout << "---------- -------------- --- -----------\n";
			fluffy.Display();
			maa.Display();
			babe.Display();
			cout << "\n\n";
			break;
		default:
			cout << "ERROR: Invalid input!\n\n";
			break;
		}
	}

	return 0;
}