// Write a program that reads in the radius and length of a cylinder and computes the area and volume using the following formulas:

#include <stdio.h>
#define PI 3.14

int main(){
    float area, rad, vol, length; // rad = radius, vol = volume 


    printf("Enter your radius: ");
    scanf("%f", &rad);
    printf("Enter your length: ");
    scanf("%f", &length);

    area = rad * rad * PI; 
    vol = area * length;
    
    printf(" area output: %.3g cm\n", area); //display output of area prompts
    printf("volume output: %.3g cm", vol); // display output of  volume prompts 
    return 0;
}

// Use math.h
/*

#include <math.h>
#include <stdio.h>
int main() {
  float area, rad, vol, length; // rad = radius, vol = volume

  printf("Enter your radius: ");
  scanf("%f", &rad);
  printf("Enter your length: ");
  scanf("%f", &length);

  area = pow(rad, 2) * M_PI; // M_PI = import the value of pi from math.h 
  vol = area * length;   

  printf("area output: %.3g cm\n", area); // display output of area prompts
  printf("volume output: %.3g cm", vol);  // display output of  volume prompts
  return 0;

}

*/