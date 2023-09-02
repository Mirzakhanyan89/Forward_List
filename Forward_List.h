/*	forward_list.h	*/

#ifndef FORWARD_LIST_H
#define FORWARD_LIST_H

#include <iostream>

template <typename T>
class Forward_List {
public:
	Forward_List() = default;
	Forward_List(T v) : head{new Node(v)} { }
	~Forward_List() { clear(); }
	const T& front() const;
	const bool empty() const;
	void clear();	
	void push_back(T);
	void pop_back();
	void push_front(T);
	void pop_front();	
	const std::size_t size() const;
	void insert(int, T);
	void erase(int);
	void print() const;
	void swap(Forward_List<T>&);
	void reverse();
	void sort();

private:
	struct Node {
		int val;
		Node* next;
		Node() : val{}, next{nullptr} { }
		Node(T v) : val{v}, next{nullptr} { }
		Node(T v, Node* n) : val{v}, next{n} { }
	};
	Node* head;
};

#include "Forward_List.hpp"

#endif 		// FORWARD_LIST_H


