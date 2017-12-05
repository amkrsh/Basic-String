#pragma once
#ifndef __STRING_H
#define __STRING_H

namespace basic {
	class String {

	public:
		String();
		String(char* input);
		int Size() const;
		int GetLastError() const;
		String operator +(const String& additive);
		~String();
	private:
		char* content = "";
		int size = 0;
		static int error;
	};
}
#endif