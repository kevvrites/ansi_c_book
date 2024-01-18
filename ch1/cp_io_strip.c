#include <stdio.h>

int main()
{
    int cc, pc;
    
    pc = EOF;

    while ((cc = getchar()) != EOF) {
        if (cc == ' ' && pc == ' ') {
            continue;
        } else {
            putchar(cc);
        }
        pc = cc;
    }

    return 0;
}
