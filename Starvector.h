#ifndef STARVECTOR_H
#define STARVECTOR_H
#include "Star.h"

class Starvector{
	public:
		
		Starvector();
		~Starvector();
		long addPlanet();
		bool removePlanet(int);
		Planet * getPlanet(int);
		void orbit();
		void printStarInfo();
		unsigned int getCurrentNumPlanets();
}

#endif
