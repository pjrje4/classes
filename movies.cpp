#include "movies.h"
#include <iostream>

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif


using namespace std;
// output fields: title, director, year, duration, rating
void Movies::getInfo() {
        //cout << this->getTitle() << " " << this->year << " " << this->publisher << " " << this->rating << endl;
	cout << this->getTitle() << " " << this->getYear() << " " << this->getDirector() << " " << this->getDuration() << " " << this->getRating() << endl;
}
Movies::Movies() { // constructor asked whenever a new movie is made
	char tempBuff[80];
        cout << "Please enter the director:  ";
        cin.getline(tempBuff, 79);
        this->setDirector(tempBuff);

        cout << "Please enter the duration:  ";
        cin.getline(tempBuff, 79);
        this->setDuration(tempBuff);

        cout << "Please enter the rating:  ";
        cin.getline(tempBuff, 79);
        this->setRating(tempBuff);
}
Movies::~Movies() { // destructor
        cout << "Movies destructor called" << endl;
}

//getters and setters
char* Movies::getDirector() {
        return this->director;
}
void Movies::setDirector(char* inDirector) {
        strcpy(this->director, inDirector);
}
char* Movies::getDuration() {
        return this->duration;
}
void Movies::setDuration(char* inDuration) {
        strcpy(this->duration, inDuration);
}
char* Movies::getRating() {
        return this->rating;
}
void Movies::setRating(char* inRating) {
        strcpy(this->rating, inRating);
}

