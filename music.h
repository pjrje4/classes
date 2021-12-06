#include "media.h"

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

class Music : public Media { //music sub class
public:
	Music(); //constructor
	~Music();//deconstructor
protected:
	char publisher[80]; //cleared with erase()
        char duration[80];
	char artist[80];
//getters and setters
        char* getPublisher();
        void setPublisher(char*);
        char* getDuration();
        void setDuration(char*);
	char* getArtist();
        void setArtist(char*);
        void getInfo(); //gets defined in music.cpp
};

