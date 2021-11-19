#include "child.h"

child::child(int value, int secondvalue):parent(value) {
	id = value;
	second = secondvalue;
	cout << "In child contructor" << endl;
}
