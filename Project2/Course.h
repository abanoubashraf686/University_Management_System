#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Course
{
	string name;
	bool isElective;
	string instructor;
	int MaxNumOfStud;
	int hours;
	vector<int>PreReqCourses;

public:

	void insert(string name, string instructor, int MaxNumOfStud, int hours, vector<int>PreReqCourses = {});
	void DisplayData();

};

