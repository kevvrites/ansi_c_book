#include <stdio.h>

int main()
{
    int c;
    
    c = getchar () != EOF;
    printf("%d", c);

    return 0;
}
