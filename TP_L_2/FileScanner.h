#pragma once
#include "lib.h"
class FileScanner
{
public:
	FileScanner();
	~FileScanner();
	void scan_text();
	bool finder(const string& str, char ch);
};
