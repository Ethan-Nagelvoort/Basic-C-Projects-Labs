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
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;math.h&gt;
#include &lt;string.h&gt;

ETHAN NAGELVOORT, 821234668 [HOMEWORK #1]

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
char mystring[100]=&quot;Yusuf Ozturk&quot;;
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
area = computeArea(&amp;base, &amp;height, 1);
printf(&quot;\nThe area of the triangle is %f&quot;, area);
area = computeArea(&amp;diameter, &amp;diameter,3);
printf(&quot;\nThe area of a circle is %f&quot;, area);
area = computeArea(&amp;side1, &amp;side2, 2);
printf(&quot;\nThe area of a square/rectangle is %f&quot;, area);

ch = &#39;u&#39;;
count = numTimesAppears(mystring, ch);
printf(&quot;\n Number of times %c appears in string is %d&quot;, ch, count);
}

ETHAN NAGELVOORT, 821234668 [HOMEWORK #1]

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
for(i=0;i&lt;strlen(mystring);i++)
{
if(ch==mystring[i])
{
count++;
}
}
return(count);
}
