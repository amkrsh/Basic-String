#include "string.h"
#include <iostream>


int main(int argc, char argv[]) {

	basic::String s1{ "ble" };
	basic::String s2{ "bly" };
	basic::String s3{ "bla" };
	basic::String s4 = s1 + s2 + s3;
	std::cin.get();
	return 0;
}