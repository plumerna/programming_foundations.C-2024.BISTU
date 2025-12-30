#include <stdio.h>
/*
int main()
{
    int n;
    printf("Please input a month number:");
    scanf("%d",&n);
    printf("Output:\n");
    if(n<1||n>=13)
        printf("Input Error! ");
    else
        printf("This month's English name is ");
        switch(n)
        {
        case 1:
            printf("January.");break;
        case 2:
            printf("February.");break;
        case 3:
            printf("March.");break;
        case 4:
            printf("April.");break;
        case 5:
            printf("May.");break;
        case 6:
            printf("June.");break;
        case 7:
            printf("July.");break;
        case 8:
            printf("August.");break;
        case 9:
            printf("September.");break;
        case 10:
            printf("October.");break;
        case 11:
            printf("November.");break;
        case 12:
            printf("December.");break;
        }
    return 0;
}
*/
#include<stdio.h>
int main()
{
  char months[][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
  int month;
  printf("Please input a month number:\n");
  scanf("%d",&month);
         if((month<1)||(month>12))
         {
           printf("Output:\nInput Error!\n");
         }
         else
         {
           printf("Output:\nThis month's English name is %s. \n",months[month-1]);
         }
         return 0;
}
