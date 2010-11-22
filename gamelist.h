/*
 *  gamelist.h
 *  CabGL
 *
 *  Created by Matthew Capodarco on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef GAMELIST_H
#define GAMELIST_H

#include <string>
#include <list>

using namespace std;

class GameList {
public:
	GameList();	//default constructor
	~GameList();
	int Initialize(string path);	//generate the rom list based on the directory provided
	string GetGame();
	list<string> GetList(int num);	//Get a list of num games
	void MovePosition(int num, int dir);
	void PrintList();
	void Search(string gamename);
private:
	list<string> games;
	list<string>::iterator _current;
};

#endif