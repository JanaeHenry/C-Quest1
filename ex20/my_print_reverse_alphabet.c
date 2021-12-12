//function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter z.
//It will be follow by a \n (newline character)

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
     write(1, &c, 1);

}

void my_print_reverse_alphabet(){
    char c;
    for(c = 'z'; c >= 'a'; c--)
        my_putchar(c);
        my_putchar(012);

}
