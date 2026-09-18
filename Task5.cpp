#include<iostream>
#include <cassert>
using namespace std;


void testSortedArray(){

	int a1[5] = { 1, 2, 3, 4, 5 };
	assert(isSorted(a1, 5) == true);
	cout << "Test 1 Pass\n";
}

void testUnsortedArray(){

	int a2[5] = { 5, 2, 3, 1, 4 };
	assert(isSorted(a2, 5) == true);
	cout << "Test 2 Pass\n";
}

void testDuplicateValues(){

	int a3[5] = { 1, 2, 2, 4, 5 };

	assert(isSorted(a3, 5) == true);
	cout << "Test 3 Pass\n";
}

void testSingleElement(){

	int a4[1] = { 1 };
	assert(isSorted(a4, 1) == true);
	cout << "Test 4 Pass\n";
}

void testDescendingArray(){

	int a5[5] = { 5,4,3,2,1 };
	assert(isSorted(a5, 5) == true);
	cout << "Test 5 Pass\n";
}

void testNegativeValues(){

	int a6[5] = { 1,2,-3,4,-5 };
	assert(isSorted(a6, 5) == true);
	cout << "Test 6 Pass\n";
}

void testMultipleDuplicateValues(){

	int a7[5] = { 5,5,5,5,5 };
	assert(isSorted(a7, 5) == true);
	cout << "Test 7 Pass\n";
}

void testNoValues(){

	int a8[1] = {};
	assert(isSorted(a8, 1) == true);
	cout << "Test 8 Pass\n";
}

int main() {

	testSortedArray();
	testUnsortedArray();
	testDuplicateValues();
	testSingleElement();
	testDescendingArray();
	testNegativeValues();
	testMultipleDuplicateValues();
	testNoValues();

	return 0;
}

