//
// Created by Yu Chen on 8/15/21.
//


/*
 * Write a program that takes in full names of 3 students
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Please enter in the name of the student:" << endl;
    string userName, userAge;
    getline(cin, userName);
    cout << "Please enter in the age of the student:" << endl;
    getline(cin, userAge);
    cout << userName
         << setw(10)
         << userAge << setw(10)
         << userName.substr(2, userName.length() - 3);
}