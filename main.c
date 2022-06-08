#include <stdio.h>
#include "module.h"

int main(void) {
    printf("hello, world!\n");

    struct point *pp;
    //start autocompletion by inserting pp->
    //nothing happens

    struct point p;
    //start autocompletion by inserting p.
    //nothing happens
    //BUT!
    //with p. (space)C^n and then backspace up to .
    //makes x and y appear!
}
