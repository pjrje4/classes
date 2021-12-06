#include <iostream>
#include <cstring>
#include "media.h"

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

using namespace std;

Media::Media() { //constructor whenever a new media is made (inputs for title and year)
	char tempBuff[80];
	cout << "Please enter the title:  ";
        cin.getline(tempBuff, 79); 
	this->setTitle(tempBuff);
        cout << "Please enter the year:  ";
        cin.getline(tempBuff, 79);
        this->setYear(tempBuff);
}
Media::~Media() { // destructor
        cout << "Media destructor called" << endl;
}
//getters and setters
char* Media::getTitle() {
	return this->title;
}
void Media::setTitle(char* inTitle) {
	strcpy(this->title, inTitle);
}
char* Media::getYear() {
	return this->year;
}
void Media::setYear(char* inYear) {
	strcpy(this->year, inYear);
}
