#include<iostream>
using namespace std;

void reverse(string output);

main()
{
system("cls");
string input;
while(true)
{
cout << "Enter true or false:  ";  
cin >> input;
reverse(input);
}

}

void reverse(string output)
{
if(output=="true")
{
 cout << "False" << endl;
}

if(output=="false")
{
 cout << "True" << endl;
}



}