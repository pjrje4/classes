#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media() {
	char tempBuff[80];
	cout << "Please enter the title:  ";
        cin.getline(tempBuff, 79); // change to cin.getline
	this->setTitle(tempBuff);
        cout << "Please enter the year:  ";
        cin.getline(tempBuff, 79);
        this->setYear(tempBuff);
}
Media::~Media() {
        cout << "Media destructor called" << endl;
}

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
