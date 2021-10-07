#include "Classroll.h"

using namespace std;

int main()
{
	Classroll studentList("student.data");
	studentList.writeStudents(cout);
}

/*
Error. invalid maximum students entered. Default set.
Student Name           Assign Total     Test TotalGrade
Erik                            100            100    A
Kelli                            96             98    A
Tyler                            85             82    B
Chris                            66             61    C
Tom                              54             49    D
Kristi                           40             36    F
Number of students: 6
C:\Users\Erik\Desktop\School\CPA Program - Aug 8th CURRENT)\Second Year (Semester 3)\COMP333 (Obj Ori C++\Sept23Lab\Debug\Sept23Lab.exe (process 17164) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/