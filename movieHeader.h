/******************************************************************************

Names: Alecxander Cooper
Date: 11/23/2024
Class: CISP 360

Version: 1.000

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

class Movie {
private: // variables stored privately
	std::string title;
	int year;
	std::string director;
	std::string genre;
	std::string actor;

public: // public functions
	Movie(std::string title, int year, std::string director, std::string genre, std::string actor); // constructor
	Movie(); // default constructor
	// getters
	std::string getTitle();
	int getYear();
	std::string getDirector();
	std::string getGenre();
	std::string getActor();
	// setters
	void setTitle(std::string title);
	int setYear(int year);
	void setDirector(std::string director);
	void setGenre(std::string genre);
	void setActor(std::string actor);

	// normal functions
	void inputMovieDetails();
	void displayMovieDetails();
};