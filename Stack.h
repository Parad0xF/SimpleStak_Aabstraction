//
// Created by Parad0xf on 5/26/2022.
//
#ifndef SIMPLESTAK_AABSTRACTION_STACK_H
#define SIMPLESTAK_AABSTRACTION_STACK_H

template<class  T>
class Stack {
private:
    T *stackPtr;
    T topSub;
    int maxLen;

public:
     Stack();
     ~Stack();

     void pop() ; //get first element from stack
     void push(T item) ; // add element to the stack
     T top() ; // show the top of the stack
     T empty() ; // check the status of the stack
};
template<class  T>
Stack<T>::Stack(){

    stackPtr = new T [100];
    maxLen = 99;
    topSub = -1;

};

template<class  T>
Stack<T>::~Stack() {

    delete [] stackPtr;

}


template<class  T>
void Stack<T>::pop(){

    if(topSub == maxLen)
        std::cerr << "The stack is empty"<<std::endl;
    else topSub --;

}; //get first element from stack

template<class  T>
void Stack<T>::push(T item){

    if(topSub == maxLen)
        std::cerr << "The stack is full"<<std::endl;
    else stackPtr[++topSub] = item;

}; // add element to the stack

template<class  T>
T Stack<T>::top(){

    if (empty())
        std::cerr << "The stack is full"<<std::endl;
    return stackPtr[topSub];
}; // show the top of the stack

template<class T>
T Stack<T>::empty(){

    return (topSub == -1);
}
#endif
