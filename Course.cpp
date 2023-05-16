#include "Course.h"
#include <iostream>
#include <string.h>

using namespace std;

void Course::setCourseDetails(int cID, char name[], int cPoints) {
	courseID = cID;
	strcpy_s(courseName, name);
	creditPoints = cPoints;
}

void Course::setCreditPoint() {
	cout << "Input new " << courseName << " credit points : ";
	cin >> creditPoints;
}


void Course::displayCourseDetails() {
	cout << endl << endl;
	cout << "CourseId = " << courseID << endl;
	cout << "CourseName = " << courseName << endl;
	cout << "CreditPoints= " << creditPoints << endl;
}
