#include "media.h"
class Music : public Media {
public:
	Music();
	~Music();
protected:
	char publisher[80];
        char duration[80];
	char artist[80];

        char* getPublisher();
        void setPublisher(char*);
        char* getDuration();
        void setDuration(char*);
	char* getArtist();
        void setArtist(char*);
        void getInfo(); //gets defined in music.cpp
};

