/*
* FILE : m1.cpp
* PROJECT : SENG1000 - Major Assignment #1
* PROGRAMMER : Dhruv Patel
* FIRST VERSION : 2021-09-27
* DESCRIPTION :
* The functions in this file are used to display character and their average values
*/
#include <stdio.h> 
#include<string.h> 

int main()
{
    //variable initialization
    const char kLetter = 'd';
    int divideBy = 1;
    int numberAscii = 97;
    int sum = 0;

    for (int i = 1; i < 27; i++) //for count number of character
    {
        sum = sum + numberAscii;
        int result = sum / divideBy;

        if (numberAscii == kLetter) //check condition of required character
        {
            printf("%c  %d\n", numberAscii, result);      //print average of character in character value
        }
        else 
        {
            printf("%c  %c\n", numberAscii, result);  //print average of character in number
        }
        numberAscii++;
        divideBy++;
    }
        return 0;
}