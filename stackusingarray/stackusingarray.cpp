#include <iostream>
#include <string>

using namespace std;

class stackarray {
private:
	int stack_array[5];
	int top = -1;

public:
	//constructor
	stackarray() {
		top = -1;
	}
};