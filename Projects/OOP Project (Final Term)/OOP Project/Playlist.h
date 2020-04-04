#pragma once
#include"song.h"
#define SONG_H

#include <iostream>

using namespace std;
//The song class is given in the header file that come pre built and so the header file of required file is given below.


//this the class Song
class playlist

{
private:
	
	//the data members which needs to be private are here. 
	//the variable that has the size of array 	
	int x;
	//this the array of class song;
	Song* arr;
	//the varuable that counts the number of songs in playlist
	int num;
	//the variable that keeps the index of the current song playing in playlist
	int current = 0;



public:
	//the default constructor
	playlist();

	//the fuction to add a song
	void addSong(const Song& s);
	
	//the funcyion to delete song 
	bool DeleteSong(const Song& s);

	//the fuction thst shows all of the songs in the playlist.
	void showall() const;

	//the fuction that plays the required number of songs in the playlist
	void play(int n);

	//the fuction that shows the current state of playlist
	void showstatus() const;

	//the overloade plus operator that adds song in the playlist
	friend playlist operator+(playlist p, Song s);

	//the overloaded minus fuction that deletes the required fuction from playlist 
	friend playlist operator-(playlist p, Song s);

	//the fuction that halfs the size of the playlist
	void hal();

	//the function that doubles the size of playlist
	void dub();

	



};

