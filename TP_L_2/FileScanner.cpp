#include "lib.h"
FileScanner::FileScanner() { //cout << "Конструктор был вызван" << endl; 
}
FileScanner::~FileScanner() { //cout << "Деструктор был вызван" << endl; 
}
bool FileScanner::finder(const string& str, char ch) {
	for (char c : str) {
		if (c == ch) {
			return true;
		}
	}
	return false;
}
void FileScanner::scan_text() {
	try {
		ifstream inp("input.txt");
		while (inp.peek() != EOF) {
			string first;
			string second;
			inp >> first >> second;
			if (!first.empty() && !second.empty()) {
				int flag = false;
				for (char ch : {' ', '.', ',', '\n'}) {
					if (finder(first, ch) || finder(second, ch)) {
						flag = true;
						break;
					}
				}
				if (flag) {
					cout << first << ' ' << second << ' ';
				}
				else {
					cout << second << ' ' << first << ' ';
				}
			}
			else {
				cout << first;
			}
		}
	}
	catch (const char* ex) {
		cout << "Ошибка: " << ex << endl;
	}
	cout << endl;
}
