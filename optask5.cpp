#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y); 
main()
{
       int x=100,y=25;
       system("cls");
       gotoxy(x,y);
       cout <<"MUSFIRAH";
         




}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

 