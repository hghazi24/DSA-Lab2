#include<iostream>
using namespace std;

void analyze_pointer(int* ptr) {

	cout << "Address: " << ptr << endl;
	cout << "Integer: " << *ptr << endl;
}

int main() {

	int iValue = 5;
	int* ptri = &iValue;

	analyze_pointer(ptri);

	int* x = new int;
	*x = 4;

	analyze_pointer(x);
	return 0;
}