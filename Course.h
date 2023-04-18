#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Course
{

	int code;
	string name;
	bool isElective;
	string instructor;
	int MaxNumOfStud;
	int hours;
	vector<Course>PreReqCourses;

public:

	void insert(int code, string name, string instructor, int MaxNumOfStud, int hours, vector<Course>PreReqCourses = {});
	void DisplayData();

};

