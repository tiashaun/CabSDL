/*
 *  gamelist.h
 *  CabGL
 *
 *  Created by Matthew Capodarco on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include <string>
#include <list>

using namespace std;

class GameList {
public:
	GameList();	//default constructor
	~GameList();
	int Initialize(string path);	//generate the rom list based on the directory provided
	string GetGame();
	void MovePosition(int num, int dir);
	void PrintList();
private:
	list<string> games;
	list<string>::iterator _current;
};