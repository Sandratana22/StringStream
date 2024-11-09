// StringStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stream.h"

using namespace std;

int main() {

	double number = 13.34; 

	std::string str = stringStream::function(number); 

	cout << str << endl; 
	return 0;
}
