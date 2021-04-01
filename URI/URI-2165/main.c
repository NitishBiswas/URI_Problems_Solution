#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[501];
    int n=0,i;
    gets(T);
    for(i=0;T[i]!='\0';i++)
        n++;
    if(n<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    return 0;
}
