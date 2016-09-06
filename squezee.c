#include <stdio.h>

void squez(char a[], int s)
{
    int i,j;
    for(i=j=0;a[i]!='\0';i++)
    {
        if (a[i]!=s)
            a[j++]=a[i];
    }
    a[j]='\0';
    printf("%s",a);
}
main()
{
    char test[]="squeeze";
    squez(test,'z');
}
