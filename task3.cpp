#include<iostream>
using namespace std;
float discount(string country_name,int ticket_price)
{
float discount;

float discounted_price;
	if(country_name == "Pakistan"||"pakistan"){
 discount=ticket_price*5/100;
 discounted_price=ticket_price-discount;
 return discounted_price;
 
}
if(country_name == "Ireland"){
 discount=ticket_price*10/100;
 discounted_price=ticket_price-discount;
 return discounted_price;
}
if(country_name == "India"){
 discount=ticket_price*20/100;
 discounted_price=ticket_price-discount;
 return discounted_price;
}
if(country_name == "England"){
 discount=ticket_price*30/100;
 discounted_price=ticket_price-discount;
 return discounted_price;
}
if(country_name == "Canada"){
 discount=ticket_price*45/100;
 discounted_price=ticket_price-discount;
 return discounted_price;
}

}

main(){

string country_name;
int ticket_price;
cout <<"Enter country's name: ";
cin>> country_name;
cout <<"Enter ticket price in dollars: $";
cin >> ticket_price;
cout <<"Final ticket price after discount: $"<<discount(country_name,ticket_price);
}


