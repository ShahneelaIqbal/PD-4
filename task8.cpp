#include<iostream>
using namespace std;

void isEqual(int x, int y);

main()

{
system("cls");
int firstInt;
int secondInt;

while(true){
cout << "Enter first integer:  ";
cin >> firstInt;
cout << "Enter second integer:  ";
cin >> secondInt;
isEqual(firstInt, secondInt);
}

}

void isEqual(int x, int y)
{

if(x==y)
{
 cout << "True" << endl;
}

if(x!=y)
{

 cout << "False" << endl;
}




}