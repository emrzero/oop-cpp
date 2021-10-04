//
//  Counter.h
//  9.2-Classes
//
//  Created by Eliot Reyes on 10/3/21.
//

#ifndef COUNTER_H
#define COUNTER_H
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

#endif
