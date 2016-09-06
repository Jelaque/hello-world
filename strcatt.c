#include <stdio.h>

void strca(char a[],char b[])
{
    int i,j;
    i=j=0;
    while(a[i]!='\0')
        ++i;
    while((a[i++]=b[j++]) != '\0')
        ;
    printf("%s",a);
}
main()
{
    char a[]="hola";
    char b[]="yadios";
    strca(a,b);
}
