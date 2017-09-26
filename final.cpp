/********************************************************************
 * Filename: final.cpp
 * Author: Kim McLeod
 * Date: 6.8.15
 * Description: final project client file
 * ******************************************************************/


// include all the things
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Rooms.h"
#include "NoWater.h"
#include "SomeWater.h"
#include "AllWater.h"
#include "Character.h"
#include "ObjectsList.h"

using namespace std;



int main()
{
    // initialize all rooms and ObjectsList for each room
    
    // initialize temp rooms to call changeAir funciton on
    Rooms *tempNW = new NoWater("tempNW");
    Rooms *tempSW = new SomeWater("tempSW");
    Rooms *tempAW = new AllWater("tempAW");
    
    
    Rooms *stair1 = new NoWater("stair1"); 
    ObjectsList *STAIR1 = new ObjectsList; 
    stair1->addAllObjects(STAIR1);  
     
    
    
    Rooms *crewsRoom = new NoWater("crewsRoom");
    ObjectsList *CREWSROOM = new ObjectsList;
    CREWSROOM->add("hammock1", crewsRoom, false, false, " You see a tattered old hammock."); 
    CREWSROOM->add("hammock2", crewsRoom, false, false, " You see a tattered old hammock."); 
    CREWSROOM->add("hammock3", crewsRoom, false, false, " You see a tattered old hammock."); 
    CREWSROOM->add("barrel1", crewsRoom, false, false, " You see a barrel."); 
    CREWSROOM->add("barrel2", crewsRoom, false, false, " You see a barrel."); 
    CREWSROOM->add("pileOfCloth1", crewsRoom, true, true, " You found a piece of the map!");
    CREWSROOM->add("pileOfCloth2", crewsRoom, false, true, " You see a slimy pile of cloth.");
    crewsRoom->addAllObjects(CREWSROOM);
    
    
    
    Rooms *galley = new NoWater("galley");
    ObjectsList *GALLEY = new ObjectsList;
    GALLEY->add("pan1", galley, false, false, " You see a greasy frying pan.");
    GALLEY->add("pan2", galley, false, false, " You see a clean pan.");
    GALLEY->add("pan3", galley, false, false, " You see a pot of water.");
    GALLEY->add("barrel3", galley, false, false, " You see a barrel.");
    GALLEY->add("barrel4", galley, false, false, " You see a barrel.");
    GALLEY->add("jar1", galley, false, true, " You see a small jar.");
    galley->addAllObjects(GALLEY);
    
    
    
    Rooms *stair2 = new NoWater("stair2");
    ObjectsList *STAIR2 = new ObjectsList;
    stair2->addAllObjects(STAIR2);
    
    
    
    Rooms *behindS2 = new NoWater("behindS2");
    ObjectsList *BEHINDS2 = new ObjectsList;
    BEHINDS2->add("pileOfRope1", behindS2, false, true, " You see a frayed pile of rope.");
    behindS2->addAllObjects(BEHINDS2);
    
    
    
    Rooms *hall1 = new NoWater("hall1"); 
    ObjectsList *HALL1 = new ObjectsList;
    hall1->addAllObjects(HALL1);
    
    
    
    Rooms *rowboat = new NoWater("rowboat");
    ObjectsList *ROWBOAT = new ObjectsList;
    ROWBOAT->add("canOfFish", rowboat, false, true, " You see one edible can of fish.");
    rowboat->addAllObjects(ROWBOAT); 
    
    
    
    Rooms *cannonA = new SomeWater("cannonA");
    ObjectsList *CANNONA = new ObjectsList;
    CANNONA->add("cannon1", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("cannon2", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("cannon3", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("cannon4", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("cannon5", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("cannon6", cannonA, false, false, " You see a well-worn cannon.");
    CANNONA->add("barrel5", cannonA, false, false, " You see a barrel.");
    CANNONA->add("barrel6", cannonA, false, false, " You see a barrel.");
    CANNONA->add("pileOfCBalls1", cannonA, false, false, " You see a pile of cannon balls.");
    cannonA->addAllObjects(CANNONA);
    
    
    
    Rooms *deck = new SomeWater("deck");
    ObjectsList *DECK = new ObjectsList;
    deck->addAllObjects(DECK);
    
    
    
    Rooms *hall2 = new SomeWater("hall2");
    ObjectsList *HALL2 = new ObjectsList;
    hall2->addAllObjects(HALL2);
    
    
    
    Rooms *captainsCabin = new SomeWater("captainsCabin"); 
    ObjectsList *CAPTAINSCABIN = new ObjectsList;
    CAPTAINSCABIN->add("globe", captainsCabin, false, false, " You see a bejeweled globe.");
    CAPTAINSCABIN->add("chest", captainsCabin, false, false, " There is nothing in the chest.");
    CAPTAINSCABIN->add("pileOfCloth3", captainsCabin, false, true, " The captain dressed well.");
    CAPTAINSCABIN->add("crate1", captainsCabin, false, false, " The crate is full of rum!");
    CAPTAINSCABIN->add("crate2", captainsCabin, true, false, " You found a piece of the map!");
    captainsCabin->addAllObjects(CAPTAINSCABIN);
    
    
    
    Rooms *cannonB = new SomeWater("cannonB"); 
    ObjectsList *CANNONB = new ObjectsList;
    CANNONB->add("cannon7", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("cannon8", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("cannon9", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("cannon10", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("cannon11", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("cannon12", cannonB, false, false, " You see a well-worn cannon.");
    CANNONB->add("barrel7", cannonB, false, false, " You see a barrel.");
    CANNONB->add("barrel8", cannonB, false, false, " You see a barrel.");
    CANNONB->add("pileOfCBalls2", cannonB, false, false, " You see a pile of cannon balls.");
    cannonB->addAllObjects(CANNONB);
    
  
    
    Rooms *stair3 = new SomeWater("stair3");
    ObjectsList *STAIR3 = new ObjectsList;
    stair3->addAllObjects(STAIR3);
    
    
    
    Rooms *behindS3 = new SomeWater("behindS3"); 
    ObjectsList *BEHINDS3 = new ObjectsList;
    BEHINDS3->add("barrel9", behindS3, false, false, " You see a barrel.");
    BEHINDS3->add("barrel10", behindS3, true, false, " You found a piece of the map!");
    behindS3->addAllObjects(BEHINDS3);
    
    
    
    Rooms *ropeRoom = new SomeWater("ropeRoom"); 
    ObjectsList *ROPEROOM = new ObjectsList;
    ROPEROOM->add("pileOfRope2", ropeRoom, false, true, " You see a pile of rope.");
    ROPEROOM->add("pileOfRope3", ropeRoom, false, true, " You see a pile of rope.");
    ROPEROOM->add("pileOfRope4", ropeRoom, false, true, " You see a pile of rope.");
    ROPEROOM->add("barrel11", ropeRoom, false, false, " You see a barrel.");
    ROPEROOM->add("barrel12", ropeRoom, false, false, " You see a barrel.");
    ropeRoom->addAllObjects(ROPEROOM);
    
    
         
    Rooms *hall3 = new AllWater("hall3");
    ObjectsList *HALL3 = new ObjectsList;
    HALL3->add("brokenBottle1", hall3, false, true, " You see a broken bottle. Be careful!");
    hall3->addAllObjects(HALL3);
    
    
    
    Rooms *rumRoom = new AllWater("rumRoom"); 
    ObjectsList *RUMROOM = new ObjectsList;
    RUMROOM->add("bottle1", rumRoom, false, true, " You see an empty rum bottle.");
    RUMROOM->add("bottle2", rumRoom, false, true, " You see an empty rum bottle.");
    RUMROOM->add("bottle3", rumRoom, false, true, " You found a full rum bottle!");
    RUMROOM->add("brokenBottle2", rumRoom, true, true, " You found a piece of the map!");
    RUMROOM->add("barrel13", rumRoom, false, false, " You see a barrel.");
    RUMROOM->add("barrel14", rumRoom, false, false, " You see a barrel.");
    rumRoom->addAllObjects(RUMROOM);
    
    
    
    Rooms *hold = new AllWater("hold");
    ObjectsList *HOLD = new ObjectsList;
    HOLD->add("crate3", hold, false, false, " This crate is empty.");
    HOLD->add("crate4", hold, false, false , " You found a crate full of pieces of eight!");
    HOLD->add("barrel15", hold, false, false, " You see a barrel.");
    HOLD->add("barrel16", hold, false, false, " You see a barrel.");
    HOLD->add("brokenBottle3", hold, false, true, "You found a broken bottle. Be careful!");
    hold->addAllObjects(HOLD);
    
    
    
    Rooms *outFront = new AllWater("outFront");  
    Rooms *outSide = new AllWater("outSide");
    Rooms *outBack = new AllWater("outBack");
    Rooms *overboard = new AllWater("overboard");
    
    
    // connect all the rooms together
    stair1->addConnections(deck, overboard, rowboat, stair2);
    crewsRoom->addConnections(outBack, outSide, cannonA, hall1);
    galley->addConnections(outSide, cannonB, hall1, ropeRoom);
    stair2->addConnections(stair1, hall1, behindS2, stair3);
    behindS2->addConnections(stair2, NULL, NULL, NULL);
    hall1->addConnections(stair2, galley, crewsRoom, hall2);
    rowboat->addConnections(stair1, deck, overboard, outFront);
    cannonA->addConnections(crewsRoom, outBack, captainsCabin, hall2);
    hall2->addConnections(cannonA, cannonB, captainsCabin, hall1);
    captainsCabin->addConnections(cannonA, outFront, hold, hall2);
    cannonB->addConnections(hall2, galley, outSide, hold);
    stair3->addConnections(stair2, hall3, NULL, behindS3);
    behindS3->addConnections(stair3, NULL, NULL, NULL);
    ropeRoom->addConnections(galley, hall3, outBack, hold);
    deck->addConnections(stair1, rowboat, overboard, outFront);
    hall3->addConnections(ropeRoom, stair3, rumRoom, hold);
    rumRoom->addConnections(hold, hall3, outSide, outFront);
    hold->addConnections(rumRoom, hall3, captainsCabin, ropeRoom);
    outBack->addConnections(NULL, NULL, NULL, NULL);
    outFront->addConnections(NULL, NULL, NULL, NULL);
    outSide->addConnections(NULL, NULL, NULL, NULL);
    overboard->addConnections(NULL, NULL, NULL, NULL);
    
    // create the array that holds all the rooms
    Rooms* FlyingMango [23] = {stair1, crewsRoom, galley, stair2, behindS2, hall1, rowboat, cannonA, hall2, captainsCabin, cannonB, stair3, behindS3, ropeRoom, deck, hall3, rumRoom, hold, outBack, outFront, outSide, overboard};
    
    
    // create ObjectsList to hold map pieces
    ObjectsList *PIECES = new ObjectsList;
    PIECES->add("piece1", crewsRoom, false, true, " A tattered piece of map.");
    PIECES->add("piece2", captainsCabin, false, true, " A tattered piece of map.");
    PIECES->add("piece3", rumRoom, false, true, " A tattered piece of map.");
    PIECES->add("piece4", behindS3, false, true, " A tattered piece of map.");
    
    
    
    
    
    // declare variables
    char arg[10];
    time_t start, finish, start2;
    start = time(NULL);
    double minutes, seconds, remain;
    
    // create the player!
    Character crewMan6(deck);
    
    // start the timer for the air timer
    start2 = time(NULL);
    
    // initialize players bag
    ObjectsList *BAG = new ObjectsList;
    crewMan6.createBag(BAG);
    
    
    
    cout << "\n Welcome aboard the Flying Mango! ";
    cout << "\n By the way, it's sinking!";
    cout << "\n\n ...And you don't know how to swim!";
    cout << "\n Some rooms are submersed and you will drown if you stay in them too long!";
    cout << "\n You, CrewMan6, are the last scallywag remaining.";
    cout << "\n Go find the four pieces of the treasure map before the ship goes under!";
    cout << "\n Best of luck to ye.";
    
    
    int choice, objChoice;
    int count = 0;
    
    cout << "\n You have 10 minutes before she finds her rest in that watery grave!";
    do
    {    
        Rooms *place;
        place = crewMan6.getLocation();
        cout << "\n ";
        
        // if the player chooses any of these "rooms", they die. Immediately. 
        if((place == outFront) || (place == outBack) || (place == outSide) || (place == overboard))
        {
            cout << "\n\n You slack-jawed idiot! You jumped into the ocean when you can't swim.";
            cout << "\n\n Congratulations.";
            cout << "\n You are now dead.\n";
            return 0;
        }
        
        else
        {   // otherwise, they get to choose where to go or what to investigate
            cout << "\n\n Current location: " << (place->getName());
            cout << "\n Go to:";
            if(place->n1 != NULL)
            { cout << "\n 1. " << place->n1->getName(); } 
            
            if(place->n2 != NULL)
            { cout << "\n 2. " << place->n2->getName(); }
            
            if(place->n3 != NULL)
            { cout << "\n 3. " << place->n3->getName(); }
            
            if(place->n4 != NULL)
            { cout << "\n 4. " << place->n4->getName(); }
            cout << "\n ";
            cout << "\n Inspect:";

            // display the list with numbers so the player can choose
            place->ROOM->displayList();

            cout << "\n Enter choice: ";
            cin.get(arg, 20);
            cin.ignore();

            choice = atoi(arg);
            objChoice = choice - 4;
          

            if(choice < 5)
            {    
                switch(choice)
                {
                    // cases for rooms
                    // based on choice and room type, change the player's location
                    case 1: {   double newA;
                                if(crewMan6.getLocation()->n1->type == "NW")
                                {
                                    newA = tempNW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n1->type == "SW")
                                {
                                    newA = tempSW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n1->type == "AW")
                                {
                                    newA = tempAW->changeAir();
                                }
                                crewMan6.changeLocation((crewMan6.getLocation())->n1, newA); 
                                
                                // reset the start for the air timer
                                start2 = time(NULL);
                                break;
                            }
                    case 2: {   double newA;
                                if(crewMan6.getLocation()->n2->type == "NW")
                                {
                                    newA = tempNW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n2->type == "SW")
                                {
                                    newA = tempSW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n2->type == "AW")
                                {
                                    newA = tempAW->changeAir();
                                }
                                crewMan6.changeLocation((crewMan6.getLocation())->n2, newA); 
                                cout << "\n air-firstchange: " << crewMan6.getAir();
                                
                                // reset the start for the air timer
                                start2 = time(NULL);
                                break;
                            }
                    case 3: {    double newA;
                                if(crewMan6.getLocation()->n3->type == "NW")
                                {
                                    newA = tempNW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n3->type == "SW")
                                {
                                    newA = tempSW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n3->type == "AW")
                                {
                                    newA = tempAW->changeAir();
                                }
                                crewMan6.changeLocation((crewMan6.getLocation())->n3, newA); 
                                cout << "\n air-firstchange: " << crewMan6.getAir();
                                
                                // reset the start for the air timer
                                start2 = time(NULL);
                                break;
                            }
                    case 4: {    double newA;
                                if(crewMan6.getLocation()->n4->type == "NW")
                                {
                                    newA = tempNW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n4->type == "SW")
                                {
                                    newA = tempSW->changeAir();
                                }
                                else if(crewMan6.getLocation()->n4->type == "AW")
                                {
                                    newA = tempAW->changeAir();
                                }
                                crewMan6.changeLocation((crewMan6.getLocation())->n4, newA); 
                                cout << "\n air-firstchange: " << crewMan6.getAir();
                                
                                // reset the start for the air timer
                                start2 = time(NULL);
                                break;
                            }
                }
            }


            else
            {   // if the player looks at an item, show them a description
                cout << place->ROOM->getObject(objChoice)->description; 
                place->ROOM->getObject(objChoice)->changeViewed();

                
                // if the item has a map piece
                if(place->ROOM->getObject(objChoice)->hasPiece == true)
                {
                    // if the players bag is too full, ask them to remove something
                    if(crewMan6.bag->size > 5)
                    { 
                        cout << "\n You have too many items in your bag!";
                        cout << "\n Please remove an item to add the piece of map.";
                        crewMan6.bag->displayList();
                        cin.get(arg, 20);
                        cin.ignore();
                        choice = atoi(arg);

                        crewMan6.bag->remove(crewMan6.bag->getObject(objChoice)->name, crewMan6.getLocation()->ROOM);
                        cout << "\n Your bag now contains: ";
                        crewMan6.bag->displayList();   
                    } 

                    // move the map piece to player's bag
                    if(count == 0)
                    {
                        cout << "\n It has been added to your bag.";
                        PIECES->remove("piece1", crewMan6.bag);
                    }

                    else if(count == 1)
                    {
                        cout << "\n It has been added to your bag.";
                        PIECES->remove("piece2", crewMan6.bag);
                    }

                    else if(count == 2)
                    {
                        cout << "\n It has been added to your bag.";
                        PIECES->remove("piece3", crewMan6.bag);
                    }
                    
                    // once count gets to three (starting at 0), all pieces have been found!
                    // and the game ends
                    if(count == 3)
                    {
                        cout << "\n It has been added to your bag.";
                        PIECES->remove("piece4", crewMan6.bag);
                        cout << "\n You found all of the pieces and didn't die!";
                        cout << "\n Congratulations!";
                        return 0;
                    }
                    place->ROOM->getObject(objChoice)->hasPiece = false;
                    count++;
                }
                // if the object can be removed from the room
                if(place->ROOM->getObject(objChoice)->canRemove == true)
                {
                   
                    char keep[10];
                    cout << "\n Would you like to add " << place->ROOM->getObject(objChoice)->name << " to your bag?";
                    cout << "\n Enter Y or N ";
                    cin.get(keep, 10);
                    cin.ignore();
                    
                   
                    // and if the player wants to take the object
                    if((keep[0] == 'Y') || (keep[0] == 'y'))
                    {
                        // if player's bag is too full, ask them to remove an item
                        if(crewMan6.bag->size > 5)
                        { 
                        cout << "\n You have too many items in your bag!";
                        cout << "\n Please remove an item to add the piece of map.";
                        crewMan6.bag->displayList();
                        cin.get(arg, 20);
                        cin.ignore();
                        choice = atoi(arg);

                        crewMan6.bag->remove(crewMan6.bag->getObject(objChoice)->name, crewMan6.getLocation()->ROOM); 
                        
                        }
                        
                        // add the object to the player's bag
                        string name = place->ROOM->getObject(objChoice)->name;
                        place->ROOM->remove(((place->ROOM->getObject(objChoice))->name), crewMan6.bag);
                        cout << "\n " << name << " has been added to your bag.";
                        
                    }

                    else
                    {  cout << "\n You put the object down and move along."; }
                }

            } // else (choice)       
                        
        }//else (not watery death)       
                
    // find and display elapsed/remaining time            
    finish = time(NULL);
    minutes = (difftime(finish, start))/60;
    seconds = (difftime(finish, start2))/60;
    remain = crewMan6.getAir() - seconds;
    cout << "\n air: " << crewMan6.getAir();
    cout << "\n Ye have " << 10.0 - minutes << " minutes remaining!";
    cout << "\n And ye have " << crewMan6.getAir() - seconds << " minutes of air remaining!";
    
    }//do
    
    //once the timer is up or the player is out of air, end the game
    while((minutes < 10.1) && (remain > 0));
    
    // print the appropriate message
    if(minutes >= 10.1)
    {
        cout << "\n You took too long and the ship went under!";
        cout << "\n Rest in pieces.";
    }
    
    else
    {
        cout << "\n You took too long and ran out of breath!";
        cout << "\n Rest in pieces.";
    }
    return 0;
}
