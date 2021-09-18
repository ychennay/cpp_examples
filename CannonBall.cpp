//
// Created by Yu Chen on 9/18/21.
//

/**
 * A ball has
•	An x- and a y-position.
•	An x- and a y-velocity.

Supply the following member functions:
•	A constructor with the appropriate variables initialized. Assume the cannonball starts at the origin (0,0).
•	A member function move(double sec) that moves the ball to the next position for a given time increment (sec)
o	First compute the distance traveled in seconds, using the current velocities, then update the x- and y-positions.
o	Then update the y-velocity by considering the gravitational acceleration of –9.81 m/sec2; the x-velocity is unchanged.
o	Move should not print anything to the console.
•	A member function shoot whose parameters are the angle a and initial velocity v
o	Compute the x-velocity as v*cos(a) and the y-velocity as v*sin(a).
o	Then keep calling move with a time interval of 0.1 seconds until the y-position is ≤ 0.
o	Display the (x, y) position after every move.
 */

#include "iostream"
#include "cmath"
#include "CannonBall.h"

using namespace std;

void CannonBall::calculateVelocities(float angle, float velocity) {
    this->x_velocity = velocity * cos(angle * M_PI / 180);
    this->y_velocity = velocity * sin(angle * M_PI / 180);
}

CannonBall::CannonBall(float angle, float velocity) {
    this->angle = angle;
    calculateVelocities(angle, velocity);
    cout << "Initialized CannonBall" << endl;

}


CannonBall::CannonBall() {
    x = y = angle = x_velocity = y_velocity = 0.0;
}

void CannonBall::move(double seconds) {
    float horizontalDistanceTraveled = this->x_velocity * seconds;
    x = x + horizontalDistanceTraveled;

    // update with G 9.8/m^2
    float verticalDistanceTraveled = y_velocity * seconds;
    y = y + verticalDistanceTraveled;
    float changeInVerticalVelocity = G * seconds;
    y_velocity = y_velocity - changeInVerticalVelocity;
    cout << "After moving " << seconds << " seconds, the ball is at (" << x << ", " << y << ")." << endl;
}

void CannonBall::shoot(float angle, float velocity) {
    this->angle = angle;
    calculateVelocities(angle, velocity);

    float timeCounter = 0;
    do {
        move(0.01);
        timeCounter += 0.01;
    } while (y >= 0);
    cout << "The ball traveled for " << timeCounter << " seconds." << endl;
}