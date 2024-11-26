#include "MovieHeader.h"

// Constructor: Initializes the Movie object with the given details
Movie::Movie(string title, int year, string director, string genre, string actors) {
    this->title = title;            // Initialize title
    this->yearOfRelease = year;     // Initialize year of release
    this->director = director;      // Initialize director's name
    this->genre = genre;            // Initialize genre
    this->actors = actors;          // Initialize actors
}

// Getter for the movie's title
string Movie::getTitle() const {
    return title;
}

// Getter for the year of release
int Movie::getYear() const {
    return yearOfRelease;
}

// Getter for the director's name
string Movie::getDirector() const {
    return director;
}

// Getter for the movie's genre
string Movie::getGenre() const {
    return genre;
}

// Getter for the actors' names
string Movie::getActors() const {
    return actors;
}

// Setter for the movie's title
void Movie::setTitle(string title) {
    this->title = title;
}

// Setter for the year of release
void Movie::setYear(int year) {
    this->yearOfRelease = year;
}

// Setter for the director's name
void Movie::setDirector(string director) {
    this->director = director;
}

// Setter for the movie's genre
void Movie::setGenre(string genre) {
    this->genre = genre;
}

// Setter for the actors' names
void Movie::setActors(string actors) {
    this->actors = actors;
}

