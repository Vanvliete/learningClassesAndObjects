#include "Classroll.h"

//Implementation file for Classroll
//Author:Erik Van Vliet
//Sept 30th, 2021

Classroll::Classroll(string passedFile, int passedMaxStudents)
{
	int index = 0;


	if (passedMaxStudents > SIZE || passedMaxStudents <= 0)
	{
		cout << "Error. invalid maximum students entered. Default set.";
		maxStudents = SIZE;
	}
	else
	{
		maxStudents = passedMaxStudents;
	}

	ifstream fin("student.data");

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