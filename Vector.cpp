#include "Vector.h"
#include <iostream>
#include <cstdlib>

Vector::Vector(int max){
	this->system = new Star(max);
	this->size = 0;
}
Vector::~Vector(){
	for(int i = 0; i < system->max_planets; i++){
		delete system->planets[i];
	}
	delete system->planets;
	delete system;
}
void Vector::insert(int index,Planet * p){
	if(index > system->max_planets){
		Star system1 = new Star(index + 1);
		for(int i = 0; i < system->max_planets;i++){
			system1->planets[i] = system->planets[i];
		}
		system1.addPlanet(index,p);
		~Vector();
		system = system1;
		size++;
	}else{
		system.addPlanet(index,p);
		size++;		
	}
}
Planet* Vector::read(int index){
	if(index > system->max_planets){return NULL;}
	return system->planets[index];
}
bool Vector::remove(int index){
	if(index > system->max_planets){return NULL;}
	Star system1 = new Star(system->max_planets);
	int k = 0;
	for(int i = 0; i < system->max_planets; i++){
		if(i != index){
			system1->planets[k] = system->planets[i];
			k++;	
		}
	}
	Vector~;
	system = system1;
	size--;
}
unsigned Vector::size(){
	return size;
}
