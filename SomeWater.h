
/********************************************************************
 * Filename: SomeWater.h
 * Author: Kim McLeod
 * Date: 5.29.15
 * Description: SomeWater class declaration file
 * ******************************************************************/

#ifndef SOMEWATER_H
#define	SOMEWATER_H
#include <ctime>
#include "Rooms.h"
using namespace std;


class SomeWater : public Rooms
{
 
    public:
        SomeWater(string name1);
	double changeAir();
};

#endif	/* SOMEWATER_H */

