#include "lib.h"
Group::Group() 
{
	size = 0;
	data = nullptr;
}
Group::Group(int n_size, int n_number) 
{
	size = n_size;
	number = n_number;
	cout << "!Ãðóïïà êîíñòðóêòîðîâ áûëà âûçâàíà" << endl;
}
Group::~Group() { cout << "!Ãðóïïà äåñòðóêòîðîâ áûëà âûçâàíà" << endl; }
int Group::get_size() { return size; }
int Group::get_number() { return number; }
Student* Group::get_data() { return data; }
void Group::set_size(int new_size) { size = new_size; }
void Group::set_number(int new_number) { number = new_number; }
void Group::insert(Student* new_Student) 
{
	Student* backup = new Student[size];
	for (int i = 0; i < size; i++) 
	{
		backup[i] = data[i];
	}
	data = new Student[size + 1];
	data[size] = *(new_Student);
	for (int i = 0; i < size; i++) 
	{
		data[i] = backup[i];
	}
	size++;
}
void Group::insert(int ind) {
	Student backup;
	Student* buff;
	for (int i = ind; i < size - 1; i++) {
		backup = data[i];
		data[i] = data[i + 1];
		data[i + 1] = backup;
	}
	buff = new Student[size - 1];
	for (int i = 0; i < size - 1; i++) {
		buff[i] = data[i];
	}
	data = new Student[size - 1];

	for (int i = 0; i < size - 1; i++) {
		data[i] = buff[i];
	}
	size--;
}
void Group::show() {
	cout << "Íîìåð ãðóïïû: " << number << endl;
	if (size == 0) {
		//cout << "There is nothing to show" << endl;
		//exit(0);
	}
	else {
		cout << "Ñðåäíèé áàëë: " << aver() << endl;
	}

	for (int i = 0; i < size; i++) {
		cout << endl << i + 1 << ")";
		data[i].show();
	}
}
float Group::aver() {
	float av = 0;
	for (int i = 0; i < size; i++) {
		av += data[i].av_mark();
	}
	return av / size;
}
