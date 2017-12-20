#include<algorithm>
#include<iostream>
#include "string.h"

using String = basic::String;

int String::error = 0;

void String::EmptyInitialization() {
	content = new char[1];
	content[0] = '\0';
}

void String::Initialization(const char* input) {
	content = new char[_size + 1];
	memcpy(content, input, _size);
	content[_size] = '\0';
}
String::String() {
	EmptyInitialization();
}
String::String(const char* input){
	if (input == nullptr) {
		EmptyInitialization();
		return;
	}

	_size = strlen(input);
	Initialization(input);
}

String::String(const String& input) {

	_size = input._size;
	Initialization(input.content);
}

String::~String() {
	delete[] content;
}

int String::size() const {
	return _size;
}

int String::GetLastError() const {
	return error;
}
char& String::at(int index) const {
	if (index >= _size)
		throw "Trying to acess basic::String character beyond it's length";
	return content[index];
}

String String::operator+(const String& additive) {

	int newSize = size() + additive.size();
	// + 1 for null terminator \0 
	char* newContent = new char[newSize + 1];
	memcpy(newContent, content, _size);
	memcpy(newContent + _size, additive.content, additive._size);
	newContent[newSize] = '\0';
	String result{ newContent };
	delete[] newContent;
	return result;
}
char String::operator [](const int index) const {
	
	return content[index];
}