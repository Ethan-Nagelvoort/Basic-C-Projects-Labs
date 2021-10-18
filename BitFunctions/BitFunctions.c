/*
* BitFunctions.c
*
* Created on: September 9, 2019
* Author: Ethan Nagelvoort
*/
#include <BitManipulation.h>
#include <stdio.h>


//***********************************************************************************
*/
//
// countNumberofOnes
//
// Description: Counts the number of 1s in an integer passed as argument
// Preconditions:input argument is passed as a pointer
// Postconditions:the number of 1s returned
//
// Calls: N/A
// Called by: main
//
//***********************************************************************************/
int countNumberofOnes(uint32_t *intData)
{
// Write a function that counts number of 1s in an integer passed
int count = 0;
int tmp = *intData;
for(int i=0; tmp>0; i++)
{
count += (tmp & 1);
tmp >>= 1;
}
return count;
}

//***********************************************************************************/
//*
//* setBit
//*
//* Description: The function sets the bit in the specified bit position in an to the specifidvalue.
//* Preconditions: Value can be a 1 or 0. bitPosition will be between 0 and 31 (for integersize argument)
//* Postconditions: The bit of *inData at position biPosition will be set to value
//*
//* Calls: N/A
//* Called by: main
//*
//***********************************************************************************/
void setBit(uint32_t *intData, uint32_t bitPosition,uint32_t value)
{
// Please do not treat the integer as arrays , this question is about bit manipulations
// You will need to use bitwise operations to solve this question
int tmp = value<<(bitPosition-1);
*intData=*intData^tmp;
}
//***********************************************************************************/
//* hammingDistance
//* Description: Function hammingDistance calculates total number of bits
//* that need to be inverted in order to change inData1 into inData2 or vice versa.
//* Preconditions: The function accepts two unsigned integers as input
//* Postconditions: The function returns the hamming distance
//*
// Calls: N/A
// Called by: main
//*
//***********************************************************************************/
int hammingDistance(uint32_t inData1, uint32_t inData2)
{
int count = 0;
int tmp = inData1^inData2;
while (tmp != 0)
{
count++;
tmp = tmp & (tmp - 1);
}
return count;
}
