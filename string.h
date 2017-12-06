#pragma once
#ifndef __STRING_H
#define __STRING_H

namespace basic {
	class String {

	public:
		String();
		String(const char* input);
		String(const String& input);
		int Size() const;
		int GetLastError() const;

		String operator +(const String& additive);
		~String();
	private:
		char* content;
		int size = 1;
		static int error;
		void EmptyInitialization();
		void String::Initialization(const char* input);
	};
}
#endif