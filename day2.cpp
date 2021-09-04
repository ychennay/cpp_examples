//
// Created by Yu Chen on 8/28/21.
//

#include <iostream>
#include <iomanip>
#include <cmath>

#define USE_MATH_DEFINES

using namespace std;

int main() {

    char continue_testing;
    do {

        int num_rectangles;
        std::cout << "Please enter the number of rectangles:" << std::endl;
        std::cin >> num_rectangles;

        const double width_rectangle = 1.0 / num_rectangles;
        double running_total = 0.0;

        for (int i = 0; i < num_rectangles; i++) {
            double y = sqrt(1 - pow(i * width_rectangle, 2));
            double area = y * width_rectangle;
            running_total += area;
        }

        const double area_of_circle = running_total * 4;
        const double error = area_of_circle - M_PI;

        std::cout << "The area of the circle is " << fixed
                  << setprecision(10)
                  << area_of_circle
                  << ". This has an error of "
                  << setprecision(5)
                  << error
                  << std::endl;

        std::cout << "Continue?" << endl;
        std::cin >> continue_testing;

    } while (continue_testing == 'Y');


}