#include<iostream>
using namespace std;

void timeForRest();

main()
{

 timeForRest();

}


void timeForRest()
{
int holidays;
int totalDays = 365;
int timeOfPlayInWorkingDays = 63 ;
int timeOfPlayInHolidays = 127;
int difference = 30000;
int workingDays;
int timeOfPlayFullYear;
int differenceFromTheNorm;
int timeInHours;
int timeInMinutes;

while(true)
{
cout << "Enter number of holidays:  ";
cin >> holidays;

workingDays = totalDays-holidays;
timeOfPlayFullYear = (workingDays*timeOfPlayInWorkingDays)+(holidays*timeOfPlayInHolidays);
differenceFromTheNorm = difference-timeOfPlayFullYear;
timeInHours = differenceFromTheNorm/60;
timeInMinutes = differenceFromTheNorm%60;

if(differenceFromTheNorm<0)
{
timeInHours=-timeInHours;
timeInMinutes=-timeInMinutes;

cout << "Tom will run away" << endl;
cout << "The difference is:  " << timeInHours <<" hours and "<<timeInMinutes << " minutes for play" << endl;
}

if(differenceFromTheNorm>=0)
{
cout << "Tom sleeps well" << endl;
cout << "The difference is:  " << timeInHours <<" hours and "<<timeInMinutes << " minutes less for play" << endl;
}
}

}