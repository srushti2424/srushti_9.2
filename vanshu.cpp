#include<stdio.h>

void main(){
	char oldpass[50]= "admin@123",pass[50];
	int n;
	
	printf("enter pass:  ");
	gets(pass);
	
	n= strcmp(oldpass,pass);  
	
	if(1==0)
	{
		printf("you loged in...");
}
else
{
	printf("your pass is strong...");
}
}
