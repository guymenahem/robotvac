#ifndef _TRACKER_H_
#define _TRACKER_H_

// Includes
#include "KeyboardAlgo.h"
#include "Point.h"
#include "House.h"

class Tracker{
private:

	int battery;			// Batery Left
	int score;				// Score for algorithem 
	Point robotLocation;	// Robot Location
	int numOfSteps;			// Num of steps since start
	House house;
public:
	
	bool isGameFinished();




};





#endif