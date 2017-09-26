/********************************************************************
 * Filename: Character.h
 * Author: Kim McLeod
 * Date: 6.3.15
 * Description: Character class declaration file
 * ******************************************************************/

#ifndef CHARACTER_H
#define	CHARACTER_H
#include "ObjectsList.h"
#include "Rooms.h"
#include <ctime>
#include <vector>
using namespace std;

class Character
{

public:
    ObjectsList *bag;
    double air;
    Rooms *location;
    Character(Rooms *initial);
    void changeLocation(Rooms *locale, double newAir);
    //void changeAir(int breath);
    Rooms* getLocation();
    double getAir();
    void createBag(ObjectsList *booty);
};

#endif	/* CHARACTER_H */

