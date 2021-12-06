#include "games.h"
#include <iostream>

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

using namespace std;

Games::Games() { // constructor that asks for publishers and rating
        char tempBuff[80];
        cout << "Please enter the publisher:  ";
	cin.getline(tempBuff, 79);
	this->setPublisher(tempBuff);

        cout << "Please enter the rating:  ";
        cin.getline(tempBuff, 79);
        this->setRating(tempBuff);

}
Games::~Games() { // destructor that does nothing because I don't have any memory to clean up
	cout << "Games destructor called" << endl;
}
//getters and setters
char* Games::getPublisher() {
        return this->publisher;
}
void Games::setPublisher(char* inPublisher) {
        strcpy(this->publisher, inPublisher);
}
char* Games::getRating() {
        return this->rating;
}
void Games::setRating(char* inRating) {
        strcpy(this->rating, inRating);
}



// output fields: title, year, publisher, rating
void Games::getInfo() {
	cout << this->getTitle() << " " << this->getYear() << " " << this->getPublisher() << " " << this->getRating() << endl;

}
