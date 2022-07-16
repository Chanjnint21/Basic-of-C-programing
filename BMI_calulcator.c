// write code to find out your BMI resulth

#include <stdio.h>
#include <math.h>
int main(){
  float weight, height;
  printf("Enter weight:");
  scanf("%f", &weight);
  printf("Enter Height:");
  scanf("%f", &height);
  float BMI = weight/pow(height, 2);
  printf("%.1f",BMI);
  if(BMI<18.5){
    printf("Underweight");
  }   
  else if(BMI>=18.5&&BMI<=24.9){
    printf("Normal");
  }
  else if(BMI>=25.0&&BMI<=29.9){
    printf("Overweight");
  }
  else if(BMI>=30.0){
    printf("Obese");
  }
  return 0;
}