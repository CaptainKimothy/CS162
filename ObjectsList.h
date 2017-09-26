/********************************************************************
 * Filename: ObjectsList.h
 * Author: Kim McLeod
 * Date: 6.8.15
 * Description: Objects class declaration file
 * ******************************************************************/

#ifndef OBJECTSLIST_H
#define	OBJECTSLIST_H
#include "Rooms.h"
using namespace std;


class ObjectsList
{
protected:
    struct ObjectNode
    {
        Rooms *location; 
        string name;
        string description;
        bool viewed;
        bool hasPiece;
        bool canRemove;
        ObjectNode *next;
        ObjectNode *prev;
        
        ObjectNode(string NAME, Rooms *locale, bool map, bool move, string text, ObjectNode *next1 = NULL)
        {
            name = NAME;
            location = locale;
            viewed = false;
            hasPiece = map;
            canRemove = move;
            description = text;
            prev = next;
            next = next1;
            
        }
       
        void changeViewed()
        {
            viewed = true;
        }
    };

    ObjectNode *front;
    ObjectNode *rear;
    
    
public:
    int size;
    ObjectsList();
    ~ObjectsList();
    void add(string NAME, Rooms *locale, bool map, bool move, string text);
    void remove(string NAME, ObjectsList *moveTo);
    void move(ObjectNode *ptr);
    void displayList();
    ObjectNode* getObject(int num);
    int getSize();
    
};


#endif	/* OBJECTSLIST_H */

