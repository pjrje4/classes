#include "movies.h"
#include <iostream>

using namespace std;
// output fields: title, director, year, duration, rating
void Movies::getInfo() {
        //cout << this->getTitle() << " " << this->year << " " << this->publisher << " " << this->rating << endl;
	cout << this->getTitle() << " " << this->getYear() << " " << this->getDirector() << " " << this->getDuration() << " " << this->getRating() << endl;
}
Movies::Movies() {
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
Movies::~Movies() {
        cout << "Movies destructor called" << endl;
}


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

