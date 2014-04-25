/*
* File: main.c
* Author: Stefan Ludlow
*
* Created on November 15, 2012, 1:57 PM
*/

#include <stdio.h>
#include <stdlib.h>


void verse1()
{
printf("a Partridge in a Pear Tree\n\n\n");
}


void verse2()
{
printf("2 Turtle Doves\n");
}

 

void verse3()
{
printf("3 French Horns\n");
}


void verse4()
{
printf("4 Calling Birds\n");
}


void verse5()
{
printf("5 Golden Rings\n");
}


void verse6()
{
printf("6 Geese a Laying\n");
}


void verse7()
{
printf("7 Swans a Swimming\n");
}


void verse8()
{
printf("8 Maids a Milking\n");
}


void verse9()
{
printf("9 Ladies Dancing\n");
}


void verse10()
{
printf("10 Lords a Leaping\n");
}


void verse11()
{
printf("11 Pipers Piping\n");
}


void verse12()
{
printf("12 Drummers Drumming\n");
}

 
void introduction(int num)
{
printf("On the %d day of Christmas\nmy true love gave to me\n", num);
}


void newVerse1()
{
printf("and a Partridge in a Pear Tree\n\n\n");
}

//Create a function pointer type with no inputs
typedef void (* verse)();

//Create a function pointers type with an int input

typedef void (*day)(int); 
 
int main(int argc, char** argv)
{
//create an array to hold all your function pointers and populate them
verse verses[13];
verses[0] = NULL;
verses[1] = verse1;
verses[2] = verse2;
verses[3] = verse3;
verses[4] = verse4;
verses[5] = verse5;
verses[6] = verse6;
verses[7] = verse7;
verses[8] = verse8;
verses[9] = verse9;
verses[10] = verse10;
verses[11] = verse11;
verses[12] = verse12;

//with 0 NULL and each verse being the number it corresponds to

 
 
//create a function pointer for the intro
day intro = introduction;
 
//print out the first verse
intro(1);
verses[1]();
    

//change the first verse of the song to newVerse1
verses[1] = newVerse1;
    

//using a 2 loops print the rest of the song
int i,j;
for(i=2;i<13;i++) {
    intro(i);
    for(j=i;j>0;j--) {
        verses[j]();
    }
}
    

return (EXIT_SUCCESS);
} 