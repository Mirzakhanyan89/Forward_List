/*	Main_Test_Forward_List.cpp	*/

#include "Forward_List.h"

int main() {
    try {
        // Create an empty Forward_List
        Forward_List<int> myList;

        // Test empty() function
        std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

        // Test push_front() function
        myList.push_front(5);
        myList.push_front(3);
        myList.push_front(1);
        std::cout << "List elements after push_front: ";
        myList.print();

        // Test insert() function
        myList.insert(2, 4);
        myList.insert(1, 2);
        myList.insert(0, 0);
        std::cout << "List elements after insert: ";
        myList.print();

        // Test swap() function with another list
        Forward_List<int> anotherList;
        anotherList.push_back(7);
        anotherList.push_back(8);
        anotherList.push_back(9);
        myList.swap(anotherList);
        std::cout << "List elements after swap with another list: ";
        myList.print();
        std::cout << "Another list elements after swap: ";
        anotherList.print();

        // Test reverse() function
        myList.reverse();
        std::cout << "List elements after reverse: ";
        myList.print();

        // Test pop_back() function
        myList.pop_back();
        std::cout << "List elements after pop_back(): ";
        myList.print();
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught out of range exception: " << e.what() << std::endl;
    }

    return 0;
}

