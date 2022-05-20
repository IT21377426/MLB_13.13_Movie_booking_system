#include "Movie.h"

Movie::Movie()
{

}

Movie::Movie(int id, string M_title, string M_genre, int M_duration, Customer *M_cus)
{
	MovieID = id;
	Title = M_title;
	Genre = M_genre;
	Duration = M_duration;
	cus = M_cus;
	cus -> ViewAvailableMovies(this);
}

void Movie::setMovieDetails(int pid, string ptitle, string pgenre, int pduration, Customer *pcus)
{
	
}

int Movie::getMovieID()
{
	
}

string Movie::getMovieTitle()
{
	
}

string Movie::getMovieGenre()
{
	
}

int Movie::getMovieDuration()
{
	
}

Movie::~Movie()
{
	//Destructor
}
