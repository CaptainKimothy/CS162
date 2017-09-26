All: FINAL

FINAL: Rooms.o NoWater.o SomeWater.o AllWater.o ObjectsList.o Character.o final.o
	g++ Rooms.o NoWater.o SomeWater.o AllWater.o ObjectsList.o Character.o final.o -o FINAL

Rooms: Rooms.h Rooms.cpp
	g++ Rooms.h Rooms.cpp -o Rooms
	
#Ship: Ship.h Ship.cpp
	#g++ Ship.h Ship.cpp -o Ship

NoWater: NoWater.h
	g++ NoWater.h -o NoWater
	
SomeWater: SomeWater.h SomeWater.cpp
	g++ SomeWater.h SomeWater.cpp -o SomeWater
	
AllWater: AllWater.h AllWater.cpp
	g++ AllWater.h AllWater.cpp -o AllWater
	
ObjectsList: ObjectsList.h ObjectsList.cpp
	g++ ObjectsList.h ObjectsList.cpp -o Objects
	
Character: Character.h Character.cpp
	g++ Character.h Character.cpp -o Character
	
#createShip: CreateShip.h CreateShip.cpp
	#g++ CreateShip.h CreateShip.cpp -o CreateShip

final: final.cpp
	g++ final.cpp -o final
