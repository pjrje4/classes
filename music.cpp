#include "music.h"
#include <iostream>

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

using namespace std;
// output fields: title, artist, year, duration, publisher
void Music::getInfo() {
        //cout << this->getTitle() << " " << this->year << " " << this->publisher << " " << this->rating << endl;
	cout << this->getTitle() << " " << this->getYear() << " " << this->getArtist() << " " << this->getDuration() << " " << this->getPublisher() << endl;




}
Music::Music() { // constructor and ask info
	char tempBuff[80];
        cout << "Please enter the artist:  ";
        cin.getline(tempBuff, 79);
        this->setArtist(tempBuff); 

        cout << "Please enter the duration:  ";
        cin.getline(tempBuff, 79);
        this->setDuration(tempBuff);

	cout << "Please enter the publisher:  ";
        cin.getline(tempBuff, 79);
        this->setPublisher(tempBuff);
}
Music::~Music() { // destructor
        cout << "Music destructor called" << endl;
}

//getters and setters
char* Music::getArtist() {
        return this->artist;
}
void Music::setArtist(char* inArtist) {
        strcpy(this->artist, inArtist);
}
char* Music::getDuration() {
        return this->duration;
}
void Music::setDuration(char* inDuration) {
        strcpy(this->duration, inDuration);
}
char* Music::getPublisher() {
        return this->publisher;
}
void Music::setPublisher(char* inPublisher) {
        strcpy(this->publisher, inPublisher);
}

