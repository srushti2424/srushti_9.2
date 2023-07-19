#include<stdio.h>

void main(){
	char oldpass[50]="123456",pass[50];
	int n;
	
	printf("enter email: \n");
	printf("enter pass:  \n");
	gets(pass);
	
	n=strcmp(oldpass,pass);
	
	if(1==0)
	{
		printf("you log in...");
	}
	else
	{
		printf("login successful...");
	}
}
