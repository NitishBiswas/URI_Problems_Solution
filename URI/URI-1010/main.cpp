#include<stdio.h>

int main(){

 

    int product1_code, product1_number, product2_code, product2_number;

    float product1_price, product2_price, product1_paid, product2_paid, all_paid;

    scanf("%d %d %f", &product1_code, &product1_number, &product1_price);

    scanf("%d %d %f", &product2_code, &product2_number, &product2_price);

 

    product1_paid = product1_number * product1_price;

    product2_paid = product2_number * product2_price;

    all_paid = product1_paid + product2_paid ;

 

    printf("VALOR A PAGAR: R$ %.2f\n", all_paid);

}