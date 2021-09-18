//
// Created by Yu Chen on 9/18/21.
//

#ifndef STANDARDLIBRARY_CANNONBALL_H
#define STANDARDLIBRARY_CANNONBALL_H

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

class CannonBall {
public:
    CannonBall(float x, float y);

    void move(double seconds);


    void shoot(float angle, float velocity);

    CannonBall();

private:
    float x, y; // positions
    float angle;
    float x_velocity, y_velocity;
    const float G = 9.82;
    void calculateVelocities(float angle, float velocity);
};


#endif //STANDARDLIBRARY_CANNONBALL_H
