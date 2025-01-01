#include <stdio.h>
#include <string.h>
#include <ncurses.h>

int main()
{
       initscr();
       addstr("Welcome to Info Manager!\n");
       move(0, 25);
       getch();
       refresh();
       return 0;
}