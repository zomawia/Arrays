// Zomawia Sailo zomawia@gmail.com

//	4. Create a program that asks for 5 numbers from the user, and store them in an array.Print
//	out the numbers in reverse order

#include <iostream>

int main()
{
	
	int numbers[5];

	// Ask user for numbers & store in array
	printf("This program will store 5 magical numbers from you and then spit them back out in reverse order for some reason.\n");
	printf("Enter the numbers.\n>> ");

	//scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}

	printf("Thanks here are your numbers: ");
	for (int i = 4; i > -1; i--)
	{
		printf("%d ", numbers[i]);
	}

	// For Loop


	system("pause");

}