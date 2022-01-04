#include "InputValidation.h"

void cinIgnore() {
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
} // -----------------------------------------------------------------------------

std::string invalidInput(std::string where, std::string what) {
  return "\n***ERROR IN " + where + "***\nInvalid input. Must be " + what +
         ".\n";
} // -----------------------------------------------------------------------------

char inputChar(std::string prompt, std::string where) {
  char input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      input = tolower(input);
      if (std::cin.fail()) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(where, "a character type."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

char inputChar(std::string prompt, std::string listChars, std::string where) {
  char input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      input = tolower(input);
      if (!(std::cin.fail()) || listChars.find(input) == std::string::npos) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, "a character type and one of the following: " + listChars));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

char inputChar(std::string prompt, char yes, char no, std::string where) {
  char input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      input = tolower(input);
      if (std::cin.fail() || (input != yes && input != no)) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, "a character type and one of the following: " +
                       std::string(1, yes) + " or " + std::string(1, no)));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

char inputChar(std::string prompt, bool alphaOrDigit, std::string where) {
  char input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      input = tolower(input);
      if (std::cin.fail() || (alphaOrDigit && !isalpha(input)) ||
          ((!alphaOrDigit && !isdigit(input)))) {
        cinIgnore();
        throw std::invalid_argument(
            invalidInput(where, &"a character type and "[alphaOrDigit]
                                    ? "an alpha-numeric character."
                                    : "a digit."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

int inputInteger(std::string prompt, std::string where) {
  int input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail()) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(where, "an integer type."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

int inputInteger(std::string prompt, bool posNeg, std::string where) {
  int input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail() || (posNeg && input < 0) || (!posNeg && input > 0)) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, &"an integer type and "[posNeg] ? "a positive number."
                                                   : "a negative number."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

int inputInteger(std::string prompt, int startRange, int endRange,
                 std::string where) {
  int input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail() || input < startRange || input > endRange) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, "an integer type and between " + std::to_string(startRange) +
                       " and " + std::to_string(endRange)));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

double inputDouble(std::string prompt, std::string where) {
  double input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail()) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(where, "a double type."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

double inputDouble(std::string prompt, bool posNeg, std::string where) {
  double input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail() || (posNeg && input < 0) || (!posNeg && input > 0)) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, &"a double type and "[posNeg] ? "a positive number."
                                                 : "a negative number."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

double inputDouble(std::string prompt, double startRange, double endRange,
                   std::string where) {
  double input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail() || input < startRange || input > endRange) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(
            where, "a double type and between " + std::to_string(startRange) +
                       " and " + std::to_string(endRange)));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------

std::string inputString(std::string prompt, std::string where) {
  std::string input;
  do {
    std::cout << prompt;
    try {
      std::cin >> input;
      if (std::cin.fail()) {
        cinIgnore();
        throw std::invalid_argument(invalidInput(where, "a string type."));
      } else
        break;
    } catch (std::invalid_argument &e) {
      std::cout << e.what() << std::endl;
    }
  } while (true);
  return input;
} // -----------------------------------------------------------------------------
