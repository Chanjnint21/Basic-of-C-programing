// write program to convert kilograms to Pounds

#include <stdio.h>
int main() {
  float kilo; // kilogram can be in float number
  printf("Enter kilogram: ");
  scanf("%f", &kilo);
  float pound = kilo*2.204;
  printf("Convert kilogram to pound = %.2f lb", pound);
  return 0;
}