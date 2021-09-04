//
// Created by Yu Chen on 9/4/21.
//

#include "limits"
#include "iostream"
#include "vector"

using namespace std;

void askForInput(string dataType, int &pointer) {
    std::cout << dataType << ":" << std::endl;
    cin >> pointer;
    while (!(cin.good())) {
        cout << "Invalid " << dataType << endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << dataType << ":" << std::endl;
        cin >> pointer;
    }
}

vector<vector<float>> populateMatrix() {
    vector<vector<float>> answer;
    int rows, cols;

    askForInput("Rows", rows);
    askForInput("Cols", cols);

    answer.resize(rows, vector<float>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            float value;
            std::cout << "[" << i << "][" << j << "]:" << std::endl;
            std::cin >> value;

            answer[i][j] = value;
        }
    }
    return answer;
}

vector<vector<float>> matMul(vector<vector<float>> first,
                             vector<vector<float>> second) {
    int firstRows = first.size();
    int secondRows = second.size();

    int firstCols = first[0].size();
    int secondCols = second[0].size();

    if (firstCols != secondRows) {
        throw "Mismatched matrix shapes.";
    }

    vector<vector<float>> answer;
    answer.resize(firstRows, vector<float>(secondCols));

    for (int i = 0; i < firstRows; i++) {
        for (int k = 0; k < secondCols; k++) {
            for (int j = 0; j < firstCols; j++) {
                answer[i][k] += first[i][j] * second[j][k];
            }
        }
    }
    return answer;
}

int main() {

    vector<vector<float>> first = populateMatrix();
    vector<vector<float>> second = populateMatrix();

    try {
        vector<vector<float>> answer = matMul(first, second);
        for (int i = 0; i < answer.size(); i++) {
            for (int j = 0; j < answer[0].size(); j++) {
                cout << answer[i][j] << "\t";
            }
            cout << endl;
        }
    } catch (string c) {
        return -1;
    }
}