#include "logininterface.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

LoginInterface::LoginInterface() {}

string LoginInterface::hashing(string word){
    hash<string> hashFunction;
    size_t temp = hashFunction(word);
    string returnable = to_string(temp);
    return returnable;
}


void LoginInterface::loginAttempt(string username, string password){
    /*
    int loginAttempt = 0;
    while (loginAttempt < 5){
        if (hashedUsername || hashedPassword){
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
    }

    cout << "Thank you for logging in.\n";
    */
}

