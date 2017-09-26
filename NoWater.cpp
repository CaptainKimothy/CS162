/********************************************************************
 * Filename: NoWater.cpp
 * Author: Kim McLeod
 * Date: 6.3.15
 * Description: NoWater heir class implementation file
 * ******************************************************************/


#include "Rooms.h"
#include "NoWater.h"
#include <ctime>
#include <iostream>
using namespace std;



/********************************************************************
 * Function: NoWater
 * Description: Constructor
 * Parameters: name
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: member variables are set
 * ******************************************************************/
        NoWater::NoWater(string name1) : Rooms()
        {
            name = name1;
            type = "NW";
            
        }

        
        
  
/********************************************************************
 * Function: changeAir
 * Description: returns int for breath based on room type
 * Parameters: none
 * Pre-Conditions: called on instance of Rooms heir
 * Post-Conditions: returns int for breath based on room type
 * ******************************************************************/
    double NoWater::changeAir()
    {
        return 10.0;
    }
    
        

        
        