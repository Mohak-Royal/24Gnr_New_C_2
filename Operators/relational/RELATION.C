#include<stdio.h>
#include<conio.h>

//Relational Operators

void main() {
	int n1 , n2 , result;
	clrscr();


	printf("Enter the value of num 1: ");
	scanf("%d" , &n1);
	printf("Enter the value of num 2: ");
	scanf("%d" , &n2);

	// Types of Relational operator

	// == : Equal to
	result = (n1==n2);

	printf(" == :  %d" , result);


	// != : Not Eqaul to

	result = (n1!=n2);
	printf("\n != : %d" , result);

	// > : Greater Than

	result = (n1 > n2);
	printf("\n > : %d" , result);

	// < : Less Than
	result = (n1 < n2);
	printf("\n < : %d" , result);

	// >= : Greater than or equals to
	result = n1 >= n2;
	printf("\n >= : %d" , result);

	// <= : Less Than or equal to
	result = n1 <= n2;
	printf("\n <= : %d" , result);


	getch();
}