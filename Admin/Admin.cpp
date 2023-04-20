#include "Admin.h"


Admin::Admin(std::string name, std::string password) {

}

bool Admin::Login(std::string name, std::string password) {
	
}

void Admin::addCourse(Course newCourse) {
	
	availableCourses.push_back(newCourse);
}

void Admin::viewCourseStudents(Course specific) {

	for (int i = 0; i < students.size(); i++)
		std::cout << students[i].getName() << " " << students[i].getID() << std::endl;

}

void Admin::viewStudentCourses(Student specific) {

	for (int i = 0; i < students.size(); i++)
		std::cout << finishedCourses[i].getName << " " << finishedCourses[i].getHours << std::endl;
}
