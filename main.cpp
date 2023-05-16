#include <iostream>
#include "Course.h"
#include <string.h>
using namespace std;

int main()
{
    Course c1, c2, c3, c4;

    c1.setCourseDetails(1050, (char *) "OOC", 2);
    c2.setCourseDetails(1060, (char*) "SPM", 3);
    c3.setCourseDetails(1100, (char*) "IWT", 4);
    c4.setCourseDetails(1090, (char*) "ISDM", 4);

    c1.setCreditPoint();
    c2.setCreditPoint();
    c3.setCreditPoint();
    c4.setCreditPoint();

    c1.displayCourseDetails();
    c2.displayCourseDetails();
    c3.displayCourseDetails();
    c4.displayCourseDetails();


}

