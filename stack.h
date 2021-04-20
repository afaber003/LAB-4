#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 20
#include <stdexcept>
#include <array>
#include <string>
#include <iostream>
#include <cstdlib>


using namespace std;

template<typename T>
class stack {

   /* public:
        stack(); //contructs new stack
        void push(T val); // inserts a new element (val) of type T (T could be integer or string) into the data. If the data array is full, this function should throw an overflow_error exception with error message "Called push on full stack.".
        void pop(); // removes the last element from data. If the data array is empty, this function should throw an outofrange exception with error message "Called pop on empty stack.".
        T top(); // returns the top element of stack (last inserted element). If stack is empty, this function should throw an underflow_error exception with error message "Called top on empty stack.".
        bool empty(){if(size == 0) {return true;} return false;}

    private:
        //const int MAX_SIZE = 20;
        unsigned size; // current number of items in stack (is always one more than the top index)

*/
public:
  stack()
  {
      size = 0;
  }

  bool empty(){if(size == 0) {return true;} return false;}
  
  //template<typename T>
  void push(T val){
    if (size >= 20){
      throw overflow_error("Called push on full stack.");
    } 
    else 
    {
      data[++size] = val;
    }
  }

  void pop()
  {
    if (empty()){
      throw out_of_range("Called pop on empty stack.");
    }

    --size;
  }

  //template<typename T>
  T top()
  {
    if (empty()){
      throw underflow_error("Called top on empty stack.");
    }

    return data[size];

  }

private:
  //const int MAX_SIZE = 20;
  T data[MAX_SIZE];
  unsigned size; // current number of items in stack (is always one more than the top index)

};

#endif