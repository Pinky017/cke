//pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
main(){
	int a[10],i;
    printf("Enter the numbers:");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
 }
    printf("Even numbers are:");
	for(i=0;i<10;i++){
	 if(a[i]%2==0)
     printf("%d\n",a[i]);
   }
	
}
