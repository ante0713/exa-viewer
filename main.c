#include <stdio.h>

int main() {
    setvbuf(stdout, NULL, _IOLBF, 0);
    printf("Hello, World!\n");


    int c;
    while ((c = getchar()) != EOF) {
        //printf("%c\n", c);
    }
    return 0;

}