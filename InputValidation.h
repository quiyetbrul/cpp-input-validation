#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

#include <iostream>

// cinIgnore
// Precondition:
// Postcondition: clears the cin buffer
void cinIgnore();

// invalidInput
// Precondition: where is a string, what is a string
// Postcondition: returns a string
std::string invalidInput(std::string where, std::string what);

// inputChar
// Precondition: prompt is a string
// Postcondition: return an input char
char inputChar(std::string prompt, std::string where);

// inputChar
// Precondition: prompt is a string, listChars is a list of characters user can
// input Postcondition: return an input char
char inputChar(std::string prompt, std::string listChars, std::string where);

// inputChar
// Precondition: prompt is a string, y is a char, n is a char
// Postcondition: return an input char of y or n
char inputChar(std::string prompt, char yes, char no, std::string where);

// inputChar
// Precondition: prompt is a string, alphaOrDigit is a bool
// Postcondition: return an input char
char inputChar(std::string prompt, bool alphaOrDigit, std::string where);

// inputInteger
// Precondition: prompt is a string
// Postcondition: return an input integer
int inputInteger(std::string prompt, std::string where);

// inputInteger
// Precondition: prompt is a string, posNeg is a bool
// Postcondition: return an integer where posNeg is positive (true) or negative
// (false)
int inputInteger(std::string prompt, bool posNeg, std::string where);

// inputInteger
// Precondition: prompt is a string, startRange and endRange are integers
// Postcondition: return an input integer within range
int inputInteger(std::string prompt, int startRange, int endRange,
                 std::string where);

// inputDouble
// Precondition: prompt is a string
// Postcondition: return an input double
double inputDouble(std::string prompt, std::string where);

// inputDouble
// Precondition: prompt is a string, posNeg is a bool
// Postcondition: return an input double where posNeg is positive (true) or
// negative (false)
double inputDouble(std::string prompt, bool posNeg, std::string where);

// inputDouble
// Precondition: prompt is a string, startRange and endRange are doubles
// Postcondition: return an input double within range
double inputDouble(std::string prompt, double startRange, double endRange,
                   std::string where);

// inputString
// Precondition: prompt is a string
// Postcondition: return an input string
std::string inputString(std::string prompt, std::string where);

#endif // INPUTVALIDATION_H
