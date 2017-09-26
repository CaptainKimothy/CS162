/********************************************************************
 * Filename: SomeWater.cpp
 * Author: Kim McLeod
 * Date: 6.3.15
 * Description: SomeWater heir class implementation file
 * ******************************************************************/


#include "Rooms.h"
#include "SomeWater.h"
#include <iostream>
#include <ctime>
using namespace std;



/********************************************************************
 * Function: SomeWater
 * Description: Constructor
 * Parameters: name
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: member variables are set
 * ******************************************************************/
        SomeWater::SomeWater(string name1) : Rooms()
        {
            name = name1; 
            type = "SW";
        }


  
/********************************************************************
 * Function: changeAir
 * Description: returns int for breath based on room type
 * Parameters: none
 * Pre-Conditions: called on instance of Rooms heir
 * Post-Conditions: returns int for breath based on room type
 * ******************************************************************/
    double SomeWater::changeAir() 
    {
        return 2.0;
    }
    
        
        
