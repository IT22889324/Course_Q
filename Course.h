#pragma once
class Course
{
	private:
		int courseID;
		char courseName[20];
		int creditPoints;
	public:
		void setCourseDetails(int cID, char name[], int cPoints);
		void displayCourseDetails();
		void setCreditPoint();
};

