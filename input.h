#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

#include <iostream>
#include <algorithm>
#include <string>

// inputChar
// Precondition: prompt is a string
// Postcondition: return an input char
char inputChar(std::string prompt);

// inputChar
// Precondition: prompt is a string, listChars is a list of characters user can input
// Postcondition: return an input char
char inputChar(std::string prompt, std::string listChars);

// inputChar
// Precondition: prompt is a string, y is a char, n is a char
// Postcondition: return an input char of y or n
char inputChar(std::string prompt, char yes, char no);

// inputChar
// Precondition: prompt is a string, alphaOrDigit is a bool
// Postcondition: return an input char
char inputChar(std::string prompt, bool alphaOrDigit);

// inputInteger
// Precondition: prompt is a string
// Postcondition: return an input integer
int inputInteger(std::string prompt);

// inputInteger
// Precondition: prompt is a string, posNeg is a bool
// Postcondition: return an integer where posNeg is positive (true) or negative (false)
int inputInteger(std::string prompt, bool posNeg);

// inputInteger
// Precondition: prompt is a string, startRange and endRange are integers
// Postcondition: return an input integer within range
int inputInteger(std::string prompt, int startRange, int endRange);

// inputDouble
// Precondition: prompt is a string
// Postcondition: return an input double
double inputDouble(std::string prompt);

// inputDouble
// Precondition: prompt is a string, posNeg is a bool
// Postcondition: return an input double where posNeg is positive (true) or negative (false)
double inputDouble(std::string prompt, bool posNeg);

// inputDouble
// Precondition: prompt is a string, startRange and endRange are doubles
// Postcondition: return an input double within range
double inputDouble(std::string prompt, double startRange, double endRange);

#endif // INPUTVALIDATION_H
