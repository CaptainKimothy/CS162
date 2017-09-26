/********************************************************************
 * Filename: Character.cpp
 * Author: Kim McLeod
 * Date: 6.3.15
 * Description: Character class implementation file
 * ******************************************************************/


#include "Character.h"
#include "ObjectsList.h"
#include "Rooms.h"
#include <vector>
#include <iostream>
using namespace std;


/********************************************************************
 * Function: Character
 * Description: constructor
 * Parameters: Pointer to Rooms object
 * Pre-Conditions: character object is created
 * Post-Conditions: location member variable is initialized
 * ******************************************************************/
        Character::Character(Rooms *initial)
        {
            location = initial;
            air = 13000;
        }
        
        
        
/********************************************************************
 * Function: changeLocation
 * Description: changes location member variable and air supply
 * Parameters: Pointer to Rooms object and oxygen integer
 * Pre-Conditions: character changes rooms
 * Post-Conditions: location and air member variables are updated
 * ******************************************************************/
        void Character::changeLocation(Rooms *locale, double newAir)
        {   
            location = locale;
            air = newAir;
        }  
        
        
               
                
                
/********************************************************************
 * Function: getAir
 * Description: returns air member variable
 * Parameters: none
 * Pre-Conditions: called on instance of Character
 * Post-Conditions: returns air member variable value
 * ******************************************************************/
        double Character::getAir()
        {
            return air;
        }
        
        
/********************************************************************
 * Function: getLocation
 * Description: returns location member variable
 * Parameters: none
 * Pre-Conditions: called on instance of Character
 * Post-Conditions: returns location member variable value
 * ******************************************************************/
         Rooms* Character::getLocation()
         {
             return location;
         }
        
      
         
         
         
/********************************************************************
 * Function: createBag
 * Description: returns location member variable
 * Parameters: none
 * Pre-Conditions: called on instance of Character
 * Post-Conditions: returns location member variable value
 * ******************************************************************/
         void Character::createBag(ObjectsList *booty)
         {
             bag = booty;
         }