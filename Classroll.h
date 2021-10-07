#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;

//Sept 23rd Lab exercise 2
//Author: Erik Van Vliet

const int SIZE = 25;

struct StudentRec
{
	string studentName;
	int assignmentTotal, testTotal;
	char letterGrade;

};

class Classroll
{
public:
	void showGrade(string /*studentName*/) const;
	int getNoStudents() const { return noStudents; }
	string getCourseName() const { return courseName; }
	void changeGrade(string /*studentName*/, char /*studentGrade*/);
	void writeStudents(ostream& /*output*/) const;
	

	Classroll(string /*fileName*/, int = 0 /*maxStudents*/);

private:
	string courseName;
	int maxStudents, noStudents;
	StudentRec students[SIZE];
	int searchStudent(string)const;

};

