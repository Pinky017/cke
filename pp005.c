//pp005: Write a program to input two numbers and print all even numbers in given range.
#include<stdio.h>
main(){
	int n1,n2,i;
	printf("Enter the numbers : ");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++){
	  if(i%2==0)
	  printf("%d\n",i);
    } 
		
}
