//
// Created by Yu Chen on 8/28/21.
//

#include "iostream"
#include "iomanip"

int isInsideCircle(double x, double y) {
    if ((x * x) + (y * y) <= 1) {
        return 1;
    }
    return 0;
}

int main() {

    int numAttempts;
    std::cout << "Please select the number of attempts:" << std::endl;
    std::cin >> numAttempts;

    srand(time(NULL));
    int insideCircle = 0;
    for (int i = 0; i < numAttempts; i++) {
        double x = double(rand()) / RAND_MAX;
        double y = double(rand()) / RAND_MAX;
        insideCircle += isInsideCircle(x, y);
    }
    double estimatedArea = insideCircle * 4.0 / numAttempts;
    double error = M_PI - estimatedArea;
    std::cout << "Estimated area is " << std::setprecision(5) << estimatedArea << std::endl;
    std::cout << "Error is " << error;

}