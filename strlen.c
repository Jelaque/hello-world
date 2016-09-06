#include <stdio.h>

int str_len(char a[])
{
    int i=0;

    while (a[i]!='\0')
        ++i;
    return i;
}

main()
{
    printf("%d",str_len("hello"));
}
