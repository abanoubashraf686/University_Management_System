#include "Course.h"

void Course::insert(int code, string name, string instructor, int MaxNumOfStud, int hours, vector<Course> PreReqCourses)
{

	this->code = code;
	this->name = name;
	this->instructor = instructor;
	this->MaxNumOfStud = MaxNumOfStud;
	this->hours = hours;
	this->PreReqCourses = PreReqCourses;

}

void Course::DisplayData()
{

	cout << "Course Code: " << this->code << "\n";

	cout << "Election Status: " << this->isElective << "\n";
	
	cout << "Course Name: " << this->name << "\n";
	
	cout << "Course Instructor: " << this->instructor << "\n";
	
	cout << "Course Capacity: " << this->MaxNumOfStud << "\n";
	
	cout << "Course Hours: " << this->hours << "\n";
	
	if (!PreReqCourses.empty()) {

		cout << "Pre Required Courses: ";
		for (int i = 0; i < PreReqCourses.size(); i++) {
			if (i == PreReqCourses.size() - 1) {
				cout << PreReqCourses[i].name;
			}
			else {
				cout << PreReqCourses[i].name << " - ";
			}
		}

	}
	else {

		cout << "No Required Courses!";

	}

	cout << "\n";

}
