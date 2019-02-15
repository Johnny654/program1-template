#include "List.h"
#include <iostream>
#include <cstdlib>

// List
List::List() {
	this->head = NULL;
	this->tail = NULL;
	this->l_size = 0;
}

List::~List() {
	Node * current = head;
	while(current != NULL) {
		this->next = current->next;
		delete current;
		current = next;
	}
	head = NULL;
}

void List::insert(int index, Planet * p) {
	Node * previous = new Node;
	Node * current  = new Node;
	Node * temp = new Node;
	current = this->head;
	for(int i = 1; i < index; i++) {
		previous = current;
		current = current->next;
	}
	temp->planet = p;
	previous->next = temp;
	temp->next = current;
	this->l_size = l_size+1;
}

Planet* List::read(int index) {
	Node * current = new Node;
	current = this->head;
	int count = 0;
	while(count != NULL) {
		if(count == index) 
			return &(current->planet);
		count++;
		current = current->next;
	}
}

bool List::remove(int index) {
	Node * current = new Node;
	Node * previous = new Node;
	current = this->head;
	for(int i = 1; i < index; i++) {
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	this->l_size = l_size-1;
	return true;	
}

unsigned List::size() {
	return this->l_size;
}

// Node
Node::Node() {
	this->next = NULL;
}
