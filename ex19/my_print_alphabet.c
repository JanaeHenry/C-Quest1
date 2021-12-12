// a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter a.
//It will be followed by a \n (newline character)
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
     write(1, &c, 1);

}

void my_print_alphabet(){
    char c;
    for(c = 'a'; c <= 'z'; c++)
        my_putchar(c);
        my_putchar(012);

}
