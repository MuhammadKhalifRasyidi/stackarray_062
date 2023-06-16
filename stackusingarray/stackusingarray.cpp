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

	int push(int element) {
		if (top == 4) {
			cout << "number of data exceed the limit" << endl;
			return 0;
		}
	}
};