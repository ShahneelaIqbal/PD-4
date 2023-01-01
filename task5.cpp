#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void name();

main()
{

 system("cls");
 name();
 



}


void name()

{
gotoxy(35,10);
cout << " .     .     .     .      .    ...          " ;gotoxy(35, 11);
cout << " . .  ..    . .    . .    .   .   .         " ;gotoxy(35, 12);
cout << " .  .  .   .   .   .  .   .  .     .        " ;gotoxy(35, 13);
cout << " .     .   . . .   .   .  .  .     .        " ;gotoxy(35, 14);
cout << " .     .   .   .   .    . .  .     .        " ;gotoxy(35, 15);
cout << " .     .   .   .   .     ..   .   .         " ;gotoxy(35, 16);
cout << " .     .   .   .   .      .    ...          " ;gotoxy(35, 17);
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

