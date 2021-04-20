#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include <array>

using namespace std;

template<typename T>
class stack {

    public:
        stack(); //contructs new stack
        void push(T val); // inserts a new element (val) of type T (T could be integer or string) into the data. If the data array is full, this function should throw an overflow_error exception with error message "Called push on full stack.".
        void pop(); // removes the last element from data. If the data array is empty, this function should throw an outofrange exception with error message "Called pop on empty stack.".
        T top(); // returns the top element of stack (last inserted element). If stack is empty, this function should throw an underflow_error exception with error message "Called top on empty stack.".
        bool empty(){if(size == 0) {return true;} return false;}

    private:
        const int MAX_SIZE = 20;
        T data(MAX_SIZE);
        unsigned size; // current number of items in stack (is always one more than the top index)


};





#endif