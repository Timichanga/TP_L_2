#include "lib.h"
FileScanner::FileScanner() { cout << "---Constructor FileScanner was called---" << endl; }
FileScanner::~FileScanner() { cout << "---Destructor FileScanner was called---" << endl; }
void FileScanner::scan_text()
{
	try
	{
		ifstream inp("data.txt");
		while (inp.peek() != EOF) {
			string first;
			string second;
			inp >> first >> second;
			if (!first.empty() && !second.empty()) {
				cout << second << ' ' << first << ' ';
			}
			else {
				cout << first;
			}
		}
	}
	catch (const char* ex) { cout << "Error: " << ex << endl; }
	cout << endl;
}
