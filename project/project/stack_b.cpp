#pragma once 

/* PART B */
/* Dynamic Stacks */

class Stack_B {
private:
    int* stk; // The dynamic array
    int size; // Number of elements in the stack
    int capacity; // Capacity of the stack

public: 
    // Constructor
    Stack_B();

    // Destructor
    ~Stack_B();

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



Stack_B::Stack_B() {
    this->stk = new int[1024] ;
    this->size = 0 ;
    this->capacity = 0 ;
}



Stack_B::~Stack_B() {
    delete []this->stk ;
}


// void Stack_B::push(int data) {
//     if (this->size < this->capacity) {
//         this->stk[]
//     }
// }