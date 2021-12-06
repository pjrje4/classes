#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif


class Media { // parent class
public:
	Media(); // constructor
	virtual ~Media(); // destructor virtual so that destructors on child classes get called
	virtual void getInfo()=0; // virtual get info that is defined by the subclasses
	//getters and setters
	char* getTitle();
	void setTitle(char*);
	char* getYear();
	void setYear(char*);

protected:
        char title[80]; // cleaned up when erase is called
        char year[10];
};
#endif

