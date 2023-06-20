#include <ncurses.h>

int main(void) {
    // Initialize ncurses
    initscr();

    // Turn off character echoing
    noecho();

    move(3, 0);

    // Print msg to the screen
    printw("Hello ncurses!");;

    mvprintw(3, 20, "%d", getch());

    refresh();

    // Await user input;
    getch();


    // End ncurses
    endwin();

    return 0;
}