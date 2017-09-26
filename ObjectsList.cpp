/********************************************************************
 * Filename: Objects.cpp
 * Author: Kim McLeod
 * Date: 6.8.15
 * Description: Objects class implementation file
 * ******************************************************************/

#include "ObjectsList.h"
#include "Rooms.h"
#include "Character.h"
#include <iostream>
using namespace std;



    

/********************************************************************
 * Function: ObjectsList
 * Description: Constructor
 * Parameters: none
 * Pre-Conditions: instance of ObjectsList is created
 * Post-Conditions: front and rear pointers are set
 * ******************************************************************/
    ObjectsList::ObjectsList()
    {
        rear = NULL;
        front = rear;
    }
    
    
    
/********************************************************************
 * Function: ~ObjectsList
 * Description: destructor
 * Parameters: none
 * Pre-Conditions: instance of ObjectseList exists
 * Post-Conditions: memory deallocated
 * ******************************************************************/
	ObjectsList::~ObjectsList()
	{
	  ObjectNode *nodePtr = front;
	  while(nodePtr != NULL)
	  {
		ObjectNode *dump = nodePtr;
		nodePtr = nodePtr->next;
		delete dump;
	  }
	}

    
    
/********************************************************************
 * Function: add
 * Description: adds a node to the list
 * Parameters: integer value
 * Pre-Conditions: instance of ObjectNode created
 * Post-Conditions: node added to top of list
 * ******************************************************************/
	void ObjectsList::add(string NAME, Rooms *locale, bool map, bool move, string text)
	{
	   if(front == NULL)
	   {	front = new ObjectNode(NAME, locale, map, move, text); }

	   else
	   {
		ObjectNode *nodePtr = front;
	
		while(nodePtr->next != NULL)
		{  nodePtr = nodePtr->next; }


		nodePtr->next = new ObjectNode(NAME, locale, map, move, text);
	   }

        size++;   
           
	}

        
        
        
        
/********************************************************************
 * Function: remove
 * Description: removes Object from current list, places in bag or room
 * Parameters: Pointer to instance of Rooms
 * Pre-Conditions: instance of ObjectNode exists
 * Post-Conditions: Object is in different list
 * ******************************************************************/
    void ObjectsList::remove(string NAME, ObjectsList *moveTo)
    { 
        ObjectNode *nodePtr, *prevPtr; 
        if(front->name == NAME)
        { 
            nodePtr = front;
            front = front->next;
            moveTo->move(nodePtr);    
            delete nodePtr;
        }
        
        else
        {   
            nodePtr = front;
            
            while((nodePtr != NULL) && (nodePtr->name != NAME))
            {   
                prevPtr = nodePtr;
                nodePtr = nodePtr->next;
                   
            }
            cout << "\n name: " << nodePtr->name;
            if(nodePtr)
            {    
                prevPtr->next = nodePtr->next;
                moveTo->move(nodePtr);
                delete nodePtr;
                
            }
            
            else 
            {
                cout << "\n couldn't find!";
            }
            
        }   
        
     size--;   
        
    }
    
    
    
/********************************************************************
 * Function: move
 * Description: moves a node to different list
 * Parameters: ObjectNode pointer
 * Pre-Conditions: called on instance of ObjectsList
 * Post-Conditions: node added to top of list
 * ******************************************************************/
	void ObjectsList::move(ObjectNode *ptr)
	{   
            ObjectNode *nodePtr, *prevPtr;
            
            
	   if(front == NULL)
	   {   front = ptr; 
               ptr->next = NULL; 
           }
           
	   else
	   {    
		ObjectNode *nodePtr = front;
	
		while(nodePtr->next != NULL)
		{  nodePtr = nodePtr->next; }


		nodePtr->next = ptr;
                ptr->prev = nodePtr;
                ptr->next = NULL; 
	   }

	}
        
        
        
        
/********************************************************************
 * Function: displayList
 * Description: prints contents of list
 * Parameters: none
 * Pre-Conditions: called on instance of ObjectsList
 * Post-Conditions: ObjectNode names are printed
 * ******************************************************************/
	void ObjectsList::displayList()
	{
            
	  ObjectNode *nodePtr = front;
          
          if(front == NULL)
          {
              cout << " There is nothing to inspect. \n";
          }
          
          else
          {    
            int count = 5;
            while(nodePtr)
            {
                cout << "\n " << count << ". " << nodePtr->name << " ";
		nodePtr = nodePtr->next;
                count++;
            }
          }
        }

        
        
/********************************************************************
 * Function: getObject
 * Description: returns pointer to ObjectNode
 * Parameters: none
 * Pre-Conditions: called on instance of ObjectsList
 * Post-Conditions: ObjectNode pointer is returned
 * ******************************************************************/        
        ObjectsList::ObjectNode* ObjectsList::getObject(int num)
        {
            ObjectNode *nodePtr = front;
            if(num == 1)
            { nodePtr = front; }
            
            else
            {    for(int i = 1; i < num; i++)
                {
                    nodePtr = nodePtr->next;
                }
            }
            
            return nodePtr;
            
        }
        
        
/********************************************************************
 * Function: getSize
 * Description: returns size of list
 * Parameters: none
 * Pre-Conditions: called on instance of ObjectsList
 * Post-Conditions: returns size of list
 * ******************************************************************/
    int ObjectsList::getSize()
    {
        return size;
    }