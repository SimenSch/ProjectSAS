#ifndef REGEX_H
#define REGEX_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;
//written by simen schaufel S305491
class regularExpression{
    public:
    regularExpression();
    bool regexAddress(string stringInput);
    bool regexName(string stringInput);
    bool regexDate(string stringInput);
    bool regexEmail(string stringInput);
    bool zipcheck(string stringInput);
};
#endif // REGEX_H
