
//the implementation file for playlist class


#include "Playlist.h"
#include"song.h"
using namespace std;


//the default constructor of the class
playlist::playlist()
{
	x = 2;
	arr = new Song[x];
	num = 0;
}


//the fuction to add a song in the playlist
void playlist::addSong(const Song& s)
{
	if (x == (num + 1))
	{
		//the function that doubles the size of playlist as the a song has been added in the playlist
		dub();
	}


	arr[num] = s;
	num++;

}




//the funcyion to delete song in the playlist 
bool playlist::DeleteSong(const Song& s)
{
	bool w = false;
	for (int i = 0; i <= num; i++)

	{
		if (arr[i] == s)
		{
			for (int z = i; z <= num; z++)
			{
				arr[z] = arr[z + 1];
			}
			num--;
			w = true;
			hal();
			break;
		}
		

	}
	if (w == true)
	{
		cout << "Song hasbeen Deleted" << endl;
	}
	else
	{
		w = false;
		cout << "Song not Found" << endl;
	}
	return w;
}



//the fuction thst shows all of the songs in the playlist.
void playlist:: showall() const 
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}

}




//the fuction that plays the required number of songs in the playlist

void playlist::play(int n)
{
	for (int i = 0; i < n; i++)
	{

		if (i == num)
		{
			i = 0;
			current = i;
			n = n - num;
		}
		cout << arr[i] << endl;
	}
}




//the fuction that shows the current state of playlist including its space, number of songs and current index of song

void playlist::showstatus() const
{
	cout << "The size of playlist is  " << x << endl;
	cout << "The number of songs are  " << num << endl;
	cout << "The current index is  " << current << endl;
}






//the function that doubles the size of playlist for purpose of addition
void playlist::dub()
{
	x = 2 * x;
	Song* arr2 = new Song[x];
	for (int i = 0; i <= num; i++)
	{
		arr2[i] = arr[i];

	}
	delete[] arr;
	arr = arr2;

}



//the function that halves the size of playlist for purpose of deletion
void playlist::hal()
{
	x = x - 2;
	Song* arr2 = new Song[x];
	for (int i = 0; i < num; i++)
	{
		arr2[i] = arr[i];
	}
	delete  [] arr;
	arr = arr2;
}



//the overloade plus operator that adds song in the playlist and is equivalent to addSong fuction
playlist operator+(playlist p, Song s)

{
	p.addSong(s);

	return p;

}



//the overloaded minus fuction that deletes the required fuction from playlist amd is equivalent to the deleteSong function
playlist operator-(playlist p, Song s)

{
	p.DeleteSong(s);
	return p;

}

