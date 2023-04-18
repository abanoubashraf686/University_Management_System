#include<iostream>
#include<vector>
#include"Course.h"

using namespace std;

int main() {

	vector<Course>courses;

	Course c1;
	c1.insert("Programming 1", "Dr.Hanan", 500, 3);

	Course c2;
	c2.insert("Programming 2", "Dr.Hanan", 1000, 6, { 0 });

	Course c3;
	c3.insert("Programming 3", "Dr.Hanan", 2000, 12, { 0,1 });

	courses.push_back(c1);
	courses.push_back(c2);
	courses.push_back(c3);

	for (auto course : courses) {
		course.DisplayData();
		cout << "############################\n";
	}

	//courses[0].DisplayData();

	return 0;

}