#include "Star.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Planet::Planet(int distance){
	this->distance = distance;
    this->pos = 0;
}

long int Planet::getID(){
	return &this;
}
int Planet::orbit(){
	if(this->pos == 359){this->pos = 0;}
	else{this->pos++;}
	return this->pos;
}
int Planet::getDistance(){
	return this->distance;
}
int Planet::getPos(){
	return this->pos;
}
Star::Star(int num){
	this->max_planets = num;
	this->current_planets = 0;
	this->next_id = -1; //what is the default next_id?
}
bool Star::addPlanet(int index, Planet * p){
	if(this->current_planets == this->max_planets){return false;}
	planets[index] = p;
	this->current_planets++;
	return true;
}
Planet Star::getFurthest(){
	Planet far = planets[0];
	for(int i = 0; i < this->current_planets; i++){
		if(planets[i].getDistance() > far.getDistance()){far = planets[i];} 
	}
	return far;
}
void Star::orbit(){
	for(int i = 0; i < this->current_planets; i++){
		planets[i].orbit();
	}
}
void Star::printStarInfo(){
	std::cout << "The star currently has " << this->current_planets << " planets." << std::endl;
	std::cout << "This star can support up to " << this->max_planets << " planets." << std::endl;
	std::cout << "Planets:" << std::endl;
	for(int i = 0; i < this->current_planets; i++){
		std::cout << "Planet " << i << " is " << planets[i].getDistance() << " million miles away at position " << planets[i].getPos() << " around the star." << std::endl; 	
	}
}
int Star::getCurrentNumPlanets(){
	return this->current_planets;
}
int Star::getMaxPlanets(){
	return this->max_planets;
}
