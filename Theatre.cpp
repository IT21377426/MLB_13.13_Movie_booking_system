#include <cstring>
#include "Theatre.h"

Theatre::Theatre()
{
	TheID = 0;
	strcpy(TheName, "");
	strcpy(TheLoc, "");
}

Theatre::Theatre(int tID, char tName[], char TLoc[])
{
	TheID = tID;
	strcpy(TheName, tName);
	strcpy(TheLoc, TheLoc);
}

void Theatre::AddMovieShows()
{

}
void Theatre::AddMovieShowTimes()
{

}
Theatre::~Theatre()
{
	//Destructer
}

