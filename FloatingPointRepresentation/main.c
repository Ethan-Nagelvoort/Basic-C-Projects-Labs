#include <stdio.h>
extern int bitwisedFloatCompare(float number1, float number2);
extern void printFloatRepresentation(float number);
int main(){
  float number1;
  float number2;
  float number3;
  
  int comparison;
  
  number1 = 56;
  number2 = 56;
  number3 = 8;
  
  comparison = bitwisedFloatCompare(number1, number2); //Compare the two floating point numbers
  
  if(comparison == 1)
    printf("%f is greater than %f\n",number1, number2);
  else if(comparison == -1)
    printf("%f is greater than %f\n",number2, number1);
  else if(comparison == 0)
    printf("%f and %f are equal\n", number1, number2);
  else
    printf("Error\n");
  printf("The floating point representation of %f is below:\n", number3);
  printFloatRepresentation(number3);
}
