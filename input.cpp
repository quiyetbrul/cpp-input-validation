#include "input.h"

char inputChar(std::string prompt)
{
  char input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1A: Invalid input. Must be a character type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else
      break;
  } while (true);
  return input;
}

char inputChar(std::string prompt, std::string listChars)
{
  char input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1A: Invalid input. Must be a character type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    bool bfound = false;
    for (unsigned c = 0; c < listChars.length(); c++)
      if (toupper(listChars[c]) == toupper(input))
      {
        bfound = true;
        break;
      }
    if (!bfound)
    {
      std::cout << "ERROR-2A: Invalid input. Must be a character from the list of '";
      for (unsigned c = 0; c < listChars.length() - 1; c++)
        std::cout << "'" << static_cast<char>(toupper(listChars[c])) << "', ";
      std::cout << "or '" << static_cast<char>(toupper(listChars.back())) << "'.\n";
    }
    else
      break;
  } while (true);
  return input;
}

char inputChar(std::string prompt, char yes, char no)
{
  char input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1A: Invalid input. Must be a character type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (tolower(input) != tolower(yes) && tolower(input) != tolower(no))
      std::cout << "ERROR-2A: Invalid input. Must be a '" << static_cast<char>(toupper(yes)) << "' or '" << static_cast<char>(toupper(no)) << "' character.\n";
    else
      break;
  } while (true);
  return input;
}

char inputChar(std::string prompt, bool alphaOrDigit)
{
  char input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1A: Invalid input. Must be a character type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (alphaOrDigit && !isalpha(input))
      std::cout << "ERROR-2A: Invalid input. Must be an alphabet character.\n";
    else if (!alphaOrDigit && !isdigit(input))
      std::cout << "ERROR-2A: Invalid input. Must be a digit character.\n";
    else
      break;
  } while (true);
  return input;
}

int inputInteger(std::string prompt)
{
  int input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1A: Invalid input. Must be an integer type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else
      break;
  } while (true);
  return input;
}

int inputInteger(std::string prompt, bool posNeg)
{
  int input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-2A: Invalid input. Must be an integer type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (posNeg && input < 0)
      std::cout << "ERROR-2A: Invalid input. Must be a positive number.\n";
    else if (!posNeg && input >= 0)
      std::cout << "ERROR-2A: Invalid input. Must be a negative number.\n";
    else
      break;
  } while (true);
  return input;
}

int inputInteger(std::string prompt, int startRange, int endRange)
{

  int input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-3A: Invalid input. Must be an integer type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (!(input >= std::min(startRange, endRange) && input <= std::max(startRange, endRange)))
      std::cout << "ERROR-3A: Invalid input. Must be from " << startRange << "..." << endRange << ".\n";
    else
      break;
  } while (true);
  return input;
}

double inputDouble(std::string prompt)
{
  double input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-1B: Invalid input. Must be a double type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else
      break;
  } while (true);
  return input;
}

double inputDouble(std::string prompt, bool posNeg)
{
  double input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-2B: Invalid input. Must be a double type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (posNeg && input < 0.0)
      std::cout << "ERROR-2B: Invalid input. Must be a positive number.\n";
    else if (!posNeg && input >= 0.0)
      std::cout << "ERROR-2B: Invalid input. Must be a negative number.\n";
    else
      break;
  } while (true);
  return input;
}

double inputDouble(std::string prompt, double startRange, double endRange)
{
  double input;
  do
  {
    std::cout << prompt;
    if (!(std::cin >> input))
    {
      std::cout << "ERROR-3A: Invalid input. Must be a double type.\n";
      std::cin.clear();
      std::cin.ignore(999, '\n');
    }
    else if (!(input >= std::min(startRange, endRange) && input <= std::max(startRange, endRange)))
      std::cout << "ERROR-3A: Invalid input. Must be from " << startRange << ".." << endRange << ".\n";
    else
      break;
  } while (true);
  return input;
}
