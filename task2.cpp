#include <iostream>
using namespace std;
void reverse(string input);
void reverse1(string input);
main(){
string input;
cout <<"Enter 'true' or 'false': ";
cin>> input;
if(input == "true"){
  reverse(input);
}
if(input == "false"){
 reverse1(input);
}
}
void reverse(string input){
cout <<"false";
}
void reverse1(string input){
cout <<"true";
}