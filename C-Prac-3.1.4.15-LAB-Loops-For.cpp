//Scenario
//Write a program that asks the user to enter a number, and prints twice as many lines as the number inputted.
//The first half of every other line contains one* character at the start, as many spaces as the number of this line(line numbers count from 0 in this task) and one* character at the end of the line.The second half is a mirror reflection of the first.
//The outputted "drawing" should be similar to an arrowhead.
//Your version of the program must print the same result as the expected output.To do this task, you should use two outer for loops and two inner for loops.
//You shouldn't use any special formatting in the printf to print the spaces - just use the for loop.
//
//Two exceptions :
//when the user inputs a number less than or equal to 1, the program doesn't print any line.
//when the user inputs a number greater than 20, the program prints only forty lines.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//Sample input
//3
//
//Expected output
//**
//* *
//*  *
//*  *
//* *
//**
//
//Sample input
//9
//
//Expected output
//**
//* *
//*  *
//*   *
//*    *
//*     *
//*      *
//*       *
//*        *
//*        *
//*       *
//*      *
//*     *
//*    *
//*   *
//*  *
//* *
//**
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int v1 = 0;
	scanf_s("%d", &v1);
	if (v1 <= 1) return 0;
	else if (v1 > 20) v1 == 20;
	for (int i = 0; i<v1; i++) {
		printf("*");
		for (int y = 0; y<i; y++) {
			printf(" ");
		}
		printf("*\n");
	}
	for (int i = v1-1; i >= 0; i--) {
		printf("*");
		for (int y = 0; y<i; y++) {
			printf(" ");
		}
		printf("*\n");
	}
}
