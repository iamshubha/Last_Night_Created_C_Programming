#include "stdio.h"
int main()
{
    int a;
    char str[200]; //include the [] this bracket the value means the total printed word.
    printf("Enter Your name: ");
    scanf("%s",str);
    printf("Enter Your age: ");
    scanf("%d",&a);

    printf("You Name is %s. \nYour age is  %d.\n",str,a);
    return 0;

}