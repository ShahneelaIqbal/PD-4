#include<iostream>
using namespace std;

void totalPrice(float red, float white, float tulip);


main()
{
system("cls");
float red;
float white;
float tulip;

while(true)
{
cout << "Number of red roses:  ";
cin >> red;
cout << "Number of white roses:  ";
cin >> white;
cout << "Number of tulip roses:  ";
cin >> tulip;
totalPrice(red, white, tulip);
}

}

void totalPrice(float red, float white, float tulip)
{
float priceRed;
float priceWhite;
float priceTulip;
float price;

priceRed=red*2.00;
priceWhite=white*4.10;
priceTulip=tulip*2.50;
price=priceRed+priceWhite+priceTulip;
float discountedPrice;

if(price>200)
{
discountedPrice=price-((price*20)/100);

cout <<"Total amount is:  " ;
cout <<price << endl;
cout << "Payable amount is:  " ;
cout << discountedPrice << endl;
}

if(price<200)
{
cout << "Payable amount is:  ";
cout << price << endl;
}




}


