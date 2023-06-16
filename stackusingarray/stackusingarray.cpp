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

		top++; //step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nstack is empty. cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nthe popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3 decremenet
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackarray stack;
	char ch;
	while (true)
	{
		cout << endl << "Menu";
		cout << endl << "1. Menambahkan data kedalam list" << endl;
		cout << "2. Menghapus data dari dalam list" << endl;
		cout << "3. Menampilkan semua data didalam list" << endl;
		cout << "5. Keluar" << endl;
		cout << endl << "Masukkan pilihan (1-5): ";
		cin >> ch;
		switch (ch)
		{
		case '1':
		{
			int element;
			cout << "masukan element" << endl;
			cin >> element;
			stack.push(element);

		}
		break;

		case '2':
		{
			if (stack.empty())
			{
				cout << endl << "List Kosong" << endl;
				break;
			}
			else
				stack.pop();
		
		}
		break;

		case '3':
		{

			stack.display();

		}
		break;

		case '5':
		{
			exit(0);
		}
		break;
	defaul:
		{
			cout << "Pilihan salah !." << endl;
		}
		break;
		}
	}
}