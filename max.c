/*
File Name: max.c
Author: Atharva Marathe


*/

#include <stdio.h>

//Problem : Write a C program to find maximum between two numbers


int main(){
	int num1,num2;
	printf(" Program for Maximum of two numbers\n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2) 
		printf("The maximum of the two numbers is %d",num1);
	else if(num1<num2)
		printf("The maximum of the two numbers is %d",num2);
	else
		printf("Both the numbers are equal");







	return 0;

}
