#include "string.h"
#include <iostream>


int main(int argc, char argv[]) {

	basic::String s1{ "ble" };
	basic::String s0{ nullptr };
	basic::String s2{ "bly" };
	basic::String s3{ "bla" };
	basic::String s4 = s1 + s2 + s3;

	const basic::String s5{ "b" };
	std::cout << s5.Size() << std::endl;
	return 0;
}