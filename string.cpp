#include<algorithm>
#include "string.h"

using String = basic::String;

int String::error = 0;

String::String() {
	content = "uninitialized";
}
String::String(char* input) :content(input){
	if (input == nullptr) {
		content = "";
		error = 5;
	}
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

	int newSize = this->Size() + additive.Size();
	char* newContent = new char[newSize];
	std::copy(this->content, this->content + this->Size(), newContent);
	std::copy(additive.content, additive.content + additive.Size(), newContent + this->Size());
	String result(newContent);
	delete[] newContent;
	return result;
}