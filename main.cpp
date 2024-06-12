#include <iostream>

#include "List.hpp"
#include "Stack.hpp"

int main() {

    myStl::List<int> obj;
    obj.push_front(4);
    obj.push_back(3);
    obj.push_front(2);
    obj.push_back(1);
    obj.insert(2,2);

    Stack<int> obj2;
    obj2.push(10);
    obj2.push(3);
    obj2.push(1);
    obj2.push(6);
    std::cout << obj2.top() << std::endl;
    obj2.pop();
    std::cout << obj2.top() << std::endl;

    return 0;
}