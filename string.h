#pragma once
#ifndef __STRING_H
#define __STRING_H

namespace basic {
	class String {

	public:
		String();
		String(const char* input);
		String(const String& input);
		int size() const;
		int GetLastError() const;
		char& at(int index) const;


		String operator +(const String& additive);
		char operator [](const int index) const;
		~String();
	private:
		char* content;
		int _size = 1;
		static int error;
		void EmptyInitialization();
		void String::Initialization(const char* input);
	};
}
#endif