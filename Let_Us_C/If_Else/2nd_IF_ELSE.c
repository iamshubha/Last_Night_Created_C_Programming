#include<stdio.h>
int main(){
    int qthy, dis = 0;
    float rate, totl;
    printf("Enter quantity :");
    scanf("%d",&qthy);
    printf("Enter rate:");
    scanf("%f",&rate);
    
    if (qthy>1000)
    {
        dis =10;

        totl = (qthy*rate)-(qthy*rate*dis/100);
        printf("Total expences = Rs. %f",totl);
    }
    else
    {
        printf("statement flse");
    }
    
    
}