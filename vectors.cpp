//
// Created by Yu Chen on 7/23/21.
//
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> lines{};

    ifstream inputFile{"../strings.txt"};
    string line{};

    while (getline(inputFile, line)){
        lines.push_back(line);
    }

    for (const auto& x: lines ){
        cout << x << '\n';
    }

}