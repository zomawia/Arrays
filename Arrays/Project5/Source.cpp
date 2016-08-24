//	Zomawia Sailo
//	zomawia@gmail.com
//
//	5.	Write a program that lets the user enter 10 values into an array. The program should then
//		display the largest and smallest values stored in the array.
//


#include <iostream>

int main()
{
	int numbers[10];
	int iSmall = 0, iLarge = 0;

	// Ask user for numbers & store in array
	printf("This program will store 10 magical numbers from you and then spit out the largest and smallest values.\n");
	printf("Enter the numbers.\n>> ");

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &numbers[i]);
		printf(">> ");
	}
	
	iSmall = numbers[0];
	iLarge = numbers[0];

	for (int i = 1; i < 10; i++)
	{
		if (numbers[i] > numbers[i - 1]) iLarge = numbers[i];
		if (numbers[i] < numbers[i - 1]) iSmall = numbers[i];
	}
	printf("Largest: %d, Smallest: %d \n\n", iLarge, iSmall);

	

	system("pause");
}