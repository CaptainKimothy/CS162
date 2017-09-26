
/********************************************************************
 * Filename: AllWater.cpp
 * Author: Kim McLeod
 * Date: 6.3.15
 * Description: AllWater heir class implementation file
 * ******************************************************************/


#include "Rooms.h"
#include "AllWater.h"
#include <iostream>
#include <ctime>
using namespace std;


/********************************************************************
 * Function: AllWater
 * Description: Constructor
 * Parameters: name
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: member variables are set
 * ******************************************************************/
        AllWater::AllWater(string name1) : Rooms()
        {
            name = name1;
            type = "AW";
        }

      
  
/********************************************************************
 * Function: changeAir
 * Description: returns int for breath based on room type
 * Parameters: none
 * Pre-Conditions: called on instance of Rooms heir
 * Post-Conditions: returns int for breath based on room type
 * ******************************************************************/
    double AllWater::changeAir() 
    {
        return 0.3;
    }
    
        