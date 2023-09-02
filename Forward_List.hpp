/*	Forward_List.hpp	*/

#include "Forward_List.h"

template <typename T>
const T& Forward_List<T>::front() const {
	if (!head) {
		throw  std::runtime_error("List is Empty!!!");
		}
	return head-> val;
}

template <typename T>
const bool Forward_List<T>::empty() const {
	return !head;
}

template <typename T>
void Forward_List<T>::clear() {
	while (head) {
		Node* tmp {head};
		head = head-> next;
		delete tmp;
	}
}

template <typename T>
void Forward_List<T>::push_back(T val) {
	Node* new_Node {new Node(val)};
	if (!head) {
		head = new_Node;
		return;
	} else {
		Node* current {head}; 
		while (current-> next) {
			current = current-> next;
		}
		current-> next = new_Node;
	}
}

template <typename T>
void Forward_List<T>::pop_back() {
    if (!head) {
        throw std::runtime_error("List is empty, we can't pop_back!!!");
    } else if (!head->next) {
        delete head;
        head = nullptr;
    } else {
        Node* current = head;
        Node* prev = nullptr;
        while (current->next) {
            prev = current;
            current = current->next;
        }
        delete current;
        prev->next = nullptr;
    }
}

template <typename T>
void Forward_List<T>::push_front(T v) {
	Node* tmp {new Node(v)};
	tmp-> next = head;
	head = tmp;
 }

template <typename T>
void Forward_List<T>::pop_front() {
	if (head) {
		Node* tmp {head-> next};
		delete head;
		head = tmp;
	} else {
		throw std::runtime_error("List is empty, can't pop_front!!!");
	}
}

template <typename T>
const std::size_t Forward_List<T>::size() const {
	if (!head) {
		return 0;
		}
	std::size_t size {};
	Node* current {head};
	while (current) {
		++size;
		current = current-> next;
		}
	return size;
}

template <typename T>
void Forward_List<T>::insert(int position, T value) {
	if (position < 0) {
        throw std::out_of_range("Position cannot be negative!!!\n");
    }
	Node* new_Node {new Node(value)};
	if (position == 0) {
		new_Node-> next = head;
		head = new_Node;
	} else {
		int current_Position {};
		Node* current {head};
		while (current and current_Position < position - 1) {
			++current_Position;
			current = current-> next;
		}
		if (!current or position-1 > current_Position) {
			delete new_Node;
		    throw std::out_of_range("Invalid position");
			}
		new_Node-> next = current-> next;
		current-> next = new_Node;
	}
}

template <typename T>
void Forward_List<T>::erase(int position) {
	if (position < 0) {
		throw std::out_of_range("Position can't be negative!!!\n");
	} else 	if (position == 0 and head) {
		Node* new_Node {head-> next};
		delete head;
		head = new_Node;
	} else {
		Node* current {head}; 
		int current_Position {};
		while (current and current-> next and current_Position < position - 1) {
			++current_Position;
			current = current-> next;
		}
		if (!current or !current-> next or current_Position < position - 1) {
		    throw std::out_of_range("Invalid position");
		}
		Node* new_Node {current-> next};
		current-> next = current-> next-> next;
		delete new_Node;
	}
}

template <typename T>
void Forward_List<T>::print() const {
	if (!head) {
		return;
		}
	Node* current {head};
	while (current) {
		std::cout<< current-> val << ' ';
		current = current-> next;
		}
	std::cout<< std::endl;
}

template <typename T>
void Forward_List<T>::swap(Forward_List<T>& list2) {
	if (this == &list2) {
		return;		// lists are the same;
		}
	std::swap(head, list2.head);	
}

template <typename T>
void Forward_List<T>::reverse() {
    if (!head || !head->next) {
        return; // Empty list or single-element list, no need to reverse
    }
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev; // Set the head to the last node (previously first)
}

template <typename T>
void Forward_List<T>::sort() {
	if (!head or !head-> next) {
		return;
		}
	bool flag {true};
	Node* current {head};
	while (flag) {
		flag = false;
		while (current and current-> next) {
			if (current-> val > current-> next-> val) {
				flag = true;
				std::swap(current-> val, current-> next-> val);
				}
			current = current-> next;
			}
		current = head;
		}
}

