#include <iostream>
using namespace std;
void longestTime(int min , int hours);
main()
{
  int min;
  int hours;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> min;
  longestTime(min,hours);
}
void longestTime(int min, int hours)
{
 int hour_to_min;
 hour_to_min=hours*60;
 if(hour_to_min > min)
 {
  cout <<hours;
 }
 else
 {
  cout <<min;
 }
}