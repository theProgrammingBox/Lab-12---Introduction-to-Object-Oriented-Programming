#include "animal.h"

/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/

 /****************************************************************
  * Animal ();
  *   Constructor; Initialize class attributes
  *   Parameters: none
  *   Return: none
  ***************************************************************/

Animal::Animal()
{
	name = "";
	type = "";
	age = 0;
	value = 0;
}

/****************************************************************
 * ~Animal ();
 * Destructor; Does not perform any specific function
 * Parameters: none
 * Return: none
 ***************************************************************/

Animal::~Animal()
{
	name = "";
	type = "";
	age = 0;
	value = 0;
}

/****************************************************************
 * SetInitialValues (string aName, string aType, int aAge, float);
 *   Mutator; Initialize class attributes
 *   Parameters: none
 *   Return: none
 ***************************************************************/

void Animal::SetInitialValues(string aName, string aType, int aAge, float aValue)
{
	name = aName;
	type = aType;
	age = aAge;
	value = aValue;
}

/****************************************************************
  * ChangeAge (int aAge);
  *   Mutator; Change the age of the animal
  *   Parameters: none
  *   Return: none
  ***************************************************************/

void Animal::ChangeAge(int aAge)
{
	age = aAge;
	cout << fixed << setprecision(0);
	cout << "Changing " << name << "'s age to " << age << "...\n\n";
}

/****************************************************************
  * ChangeValue (float aValue);
  *  Mutator;  Change the value of the animal
  *   Parameters: none
  *   Return: none
  ***************************************************************/

void Animal::ChangeValue(float aValue)
{
	value = aValue;
	cout << fixed << setprecision(2);
	cout << "Changing " << name << "'s value to " << value << "...\n\n";
}

/***************
** ACCESSORS **
***************/

/****************************************************************
  * Display ();
  *   Accessor; Display the animal's information
  *   Parameters: none
  *   Return: none
  ***************************************************************/

void Animal::Display() const
{
	cout
		<< left
		<< setw(11) << type
		<< setw(15) << name
		<< right
		<< setw(3) << age
		<< setprecision(2) << fixed
		<< setw(12) << value
		<< endl;
}

/****************************************************************
  * GetName ();
  *   Accessor; Return the name of the animal
  *   Parameters: none
  *   Return: string
  ***************************************************************/

string Animal::GetName() const
{
	return name;
}

/****************************************************************
  * GetType ();
  *   Accessor; Return the type of the animal
  *   Parameters: none
  *   Return: string
  ***************************************************************/

string Animal::GetType() const
{
	return type;
}

/****************************************************************
  * GetAge ();
  *   Accessor; Return the age of the animal
  *   Parameters: none
  *   Return: int
  ***************************************************************/

int Animal::GetAge() const
{
	return age;
}

/****************************************************************
  * GetValue ();
  *   Accessor; Return the value of the animal
  *   Parameters: none
  *   Return: float
  ***************************************************************/

float Animal::GetValue() const
{
	return value;
}