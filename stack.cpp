#include "stack.h"

template<typename T>
stack<T>::stack(){
    size = 0;
}

template<typename T>
void stack<T>::push(T val){
    if (size >= 20){
        throw overflow_error("Called push on front stack.");
    } else {
        data[size] = val;
        size++;
    }
}

template<typename T>
void stack<T>::pop(){
    
}