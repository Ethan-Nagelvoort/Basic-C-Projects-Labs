/*********************************************************************
* SEGGER MICROCONTROLLER GmbH &amp; Co. KG *
* Solutions for real time microcontroller applications *
**********************************************************************
* *
* (c) 2014 - 2016 SEGGER Microcontroller GmbH &amp; Co. KG *
* *
* www.segger.com Support: support@segger.com *
* *
**********************************************************************
-------------------------- END-OF-HEADER -----------------------------
File : main.c
Purpose : Generic application start
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*********************************************************************
*
* main()
*
* Function description
* Application entry point.
*/
extern float computeArea(int *v1, int *v2, int shape) ;
extern int numTimesAppears(char *, char) ;
void main(void) {
int i;
char mystring[100]="Yusuf Ozturk";
char ch;
float area;
int length, height, diameter, base, side1, side2;
int count;
base = 25;
length = 25;
height = 10;
diameter = 5;
side1 = 2;
side2=4;
area = computeArea(&base, &height, 1);
printf("\nThe area of the triangle is %f", area);
area = computeArea(&diameter, &diameter,3);
printf("\nThe area of a circle is %f", area);
area = computeArea(&side1, &side2, 2);
printf("\nThe area of a square/rectangle is %f", area);

ch = "u";
count = numTimesAppears(mystring, ch);
printf("\n Number of times %c appears in string is %d", ch, count);
}

float computeArea (int *v1, int *v2, int shape)
{ float areaComputed;
if(shape==1)
{
areaComputed= ((*v1 * *v2)/2);
}
if(shape==2)
{
areaComputed= (*v1 * *v2);
}
if(shape==3)
{
areaComputed = (M_PI*(pow(((float)*v1/2),2)));
}

return(areaComputed);
}

int numTimesAppears(char *mystring, char ch)
{
int i;
int count=0;
for(i=0;strlen(mystring);i++)
{
if(ch==mystring[i])
{
count++;
}
}
return(count);
}
