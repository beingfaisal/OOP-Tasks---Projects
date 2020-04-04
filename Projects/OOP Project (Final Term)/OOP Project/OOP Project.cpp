
#include <iostream>
#include "song.h"
#include "Playlist.h"
#include <string>

int main()
{
	//declaring an object of playlist
	playlist p;


	//declaring objects of class Song and giving them the values 
	Song s1("Perfect","Ed Sheeran");
	Song s2("On My Way", "Alan Walker");
	Song s3("Attention", "Charlie Puth");
	Song s4("See you Again", "Charlie Puth");



	//the functions used are adding songs to playlist 
	p.addSong(s1);
	p.addSong(s2);
	p.addSong(s3);
	
	//using overloaded operator to add another song in playlist
	p = p + s4;
	
	//the fuction output all the songs
	p.showall();
	cout << endl;
	
	//the function that shows te status of the playlist
	p.showstatus();
	cout << endl;
	
	//using fuction to delete a song from playlist
	p.DeleteSong(s1);
	p.showall();
	cout << endl;
	
	//using overloaded operator of minus to delete song from playlist
	p = p - s2;
	p.showall();
	cout << endl;
	
	//using the fuction to play songs upto required number
	p.play(8);







	return 0;
}

