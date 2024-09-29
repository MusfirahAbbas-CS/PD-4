#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y); 
void H();
void A();
void S();
void N();
main()
{
       int x,y;
       system("cls");
       gotoxy(1,1);
       H();
       gotoxy(1,2);
       A();
       gotoxy(1,3);
       S();   
       gotoxy(1,4);
       S();
       gotoxy(1,5);
       A();
       gotoxy(1,6);
       N();   
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void H()
{
     cout <<"H";

}
void A()
{
     cout <<"A";

}
void S()
{
     cout <<"S";

}
void N()
{
     cout <<"N";

}



 