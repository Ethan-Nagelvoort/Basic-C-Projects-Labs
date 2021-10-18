/*
* BitManipulations.c
*
* Created on: September 9, 2019
* Author: Ethan Nagelvoort
*/
#include <stdio.h>
#include "BitManipulation.h"
int main(int *argc, char **argv)
{
uint32_t Number;
uint32_t bitPosition;
uint32_t value;
int numOnes;
uint32_t input1 = 152; //binary is 10011000
uint32_t input2 = 130; //binary is 10000010
uint32_t hDist;

value = 1;
bitPosition = 21;
Number = 15345;
int num2 = Number;
numOnes = countNumberofOnes(&Number);
setBit(&Number, bitPosition,value); // set bit in bitposition to value
hDist = hammingDistance(input1, input2); // Calculates hamming distance
printf("\nHamming Distance between %d and %d is %d\n", input1, input2, hDist);
printf("\nThe number of Ones in %d's binary form is %d\n", num2, numOnes);
printf("\n%d after setBit function: %d", num2,Number);
return 0;
}
