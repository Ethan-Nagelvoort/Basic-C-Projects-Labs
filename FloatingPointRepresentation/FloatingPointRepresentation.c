#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//***********************************************************************************
*/
//
// FloatCompare
//
// Description:Accepts two float numbers and compares them bitwise based
// on floating point representations. This function will have
// to convert the given numbers into IEEE floating
// representation and then do bitwise comparison
// Preconditions:two input arguments are passed
// Postconditions:Returns 1,-1 or 0 based on the comparison
// 1 if number1&gt;number2
// -1 if number2&gt;number1
// 0 if equal
// Calls: N/A
// Called by: main
//
//***********************************************************************************/
//Struct is used in order to create bit fields for the mantissa, exponent, and sign
//This allows us to use bit operators in the functions
//Union is used to combine a float and the struct together
typedef union{
float f;
struct
{
unsigned int m : 23;//mantissa
unsigned int e : 8; //exponent
unsigned int s : 1; //sign
} sem;
}fpr;

int bitwisedFloatCompare(float number1,float number2)
{
//Write the function to compare and return the corresponding value
int compare = 0;//compare will stay 0 if the floats are equal
fpr f1;
fpr f2;
f1.f = number1;
f2.f = number2;
/*compares the sign bits of the two floats,
the float with the smallest sign bit is larger*/
if(f1.sem.s > f2.sem.s)
{
compare = -1;
}
else if(f2.sem.s > f1.sem.s)
{
compare= 1;
}
else
{
/*compares the exponent parts of the two floats,
the float with the bigger exponent is larger*/
for(int i = 0; i<8; i++)
{
if((f1.sem.e << i) &gt; (f2.sem.e << i))
{
compare = 1;
break;
}
else if((f2.sem.e << i) &gt; (f1.sem.e << i))
{
compare = -1;
break;
}
else
{
/*compares the mantissa/fraction parts of the two floats,
the float with the bigger exponent is larger*/
for(int i=0; i<23; i++)
{
if((f1.sem.m << i) > (f2.sem.m << i))
{
compare = 1;
break;
}
else if((f2.sem.m << i) &gt; (f1.sem.m << i))
{
compare = -1;
break;


}
}
}
}
}
return compare;

}
//***********************************************************************************
*/
//
// FloatRepresentation
//
// Description:Accepts one float number and prints out the bit form of that
// floating point number. It is printed out as the sign bit
// first and then the exponent portion and then the assumed
// bit, combined with the significant.
// Preconditions:one input arguemnt is passed
// Postconditions:Prints out the Floating point number in its bit form.
// Prints the sign bit in parenthisis first and then
// the exponent bit and then the assumed bit in
// parenthisis with the significant.
//
// Calls: N/A
// Called by: main
//
//***********************************************************************************/
void printFloatRepresentation(float number)
{
fpr f1;
f1.f = number;
printf("(%d)\t"f1.sem.s);//prints sign bit
int i = 8;//number of bits in exponent
//prints exponent bit
for(i--; i>=0; i--)
{
int ex = f1.sem.e;
if( (ex >>i) &amp; 1)
printf("1");
else
printf("0");
}
printf("\t(1)");
int ii = 23;//number of bits in mantissa
//prints significant/mantissa/fraction bits
for(ii--;ii>=0;ii--)
{
int man = f1.sem.m;
if((man >> ii) & 1)
printf("1");
else
printf("0");
}
}
