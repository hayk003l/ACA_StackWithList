#ifndef __STACK__
#define __STACK__
#include <iostream>
#include "List.hpp"

template <typename T, class Container = myStl::List<T>>
class Stack {
private:
    Container _c;
public:
    Stack() : Stack(Container()) {}
    Stack(const Container& cont) : _c(cont) {}
    Stack(Container&& cont) {
        _c = std::move(cont);
    }
    Stack(const Stack& other) : _c(other._c) {}
    Stack operator=(const Stack& other) {
        _c = other._c;
    }
    Stack(Stack&& other) {
        _c = std::move(other._c);
    }
    ~Stack() {}

public:
    T& top() {
        return _c.back();
    }

    bool empty() {
        return _c.empty();
    }

    // std::size_t size() {
    //     return _c.size();
    // }

    void push(const T& elem) {
        _c.push_back(elem);
    }

    void pop() {
        _c.pop_back();
    }
};

#endif // __STACK__