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


//Create a function pointer type with an int input

 
 
int main(int argc, char** argv)
{
//create an array to hold all your function pointers and populate them

//with 0 NULL and each verse being the number it corresponds to

 
 
//create a function pointer for the intro

 
//print out the first verse

    

//change the first verse of the song to newVerse1

    

//using a 2 loops print the rest of the song

    

return (EXIT_SUCCESS);
} 
