#pragma once
#include "header.h"

/****************************************************************
 * Animal Class
 *   This class represents an animal object. It manages 4 attributes,
 *   name, type, age, and value.
 ***************************************************************/

class Animal
{
public:
	/*****************************
	** CONSTRUCTOR & DESTRUCTOR **
	*****************************/

	Animal();	// constructor 
	~Animal();	// destructor

	void SetInitialValues(string aName, string aType, int aAge, float aValue);
	void ChangeAge(int aAge);
	void ChangeValue(float aValue);

	/**************
	** ACCESSORS **
	**************/

	void Display() const;
	string GetName() const;
	string GetType() const;
	int GetAge() const;
	float GetValue() const;

private:
	string   name;	// IN/OUT - the sheep's name 
	string   type;	// IN/OUT - the sheep's type
	int       age;	// IN/OUT - the sheep's age
	float    value;	// IN/OUT - the sheep's value
};