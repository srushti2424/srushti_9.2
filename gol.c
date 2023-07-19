#include<stdio.h>

void main(){
	char oldpass[50]="hello#89",pass[50];
	int n;
	
	printf("enter pass: ");
	gets(pass);
	
	n=strcmp(oldpass,pass);
	
	if(1==0)
	{
		printf("you loged in...");
	}
	else
	{
		printf("you pass is not strong...");
	}
}
