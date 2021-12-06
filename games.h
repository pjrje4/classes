#include "media.h"

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

class Games : public Media {
public:
	Games(); // constructor
	~Games(); // destructor
protected:
#if 0
        ~Media();  <- mistakes have been made
#endif
	char publisher[80];
	char rating[80];
	// data that gets cleaned automatically with erase
	char* getPublisher();
        void setPublisher(char*);
        char* getRating();
        void setRating(char*);
	void getInfo(); //gets defined in games.cpp
};
