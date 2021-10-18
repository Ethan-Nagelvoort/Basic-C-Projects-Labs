#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
extern int checkEndianess() ;
int main()
{
int check; // Variable: "check" will hold the value returned by the function
//Call the function to check the Endianness here
// This is where your function will be called to return endianness
check = checkEndianess ();
if (check == 0)
{
printf ("Machine/Architecture is Little Endian. \n");
}
else
{
printf ("Machine/Architecture is Big Endian. \n");
}
return(0);
}
