//
//  Circle.h
//  9.2-Classes
//
//  Created by Eliot Reyes on 10/3/21.
//

#ifndef Circle_h
#define Circle_h

const double PI = 3.14;

class Circle {
public:
    
    Circle () {
        radius = 1;
    };
    
    Circle (double newRadius) {
        radius = newRadius;
    };
    
    double getArea() {
        return radius * radius * PI;
    };
    
    double getPerimeter() {
        return 2 * radius * PI;
    };
    
    void setRadius(double newRadius) {
        radius = newRadius;
    };
    
private:
    double radius;
};

#endif /* Circle_h */
