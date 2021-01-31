//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\t");
	scanf("%d",&num);
	if (num & 1 ==1)
	printf("%d is odd",num);
	else 
	printf("%d is even",num);
	
	return 0;
}
/* 
Enter a number 10
10 is even
*/
