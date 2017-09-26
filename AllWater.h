/********************************************************************
 * Filename: AllWater.h
 * Author: Kim McLeod
 * Date: 5.29.15
 * Description: AllWater class declaration file
 * ******************************************************************/


#ifndef ALLWATER_H
#define	ALLWATER_H
#include <ctime>
#include "Rooms.h"
using namespace std;


class AllWater : public Rooms
{
 
    public:
        AllWater(string name1);
	double changeAir();
       
};

#endif	/* ALLWATER_H */

