#include<stdio.h>
// Write C program to check a number is even or odd using ternary operator.
main()
{
      int num;
      printf("enter number =");
      scanf("%d",&num);
      
      (num %2==0) ? printf("%d number is even",num) : printf("%d number is odd",num);
}      
