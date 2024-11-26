/******************************************************************************

Names: Alecxander Cooper
Date: 11/23/2024
Class: CISP 360

Version: 1.000

*******************************************************************************/

#include <iostream>
#include "movieHeader.h"

int main() {
	Movie movie; // declaring the class 

	std::cout << "what are the details of the movie?: \n";
	std::string inputTitle;
	std::cout << "Enter title: ";
	std::getline(std::cin, inputTitle);
	movie.setTitle(inputTitle); // Set the name using the setter

	int inputYear;
	std::cout << "Enter year: ";
	std::cin >> inputYear;
	std::cin.ignore();
	movie.setYear(inputYear); // Set the name using the setter
	

	std::string inputDirector;
	std::cout << "Enter director: ";
	std::getline(std::cin, inputDirector);
	movie.setDirector(inputDirector); // Set the name using the setter

	std::string inputGenre;
	std::cout << "Enter genre: ";
	std::getline(std::cin, inputGenre);
	movie.setGenre(inputGenre); // Set the name using the setter

	std::string inputActors;
	std::cout << "Enter actor: ";
	std::getline(std::cin, inputActors);
	movie.setActor(inputActors); // Set the name using the setter


// display data
	std::cout << "\nMovie Details:\n";
	std::cout << "Title: " << movie.getTitle() << "\n";
	std::cout << "Year of Release: " << movie.getYear() << "\n";
	std::cout << "Director: " << movie.getDirector() << "\n";
	std::cout << "Genre: " << movie.getGenre() << "\n";
	std::cout << "Actors: " << movie.getActor() << "\n";
}