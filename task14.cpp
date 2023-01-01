#include<iostream>
using namespace std;

void menu();
void aggregate();
void compare();


main()
{
  while(true)
{
 menu();
 aggregate();
 compare();
}

}

void menu()
{

cout << "*************************************" << endl;
cout << "*                                   *" << endl;
cout << "*    University of Engineering      *" << endl;
cout << "*                                   *" << endl;
cout << "*     And Technology, Lahore        *" << endl;
cout << "*                                   *" << endl;
cout << "*************************************" << endl;
}

void aggregate()
{
string name;
float matric;
float inter;
float ecat;
float matricPercentage;
float interPercentage;
float ecatPercentage;
float totalPercentage;

cout << "Enter your name:  ";
cin >> name;
cout << "Enter your Matric marks:  ";
cin >> matric;
cout << "Enter your Inter marks:  ";
cin >> inter;
cout << "Enter your Ecat marks:  ";
cin >>ecat;

ecatPercentage=(ecat*100/400)*0.4;
matricPercentage=(matric*100/1100)*0.3;
interPercentage=(inter*100/550)*0.3;
totalPercentage=ecatPercentage+matricPercentage+interPercentage;

cout << "Your aggregate is:  ";
cout << totalPercentage << endl;
}

void compare()
{
string nameStudent1;
string nameStudent2;
float ecatMarks1;
float ecatMarks2;

cout << "Enter first student name:  ";
cin >> nameStudent1;
cout << "Enter first student ecat marks:  ";
cin >> ecatMarks1;
cout << "Enter second student name:  ";
cin >> nameStudent2;
cout << "Enter second student ecat marks:  ";
cin >> ecatMarks2;

if(ecatMarks1>ecatMarks2)
{
cout << "First roll number is of:  ";
cout << nameStudent1;
}

if(ecatMarks1<ecatMarks2)
{
cout << "First roll number is of:  ";
cout << nameStudent2;
cout << endl;
}

}