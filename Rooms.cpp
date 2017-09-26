/********************************************************************
 * Filename: Rooms.cpp
 * Author: Kim McLeod
 * Date: 6.8.15
 * Description: Objects class implementation file
 * ******************************************************************/

#include "ObjectsList.h"
#include "Rooms.h"
#include <ctime>
#include <string>
#include <iostream>
using namespace std;


              
        
/********************************************************************
 * Function: Rooms
 * Description: Constructor
 * Parameters: name
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: all member variables are set
 * ******************************************************************/
        Rooms::Rooms(){}
        
        
           
     
        
/********************************************************************
 * Function: ~Rooms
 * Description: destructor
 * Parameters: none
 * Pre-Conditions: instance of Rooms heir exists
 * Post-Conditions: Rooms heir is destroyed
 * ******************************************************************/
        Rooms::~Rooms(){}
        
        
        
        
/********************************************************************
 * Function: addAllObjects
 * Description: sets vector of Objects member variable
 * Parameters: ObjectsList 
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: vector of Objects member variable is set
 * ******************************************************************/
        void Rooms::addAllObjects(ObjectsList *room)
        {
            ROOM = room;
        }
        
        
        
/********************************************************************
 * Function: addConnections
 * Description: sets room pointers
 * Parameters: pointers to rooms
 * Pre-Conditions: instance of Rooms heir is created
 * Post-Conditions: room pointers are set
 * ******************************************************************/
        void Rooms::addConnections(Rooms *p1, Rooms *p2, Rooms *p3, Rooms *p4)
        {
            n1 = p1;
            n2 = p2;
            n3 = p3;
            n4 = p4;
        }
        
  
        
        
/********************************************************************
 * Function: getName
 * Description: returns name member variable
 * Parameters: none
 * Pre-Conditions: called on instance of Rooms heir
 * Post-Conditions: returns name member variable
 * ******************************************************************/
    string Rooms::getName()
    {
        return name ;
    }
        
     
 
/********************************************************************
 * Function: changeAir
 * Description: returns int for breath based on room type
 * Parameters: none
 * Pre-Conditions: called on instance of Rooms heir
 * Post-Conditions: returns int for breath based on room type
 * ******************************************************************/
    double Rooms::changeAir()
    {
        return 45;
    }
    
    
        
