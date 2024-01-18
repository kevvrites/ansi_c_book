#include <stdio.h>

int main()
{
    int c, ns;
    ns = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
            ++ns;
    printf("%d\n", ns);
    return 0;
}

