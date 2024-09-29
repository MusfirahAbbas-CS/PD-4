#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
 int x=0;
 int y=0;
 system("cls");
 gotoxy(0,0);
 printMaze();

}
void printMaze()
{
   cout <<"#######################" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#######################" <<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}