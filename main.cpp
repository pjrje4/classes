#include <iostream>
#include <cstring>

using namespace std;

int main() {
	while (true) { //loop
		char input[20];
		cout << "Enter a command (ADD, SEARCH, DELETE, QUIT): ";
		cin >> input;
		if (strcmp(input, "ADD") == 0) { //add students
			addStudent(students);
		}
		else if (strcmp(input, "SEARCH") == 0) { //print students
			printStudent(students);
		}
		else if (strcmp(input, "DELETE") == 0) { //delete students
			deleteStudent(students);
		}
		else if (strcmp(input, "QUIT") == 0) { //quit program
			return 0;
        	}
	}
}
