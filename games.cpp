#include "games.h"
#include <iostream>

using namespace std;

Games::Games() {
        char tempBuff[80];
        cout << "Please enter the publisher:  ";
	cin.getline(tempBuff, 79);
	this->setPublisher(tempBuff);

        cout << "Please enter the rating:  ";
        cin.getline(tempBuff, 79);
        this->setRating(tempBuff);

}
Games::~Games() {
	cout << "Games destructor called" << endl;
}
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
