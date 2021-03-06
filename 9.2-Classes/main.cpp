//
//  main.cpp
//  9.2-Classes
//
//  Created by Eliot Reyes on 9/27/21.
//

#include <iostream>
#include "Circle.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Circle myCircle;
    Circle anotherCircle(7.7);
    cout << myCircle.getArea()<< endl;
    cout << anotherCircle.getArea()<< endl;
    
    cout << sizeof(myCircle)<<endl;
    return 0;
}


class Counter {
public:
    Counter(int initCounter, int initLimit) {
        counter = initCounter;
        limit = initLimit;
    };
    
    void increment() {
        if (counter < limit) {
            counter++;
        }
    };
    
    void decrement() {
        if (counter > 0) {
            counter--;
        }
    };
    
    int getValue() {
        return counter;
    };
private:
    int counter;
    int limit;
    
};
