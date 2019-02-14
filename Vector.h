#ifndef VECTOR_H
#define VECTOR_H
#include "Star.h"

class Vector{
	public:
		Star system;
		unsigned size;
		Vector(int);
		~Vector();
		void insert(int,Planet);
		Planet* read(int index);
		bool remove(int);
		unsigned size();
}

#endif
