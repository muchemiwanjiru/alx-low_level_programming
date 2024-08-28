// win_giga_millions.c
#include <stdlib.h>

int counter = 0;

int rand() {
    counter++;
    if (counter == 1) return 9;
    if (counter == 2) return 8;
    if (counter == 3) return 10;
    if (counter == 4) return 24;
    if (counter == 5) return 75;
    if (counter == 6) return 9;
    return rand(); // In case the program calls rand more times
}

