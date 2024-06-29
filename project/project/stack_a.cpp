#pragma once
#include<iostream>
using namespace std;


/* PART A */
/* Stacks using Fixed Size Arrays */

class Stack_A {
private:
    int stk[1024]; // The fixed size array
    int size; // Number of elements in the stack

public: 
    // Constructor
    Stack_A();

    void push(int data);

    int pop();

    int get_element_from_top(int idx);

    int get_element_from_bottom(int idx);

    void print_stack(bool top_or_bottom);

    int add();

    int subtract();

    int multiply();

    int divide(); 

    int* get_stack(); // Get a pointer to the array

    int get_size(); // Get the size of the stack

};

// done
Stack_A::Stack_A() {
    this->size = 0 ;
}












// done
void Stack_A::push(int data) {
    if(this->size == 1024) {
        throw std::runtime_error("Stack Full") ;
    }
    this->stk[this->size] = data ;
    this->size++ ;
}













//done
int Stack_A::pop() {
    if(this->size == 0) {
        throw std::runtime_error("Empty Stack") ;
    }
    return this->stk[--this->size] ;
}









// done
int Stack_A::add() {
    if(this->size<2) {
        throw std::runtime_error("Not Enough Arguments") ;
    }
    this->stk[this->size-2] = this->stk[this->size-1] + this->stk[this->size-2] ;
    this->size-- ;
    return this->stk[this->size-1] ;
}




// done
int Stack_A::subtract() {
    if(this->size<2) {
        throw std::runtime_error("Not Enough Arguments") ;
    }
    this->stk[this->size-2] = this->stk[this->size-2] - this->stk[this->size-1] ;
    this->size-- ;
    return this->stk[this->size-1] ;
}





// done
int Stack_A::multiply() {
    if(this->size<2) {
        throw std::runtime_error("Not Enough Arguments") ;
    }
    this->stk[this->size-2] = this->stk[this->size-1] * this->stk[this->size-2] ;
    this->size-- ;
    return this->stk[this->size-1] ;
}




// done
int Stack_A::divide() {
    if(this->size<2) {
        throw std::runtime_error("Not Enough Arguments") ;
    }
    if(this->stk[this->size-1] == 0) {
        throw std::runtime_error("Divide by Zero Error") ;
    }
    this->stk[this->size-2] = this->stk[this->size-2] / this->stk[this->size-1] ;
    this->size-- ;
    return this->stk[this->size-1] ;
}







// done
int Stack_A::get_element_from_top(int idx) {
    idx = size-idx-1 ;
    if(idx<0) {
        throw std::runtime_error("Index out of range");
    }
    return this->stk[idx] ;
}




// done
int Stack_A::get_element_from_bottom(int idx) {
    if(idx >= size) {
        throw std::runtime_error("Index out of range");
    }
    return this->stk[idx] ;
}




// done
int* Stack_A::get_stack() {
    return this->stk ;
}





// done
int Stack_A::get_size() {
    return this->size ;
}









// done
void Stack_A::print_stack(bool top_or_bottom) {
    if(top_or_bottom) {
        // print from the top
        for(int i = this->size - 1 ; i >= 0 ; i--) {
            std :: cout << this->stk[i] << endl ;
        }
    } else {
        // print fron bottom
        for(int i = 0 ; i < this->size ; i++) {
            std :: cout << this->stk[i] << endl ;
        }
    }
}
