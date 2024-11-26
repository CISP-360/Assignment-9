/******************************************************************************

Names: Alecxander Cooper
Date: 11/23/2024
Class: CISP 360

Version: 1.000

*******************************************************************************/

#include <iostream>
#include "movieHeader.h"


// constructors
// Movie::Movie is a way to comunicate between the cpp file and the header file.
// making a class is like making a library I think.

// default
Movie::Movie() {
	title = "";
	year = 0;
	director = "";
	genre = "";
	actor = "";
}

// normal constructor
Movie::Movie(std::string title, int year, std::string director, std::string genre, std::string actor) {
	this->title = title;
	this->year = year;
	this->director = director;
	this->genre = genre;
	this->actor = actor;
}



/*// normal functions
void displayMovieDetails(Movie title, Movie year, Movie director, Movie genre, Movie actor) {
	std::cout << "\nMovie Details:\n";
	std::cout << "Title: " << movie.getTitle() << "\n";
	std::cout << "Year of Release: " << movie.getYear() << "\n";
	std::cout << "Director: " << movie.getDirector() << "\n";
	std::cout << "Genre: " << movie.getGenre() << "\n";
	std::cout << "Actors: " << movie.getActor() << "\n";
}

void inputMovieDetails() {
        std::cout << "Enter Movie Title: ";
        std::getline(std::cin, title);

        std::cout << "Enter Year of Release (YYYY): ";
        std::cin >> yearOfRelease;
        std::cin.ignore(); // Clear the newline character from the buffer

        std::cout << "Enter Director's Name: ";
        std::getline(std::cin, director);

        std::cout << "Enter Genre: ";
        std::getline(std::cin, genre);

        std::cout << "Enter Actors (comma-separated): ";
        std::getline(std::cin, actor);
    }
*/
// Getters
std::string Movie::getTitle() {
	return title;
}

int Movie::getYear() {
	return year;
}

std::string Movie::getDirector() {
	return director;
}

std::string Movie::getGenre() {
	return genre;
}

std::string Movie::getActor() {
	return actor;
}

// Setters
void Movie::setTitle(std::string title) {
	this->title = title;
}

int Movie::setYear(int year) {
	this->year = year;
	return 0;
}

void Movie::setDirector(std::string director) {
	this->director = director;
}

void Movie::setGenre(std::string genre) {
	this->genre = genre;
}

void Movie::setActor(std::string actor) {
	this->actor = actor;
}

