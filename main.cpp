#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movies.h"



#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

using namespace std;
//declare functions
void addMedia(vector<Media*>&);
void delMedia(vector<Media*>&);
void searchMedia(vector<Media*>&);


int main() { //main
	vector<Media*> media; //holds all pointers to media
	while (true) { //loop
		char input[20];
		cout << "Enter a command (ADD, SEARCH, DELETE, QUIT): ";
		cin.getline(input, 19); //user input
		if (strcmp(input, "ADD") == 0) { //add media
			addMedia(media);
		}
		else if (strcmp(input, "SEARCH") == 0) { //search media
			searchMedia(media);
		}
		else if (strcmp(input, "DELETE") == 0) { //delete media
			delMedia(media);
		}
		else if (strcmp(input, "QUIT") == 0) { //quit program
			return 0;
        	}
	}
}

void addMedia(vector<Media*>& in) { //adding a media
	char inTitle[80];
	char type[10];
	char inYear[10];

	cout << "What type of media is being added? (GAME, MUSIC, MOVIE):  ";
	cin.getline(type, 9); // user input

	Media* m = NULL; // new media type
	if (strcmp(type, "GAME") == 0) { //ask the type
		m = new Games();
	}
	else if (strcmp(type, "MUSIC") == 0) {
                m = new Music();
        }
	else if (strcmp(type, "MOVIE") == 0) {
                m = new Movies();
        }

	if (m != NULL) { //if it has a type push it
		in.push_back(m);
	}
}
void delMedia(vector<Media*>& in) { //search and delete media
	char inTitle[50];
	char inYear[10];
	char input[20];
	bool del = true;
	cout << "Search to delete by title or year? (TITLE, YEAR):  ";
	cin.getline(input, 19); // user input
	if (strcmp(input, "TITLE") == 0) { //del by title
		cout << "Please enter title:  ";
                cin.getline(inTitle, 49); // user input title
                for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
                        if (strcmp((*i)->getTitle(), inTitle) == 0) { // if the input = title
                                 (*i)->getInfo(); // output info
                        }
                }
                cout << "Delete these entries? (Y / N):  ";
                cin.getline(input, 19);
                if (strcmp(input, "Y") == 0) { //del confirmed
                        while (del == true){
				int index = 0;
                                del = false;
                                for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
                                        if (strcmp((*i)->getTitle(), inTitle) == 0) { // if the input = title
						delete in[index]; // will invoke all destructors
						                  // due to media destructor
								  // being virtual
						in.erase(i); // delete media from vector
                                                del = true;
                                                break;
                                        }
					index++; // index in vector
                                }
                                if (del == false) { // if nothing deleted leave loop
                                        break;
                                }
                        }
                }
        }
        else if (strcmp(input, "YEAR") == 0) { //delete by year
		cout << "Please enter year:  ";
		cin.getline(inYear, 9); // input year
		for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
                	if (strcmp((*i)->getYear(), inYear) ==0) { // if the input = year
				 (*i)->getInfo(); // output info
			}
		}
		cout << "Delete these entries? (Y / N):  ";
		cin.getline(input, 19);
		if (strcmp(input, "Y") == 0) { //del confirmed
			while (del == true){
				int index = 0;
				del = false;
                		for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
                        		if (strcmp((*i)->getYear(), inYear) == 0) { // if the input = year

						delete in[index]; // will invoke all destructors
						                  // due to media destructor
								  // being virtual
                                		in.erase(i); // delete media
						del = true;
	        	        	        break;
                        		}
                		}
				if (del == false) { // if nothing has been deleted
					break;
				}
			}
		}
        }
}

void searchMedia(vector<Media*>& in) {  //search by year or title
        char inTitle[50];
        char inYear[10];
        char input[20];
        cout << "Search by title or year? (TITLE, YEAR):  ";
        cin.getline(input, 19);  //user input title or year
        if (strcmp(input, "TITLE") == 0) { //by title
		cout << "Please enter title:  ";
                cin.getline(inTitle, 49);
                for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
			if (strcmp((*i)->getTitle(), inTitle) == 0) { // if the input = title
                                 (*i)->getInfo(); // output info
                        }
                }
        }
        else if (strcmp(input, "YEAR") == 0) { //by year
                cout << "Please enter year:  ";
                cin.getline(inYear, 9);
                for (vector<Media*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
                        if (strcmp((*i)->getYear(), inYear) ==0) { // if the input = year
				(*i)->getInfo(); // output info
                        }
                }
        }
}


