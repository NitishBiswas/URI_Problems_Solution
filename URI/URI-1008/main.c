#include <stdio.h>
main()
{
    int basicSalary,result;
    printf("Enter Basic Salary Of An Employee : ");
    scanf("%d",&basicSalary);
    if(basicSalary>10000&&basicSalary<=15000){
       result = ((basicSalary*10)/100)+basicSalary;
    }else if(basicSalary>15000){
        result = ((basicSalary*15)/100)+basicSalary;
    }
    printf("Gross Salary : %d\n",result);
    return 0;
}
