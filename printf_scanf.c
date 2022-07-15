// printf() and scanf() is one of the commonly used function to take input and show output

#include <stdio.h>

int main(){ 

  int num1, num2;
  printf ("Enter num1:");
  scanf("%d", & num1); 
  printf("Enter num2:");
  scanf("%d", & num2);
  printf("\nEnter num1 : %d", num1 );
  printf("\nEnter num2 : %d", num2 );

  return 0;
  
}