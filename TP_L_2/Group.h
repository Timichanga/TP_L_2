#pragma once
#include "lib.h"
class Group {
private:
	int size;
	Student* data;
	int number;
public:
	Group();
	Group(int n_size, int n_number);
	~Group();

	int get_size();
	int get_number();
	Student* get_data();

	void set_size(int new_size);
	void set_number(int new_number);

	//Student* operator[](int index);

	void insert(Student* new_Student);
	void insert(int ind);
	void show();
	float aver();
};
