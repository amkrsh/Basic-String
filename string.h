#pragma once
#ifndef __STRING_H
#define __STRING_H

namespace basic {
	class String {

	public:
		String();
		String(const char* input);
		int Size() const;
		int GetLastError() const;
		void EmptyInitialization();
		String operator +(const String& additive);
		~String();
	private:
		char* content;
		int size = 1;
		static int error;
	};
}
#endif