#include "music.h"
#include <iostream>

using namespace std;
// output fields: title, artist, year, duration, publisher
void Music::getInfo() {
        //cout << this->getTitle() << " " << this->year << " " << this->publisher << " " << this->rating << endl;
	cout << this->getTitle() << " " << this->getYear() << " " << this->getArtist() << " " << this->getDuration() << " " << this->getPublisher() << endl;




}
Music::Music() {
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
Music::~Music() {
        cout << "Music destructor called" << endl;
}


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

