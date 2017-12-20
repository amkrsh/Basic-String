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
	content = new char[size + 1];
	memcpy(content, input, size);
	content[size] = '\0';
}
String::String() {
	EmptyInitialization();
}
String::String(const char* input){
	if (input == nullptr) {
		EmptyInitialization();
		return;
	}

	size = strlen(input);
	Initialization(input);
}

String::String(const String& input) {

	size = input.size;
	Initialization(input.content);
}

String::~String() {
	delete[] content;
}

int String::Size() const {
	return size;
}

int String::GetLastError() const {
	return error;
}

String String::operator+(const String& additive) {

	int newSize = Size() + additive.Size();
	// + 1 for null terminator \0 
	char* newContent = new char[newSize + 1];
	memcpy(newContent, content, size);
	memcpy(newContent + size, additive.content, additive.size);
	newContent[newSize] = '\0';
	String result{ newContent };
	delete[] newContent;
	return result;
}
char String::operator [](const int index) {
	
	return content[index];
}