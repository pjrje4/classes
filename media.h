#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

class Media {
public:
	Media();
	virtual ~Media();
	virtual void getInfo()=0;
	char* getTitle();
	void setTitle(char*);
	char* getYear();
	void setYear(char*);

protected:
        char title[80];
        char year[10];
};
#endif

