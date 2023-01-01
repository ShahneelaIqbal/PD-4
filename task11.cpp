#include<iostream>
using namespace std;
void challenged(int speed);


main()
{
system("cls");
int speed;
while(true)
{
cout << "Enter speed of the car:  ";
cin >> speed;
challenged(speed);
}

}

void challenged(int speed)
{

if(speed==100)
{
cout << "Perfect! You're going good." << endl;
}

if(speed!=100)
{
cout << "Halt....YOU WILL BE CHALLENGED!!!" << endl;
}

}