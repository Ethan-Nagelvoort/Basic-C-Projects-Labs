#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int checkEndianess()
{
int num = 0x89AB;
int endian = 0;
char *check = (char*) &num;
if (*check == 0x89)
{
endian = 1;
}
if(*check == 0xAB)
{
endian = 0;
}
return endian;
}
