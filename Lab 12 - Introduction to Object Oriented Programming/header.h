#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum Option
{
	EXIT, INITIALIZE, CHANGE_AGE, CHANGE_VALUE, DISPLAY
};

enum Animals
{
	NONE, FLUFFY, MAA, BABE
};

/**********************************************************
* ErrorCheckFloatInput
* --------------------------------------------------------
* This function will return if the input is a valid
* float.
*
* returns true if the input is not a valid float
**********************************************************/

bool ErrorCheckFloatInput(float& input, float min, float max);

/**********************************************************
* ErrorCheckCharInput
* --------------------------------------------------------
* This function will return if the input is a valid
* char.
*
* returns true if the input is not a valid char
**********************************************************/

bool ErrorCheckCharInput(char& input, char option1, char option2);