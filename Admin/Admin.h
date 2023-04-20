#pragma once
#include "Course.h"
#include "Student.h"
#include <string>
#include <vector>
#include<iostream>

class Admin {

	std::string name;
	std::string password;
	std::vector<Course> availableCourses;
	std::vector<Course> finishedCourses;
	std::vector<Student> students;

public:
	
	Admin(std::string name, std::string password);
	bool Login(std::string name, std::string password);
	void addCourse(Course);
	void viewCourseStudents(Course);
	void viewStudentCourses(Student);


};

