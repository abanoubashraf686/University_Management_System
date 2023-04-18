#include<iostream>
#include<vector>
#include"Course.h"

using namespace std;

int main() {

	vector<Course>arr;

	Course obj1;
	obj1.insert(6, "Programming 1", "DR.Hanan", 1000, 400);

	Course obj3;
	obj3.insert(1, "Programming 3", "DR.Hanan", 500, 2);

	Course obj2;
	obj2.insert(5, "Programming 2", "DR.Hanan", 400, 2, { obj1 , obj3 });


	arr.push_back(obj1);
	arr.push_back(obj3);
	arr.push_back(obj2);

	for (auto course : arr) {
		course.DisplayData();
		cout << "================================" << "\n";
	}

	//obj2.DisplayData();

	return 0;

}