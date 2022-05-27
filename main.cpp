#include <iostream>
#include "Stack.h"

void add_to_stack(Stack<int> *obj ,int total_items){

    for (int index = 0; index < total_items; index++){
        obj ->push(index*2);
        std::cout << obj -> top() << " ";
    }

}

int main() {
    Stack<int> obj;
    Stack<int> *objPtr;

    objPtr = &obj;


    std::cout << "If it 0 is empty and otherwise is not: "<<objPtr->empty() <<std::endl;

    add_to_stack(objPtr, 23);

}
