#include <iostream>
using namespace std;
void possibleBonus(int a , int b);
main()
{
  int a;
  int b;
  cout << "Enter your position: ";
  cin >> a;
  cout << "Enter your friend's position: ";
  cin >> b;
  possibleBonus(a,b);
}
void possibleBonus(int a, int b)
{
 int c;
 c = b-a;
 if(c < 6)
 {
  cout << "true";
 }
 else
 {
  cout << "false";
 }
}