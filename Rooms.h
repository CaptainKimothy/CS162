/********************************************************************
 * Filename: Rooms.h
 * Author: Kim McLeod
 * Date: 5.8.15
 * Description: Rooms class declaration file
 * ******************************************************************/

#ifndef ROOMS_H
#define	ROOMS_H
#include <string>
#include <ctime>
using namespace std;

class ObjectsList;

struct Rooms
{
 
        string name;
        string type;
	Rooms *n1;
	Rooms *n2;
	Rooms *n3;
	Rooms *n4;
        ObjectsList *ROOM;
        
        Rooms();
        virtual ~Rooms() = 0;
        void addAllObjects(ObjectsList *room);
        void addConnections(Rooms *p1, Rooms *p2, Rooms *p3, Rooms *p4);
        string getName();
        virtual double changeAir();
        
};

#endif	/* ROOMS_H */

