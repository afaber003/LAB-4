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
  
  private:
    T data[MAX_SIZE];
    unsigned size; // current number of items in stack (is always one more than the top index)


  public:

    //Constuctor
    stack(){
      size = 0;
    }

    //empty() function
    bool empty(){
      if (size == 0){
        return true;
      }
      return false;
    }
    
    // Push Function
    void push(T val){
      if (size >= 20){
        throw overflow_error("Called push on full stack.");
      } 
      else {
        data[size] = val;
        size++;
      }
    }

    //pop() function
    void pop(){
      if (empty()){
        throw out_of_range("Called pop on empty stack.");
      }
      --size;
    }

    //top() function
    T top(){
      if (empty()){
        throw underflow_error("Called top on empty stack.");
      }
      return data[size-1];
    }
};

#endif