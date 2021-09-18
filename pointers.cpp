//
// Created by Yu Chen on 9/18/21.
//

#include <iostream>
#include <iomanip>

/**
 * Write a program to reverse a string
 * Input is a string from the user. Your task is to reverse the string in the same variable.
 * That is, you cannot define a new array/string variable and use that. There should just be one string on which you do your operations.
 */

#include "pointers.h"

using namespace std;

int main() {
    string inputString;
    std::cout << "Please input a string:" << std::endl;
    getline(cin, inputString);
    if (inputString.length() > 0) {
        int charSize = inputString.length();
        char *charPointer = &inputString[0];

        int position = charSize - 1;
        while (position >= 0) {
            cout << *(charPointer + position);
            position -= 1;
        }
    }
}