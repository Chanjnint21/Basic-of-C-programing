

/*
The code below can find the root of X
- Note that it can't be reprsent as complex number
*/
#include <stdio.h>
#include <math.h>

int main(){ 
  printf("ax^2 +bx +c = 0\n"); //show quadratic   equations formula
    float a, b, c;
    float  discm, root1, root2; 
    printf("Enter value of a:  "); scanf("%f", &a); 
    printf("Enter value of b:  "); scanf("%f", &b);
    printf("Enter value of c:  "); scanf("%f", &c);

    discm = sqrt(pow(b,2) - 4 * a * c); // discm = discriminant
    root1 = (- b + discm) / 2*a; 
    root2 = (- b - discm) / 2*a;

    if (discm > 0) //if discriminant is positive
    {
        printf("Result of Root1: %.1f", root1);
        printf("\nResult of Root2: %.1f", root2);
    }
    else if (discm == 0) //if discriminant equal 0
    {
        printf("This equation has one Root: %.1f", root1);
    }
    else  //if discriminant is negative
        printf("This equation has no roots");
    return 0;
}