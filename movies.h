#include "media.h"

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

class Movies : public Media {
public:
	Movies(); // constructor
	~Movies(); // destructor
protected:
	char director[80]; // data that gets cleaned with erase
        char duration[80];
        char rating[80];
//getters and setters
        char* getDirector();
        void setDirector(char*);
        char* getDuration();
        void setDuration(char*);
        char* getRating();
        void setRating(char*);
        void getInfo(); //gets defined in movies.cpp

};

