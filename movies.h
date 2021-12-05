#include "media.h"
class Movies : public Media {
public:
	Movies();
	~Movies();
protected:
	char director[80];
        char duration[80];
        char rating[80];

        char* getDirector();
        void setDirector(char*);
        char* getDuration();
        void setDuration(char*);
        char* getRating();
        void setRating(char*);
        void getInfo(); //gets defined in movies.cpp

};

