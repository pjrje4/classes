#include "media.h"
class Games : public Media {
public:
	Games();
	~Games();
protected:
#if 0
        ~Media();
#endif
	char publisher[80];
	char rating[80];
	
	char* getPublisher();
        void setPublisher(char*);
        char* getRating();
        void setRating(char*);
	void getInfo(); //gets defined in games.cpp
};
