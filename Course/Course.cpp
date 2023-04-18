#include "Course.h"


void Course::insert(string name, string instructor, int MaxNumOfStud, int hours, vector<int> PreReqCourses)
{
	this->name = name;
	this->instructor = instructor;
	this->MaxNumOfStud = MaxNumOfStud;
	this->hours = hours;
	this->PreReqCourses = PreReqCourses;
}

void Course::DisplayData()
{

	cout << "Election Status: " << this->isElective << "\n";

	cout << "Course Name: " << this->name << "\n";

	cout << "Course Instructor: " << this->instructor << "\n";

	cout << "Course Capacity: " << this->MaxNumOfStud << "\n";

	cout << "Course Hours: " << this->hours << "\n";

	if (!PreReqCourses.empty()) {

		cout << "Pre Required Courses Codes: ";
		for (int i = 0; i < PreReqCourses.size(); i++) {
			if (i == PreReqCourses.size() - 1) {
				cout << PreReqCourses[i];
			}
			else {
				cout << PreReqCourses[i] << " - ";
			}
		}
	}
	else {

		cout << "No Required Courses!";

	}

	cout << "\n";

}
