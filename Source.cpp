//Problem: F#zzB#zz
//
//	FizzBuzz with 3’s and 5’s can be straightforward.Can you create a program that will Fizz and Buzz with integers pulled from input ?
//
//	Input :
//	K : The number to count to
//	F : The Fizzing multiple
//	B : The Buzzing multiple
//
//	Where K, F, and B are all positive integers.
//
//	Output :
//	For every integer, n, from 0 up to and including K :
//		 Print Fizz when n is divisible by F.
//			 Print Buzz when n is divisible by B.
//			 Print FizzBuzz when n is divisible by both F and B.
//			 Otherwise, print n.


#include <iostream>

int main()
{	
	int Kount = 0, Fizz = 0, Buzz = 0;
	
	printf("Enter a number to count to: ");
	scanf_s("%d", &Kount);

	printf("Enter a number to divide by (Fizz): ");
	scanf_s("%d", &Fizz);

	printf("Enter a number to divide by (Buzz): ");
	scanf_s("%d", &Buzz);

	for (int i = 0; i < Kount+1; i++)
	{
		if (i == 0)
		{
			printf("0\n");
		}
		else
		{
			if ((i%Fizz == 0) && (i%Buzz == 0))
			{
				printf("FizzBUZZ");
			}
			
			else if (i%Fizz == 0)
			{
				printf("Fizz");
			}

			else if (i%Buzz == 0)
			{
				printf("Buzz");
			}

			else
			{
				printf("%d", i);
			}
			printf("\n");
		}
		
	}

	system("pause");
}