#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void bubble_sort(double *array, int size) {
	for ( int a = 0; a<size - 1; ++a) {
		for ( int j = 0; j<size - a - 1; ++j) {
			if (array[j]>array[j + 1]) {
				swap(array[j + 1], array[j]);
			}
		}
	}
}

bool read(double *array, int size) {
	string stroka;
	getline(cin, stroka);
	istringstream stream(stroka);
	for (int a = 0; a<size; ++a) {
		if (!(stream >> array[a])) {
			cout << "An error has occured while reading input data." << endl;
			return false;
		}
	}
	return true;
}

int main() {
	int size;
	string s;
	getline(cin, s);
	istringstream stream(s);
	if (!(stream >> size)) {
		cout << "An error has occured while reading input data." << endl;
		return -1;
	}
	double *array = new double[size];
	if (read(array, size)) {
		bubble_sort(array, size);
		for (int a = 0; a<size; ++a) {
			cout << array[a] << " ";
		}
	}
	delete[]array;
	return 0;
}
