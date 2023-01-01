#include<iostream>
using namespace std;
void discountedPrice(float dollars, string countryName);

main()
{
system("cls");
float dollars;
string countryName;


while(true){
cout <<"Enter country name:  ";
cin >> countryName;
cout << "Enter price in dollars:  ";
cin >> dollars;
discountedPrice(dollars, countryName);
}
}

void discountedPrice(float dollars, string countryName)
{
float price;
if(countryName=="pakistan")
{
price=dollars-((dollars*5)/100);
cout << "Discounted price is:  ";
cout << price << endl;

}

if(countryName=="ireland")
{
price=dollars-((dollars*10)/100);
cout << "Discounted price is:  " << endl;
cout << price;

}

if(countryName=="india")
{
price=dollars-((dollars*20)/100);
cout << "Discounted price is:  " << endl;
cout << price;

}

if(countryName=="england")
{
price=dollars-((dollars*30)/100);
cout << "Discounted price is:  " << endl;
cout << price;

}

if(countryName=="canada")
{
price=dollars-((dollars*45)/100);
cout << "Discounted price is:  " << endl;
cout << price;

}

}