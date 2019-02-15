#ifndef LIST_H
#define LIST_H

class List {
	private:
		Node * head;
		Node * tail;
		unsigned l_size;	
	public:
		List();
		~List();
		void insert(int, Planet*);
		Planet* read(int);
		bool remove(int);
		unsigned size();
};

class Node {
	private:
	public:
		Node * next;
		Planet * planet;
		Node();
};
#endif
