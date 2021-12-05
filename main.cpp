#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movies.h"



/*
 *
 *Justin
 *
 *
 */
using namespace std;

void addMedia(vector<Media*>*);
void delMedia(vector<Media*>*);
void searchMedia(vector<Media*>*);


int main() {
	vector<Media*>* media = new vector<Media*>();
	while (true) { //loop
		char input[20];
		cout << "Enter a command (ADD, SEARCH, DELETE, QUIT): ";
		cin.getline(input, 19);
		if (strcmp(input, "ADD") == 0) { //add students
			addMedia(media);
		}
		else if (strcmp(input, "SEARCH") == 0) { //print students
			searchMedia(media);
		}
		else if (strcmp(input, "DELETE") == 0) { //delete students
			delMedia(media);
		}
		else if (strcmp(input, "QUIT") == 0) { //quit program
			return 0;
        	}
	}
}

void addMedia(vector<Media*>* in) {
	char inTitle[80];
	char type[10];
	char inYear[10];

	cout << "What type of media is being added? (GAME, MUSIC, MOVIE):  ";
	cin.getline(type, 9);

	Media* m = NULL;
	if (strcmp(type, "GAME") == 0) {
		m = new Games();
	}
	else if (strcmp(type, "MUSIC") == 0) {
                m = new Music();
        }
	else if (strcmp(type, "MOVIE") == 0) {
                m = new Movies();
        }

	if (m != NULL) {
		in->push_back(m);
	}
}
void delMedia(vector<Media*>* in) {
	char inTitle[50];
	char inYear[10];
	char input[20];
	bool del = true;
	cout << "Search to delete by title or year? (TITLE, YEAR):  ";
	cin.getline(input, 19);
	if (strcmp(input, "TITLE") == 0) { //del by title
		cout << "Please enter title:  ";
                cin.getline(inTitle, 49);
                for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
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
                                for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
                                        if (strcmp((*i)->getTitle(), inTitle) == 0) { // if the input = year
						delete (*in)[index]; // will invoke all destructors
						                     // due to media destructor
								     // being virtual
						in->erase(i); // delete student
                                                del = true;
                                                break;
                                        }
					index++;
                                }
                                if (del == false) {
                                        break;
                                }
                        }
                }
        }
        else if (strcmp(input, "YEAR") == 0) { //print students
		cout << "Please enter year:  ";
		cin.getline(inYear, 9);
		for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
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
                		for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
                        		if (strcmp((*i)->getYear(), inYear) == 0) { // if the input = year

						delete (*in)[index]; // will invoke all destructors
						                     // due to media destructor
								     // being virtual
                                		in->erase(i); // delete student
						del = true;
	        	        	        break;
                        		}
                		}
				if (del == false) {
					break;
				}
			}
		}
        }
}

void searchMedia(vector<Media*>* in) {
        char inTitle[50];
        char inYear[10];
        char input[20];
        cout << "Search by title or year? (TITLE, YEAR):  ";
        cin.getline(input, 19);
        if (strcmp(input, "TITLE") == 0) { //by title
		cout << "Please enter title:  ";
                cin.getline(inTitle, 49);
                for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
			if (strcmp((*i)->getTitle(), inTitle) == 0) { // if the input = title
                                 (*i)->getInfo(); // output info
                        }
                }
        }
        else if (strcmp(input, "YEAR") == 0) { //by year
                cout << "Please enter year:  ";
                cin.getline(inYear, 9);
                for (vector<Media*>::iterator i = in->begin(); i != in->end(); i++) { //iterate vector
                        if (strcmp((*i)->getYear(), inYear) ==0) { // if the input = year
				(*i)->getInfo(); // output info
                        }
                }
        }
}


