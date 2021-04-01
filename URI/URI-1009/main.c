#include <stdio.h>
 
int main() {
 
    char a[30];
    double salary,sell,total;
    gets(a);
    scanf("%lf%lf",&salary,&sell);
    total=((sell*15)/100)+salary;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}