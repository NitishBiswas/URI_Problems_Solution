#include <stdio.h>

int main()
{
    char s[600];
    gets(s);
    printf((strlen(s)>80)?"NO\n":"YES\n");
    return 0;
}
