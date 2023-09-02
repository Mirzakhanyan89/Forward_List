# Forward_List

This repository contains a C++ implementation of a singly linked list class called `Forward_List`. This class provides basic operations for managing a linked list, including insertion, deletion, traversal, and more.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Public Member Functions](#public-member-functions)
- [Private Member](#private-member)
- [Contributing](#contributing)

## Introduction

The `Forward_List` class is designed to offer a flexible and easy-to-use linked list data structure. It supports the following operations:

- `push_back`: Adds an element to the end of the list.
- `pop_back`: Removes the last element from the list.
- `push_front`: Adds an element to the front of the list.
- `pop_front`: Removes the first element from the list.
- `insert`: Inserts an element at a specified position.
- `erase`: Removes an element at a specified position.
- `front`: Returns a reference to the first element.
- `empty`: Checks if the list is empty.
- `clear`: Clears all elements from the list.
- `size`: Returns the number of elements in the list.
- `print`: Prints the elements of the list.
- `swap`: Swaps the contents of two `Forward_List` instances.
- `reverse`: Reverses the order of elements in the list.
- `sort`: Sorts the elements of the list in ascending order.

## Usage

To use the `Forward_List` class, include the `Forward_List.h` header file in your C++ project. You can then create instances of the class and use its member functions to manipulate linked lists.

```cpp
#include "Forward_List.h"

int main() {
    Forward_List<int> myList;
    
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);
    
    myList.print(); // Output: 5 10 20
    
    myList.pop_back();
    
    myList.print(); // Output: 5 10
    
    return 0;
}
```

## Public Member Functions

- `const T& front() const`: Returns a reference to the first element.
- `const bool empty() const`: Checks if the list is empty.
- `void clear()`: Clears all elements from the list.
- `void push_back(T)`: Adds an element to the end of the list.
- `void pop_back()`: Removes the last element from the list.
- `void push_front(T)`: Adds an element to the front of the list.
- `void pop_front()`: Removes the first element from the list.
- `const std::size_t size() const`: Returns the number of elements in the list.
- `void insert(int, T)`: Inserts an element at a specified position.
- `void erase(int)`: Removes an element at a specified position.
- `void print() const`: Prints the elements of the list.
- `void swap(Forward_List<T>&)`: Swaps the contents of two `Forward_List` instances.
- `void reverse()`: Reverses the order of elements in the list.
- `void sort()`: Sorts the elements of the list in ascending order.

## Private Member

- `struct Node`: Represents a node in the linked list.

## Contributing

If you would like to contribute to this project, please open an issue or create a pull request with your changes. We welcome contributions from the community.
