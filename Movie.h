#include <iostream>
#include "Customer.h"

using namespace std;

class Movie{
	private:
		int MovieID;
		string Title;
		string Genre;
		int Duration;
		Customer *cus;
	public:
		Movie();
		Movie(int id, string M_title, string M_genre, int M_duration, Customer *M_cus);
		void setMovieDetails(int pid, string ptitle, string pgenre, int pduration, Customer *pcus);
		int getMovieID();
		string getMovieTitle();
		string getMovieGenre();
		int getMovieDuration();
		~Movie();	
};
