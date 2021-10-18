/*
* BitFunctions.c
*
* Created on: September 9, 2019
* Author: Ethan Nagelvoort
*/
#include &quot;BitManipulation.h&quot;
#include &lt;stdio.h&gt;

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
for(int i=0; tmp&gt;0; i++)
{
count += (tmp &amp; 1);
tmp &gt;&gt;= 1;
}
return count;
}

//***********************************************************************************/
//*
//* setBit
//*
//* Description: The function sets the bit in the specified bit position in an to the specifid
//*value.
//* Preconditions: Value can be a 1 or 0. bitPosition will be between 0 and 31 (for integer
//*size argument)
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
int tmp = value&lt;&lt;(bitPosition-1);
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
tmp = tmp &amp; (tmp - 1);
}
return count;
}
/*
* BitManipulations.c
*
* Created on: September 9, 2019
* Author: Ethan Nagelvoort
*/
#include &lt;stdio.h&gt;
#include &quot;BitManipulation.h&quot;


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
numOnes = countNumberofOnes(&amp;Number);
setBit(&amp;Number, bitPosition,value); // set bit in bitposition to value
hDist = hammingDistance(input1, input2); // Calculates hamming distance
printf(&quot;\nHamming Distance between %d and %d is %d\n&quot;, input1, input2, hDist);
printf(&quot;\nThe number of Ones in %d&#39;s binary form is %d\n&quot;, num2, numOnes);
printf(&quot;\n%d after setBit function: %d&quot;, num2,Number);
return 0;
}
