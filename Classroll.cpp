#include "Classroll.h"

//Implementation file for Classroll
//Author:Erik Van Vliet
//Sept 30th, 2021

Classroll::Classroll(string passedFile, int passedMaxStudents)
{
	int index = 0;


	if (passedMaxStudents > SIZE || passedMaxStudents <= 0)
	{
		cout << "Error. invalid maximum students entered. Default set." << endl;
		maxStudents = SIZE;
	}
	else
	{
		maxStudents = passedMaxStudents;
	}

	ifstream fin(passedFile);

	if (!fin.is_open())
	{
		cout << "Error, file did not open properly.";
		system("pause");
		exit(-1);
	}

	for (index = 0; index < maxStudents; index++)
	{

		getline(fin, students[index].studentName);
		if (fin.eof())
			break;

		fin >> students[index].assignmentTotal;
		fin >> students[index].testTotal;
		fin >> students[index].letterGrade;
		fin.ignore(80, '\n');
	}

	noStudents = index;


}

void Classroll::writeStudents(ostream& output) const
{
	int length;
	output << left << setw(20) << "Student Name"
		<< right << setw(15) << "Assign Total"
		<< setw(15) << "Test Total"
		<< setw(5) << "Grade"
		<< endl;

	for (length = 0; length < noStudents; length++)
	{
		output << left << setw(20) << students[length].studentName
			<< right << setw(15) << students[length].assignmentTotal
			<< setw(15) << students[length].testTotal
			<< setw(5) << students[length].letterGrade
			<< endl;
	}

	output << "Number of students: " << length;
}