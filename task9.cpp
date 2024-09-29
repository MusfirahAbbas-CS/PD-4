#include <iostream>
using namespace std;
void covid(int poeple, int tp);
main()
{
 int poeple;
 int tp;
 cout <<"Number of poeple in the household: ";
 cin >> poeple;
 cout <<"Number of rolls of TP: ";
 cin >> tp;
 covid(poeple,tp);
}
void  covid(int poeple,int tp)
{
 int days;
 days=(500*tp)/(poeple*57);
 if(days < 14)
 {
  cout <<"Your TP will only last "<<days<<" days,buy more!";
 }
 if(days >=14)
 {
  cout <<"Your TP will last "<<days<<" days,no need to panic!";
 }
}
  