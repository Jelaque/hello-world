#include <stdio.h>

int low(int a)
{
    if (a>='A' && a<='Z')
        return a + 'a' - 'A';
    else
        return a;
}

main()
{
    printf("%c",low('Q'));
}
