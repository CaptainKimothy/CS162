/********************************************************************
 * Filename: NoWater.h
 * Author: Kim McLeod
 * Date: 5.29.15
 * Description: NoWater heir class declaration file
 * ******************************************************************/


#ifndef NOWATER_H
#define NOWATER_H
#include "Rooms.h"
#include <ctime>
using namespace std;


class NoWater : public Rooms
{
 
    public:
        NoWater(string name1);
	double changeAir();
 
};

#endif  /*NOWATER_H */ 
