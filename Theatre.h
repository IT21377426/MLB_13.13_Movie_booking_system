#include<iostream>

class Theatre {
	private:
		int TheID;
		char TheName[20];
		char TheLoc[20];

	public:
		Theatre();
		Theatre(int tID, char tName[], char TLoc[]);
		void AddMovieShows();
		void AddMovieShowTimes();
		~Theatre();
};
