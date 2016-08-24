//	Zomawia Sailo
//	zomawia@gmail.com
//
//	6. Create a program that creates a small 3x3 array of integers. Use a nested for loop to initialise
//	the numbers 1 - 9. Output the numbers in a grid format.
//


#include <iostream>

int main()
{
	int Grid[3][3];

	for (int i = 1; i < 4; i++)
	{		
		for (int x = 1; x < 4; x++)
		{
			Grid[i][x] = x+i;
			printf(" %d", Grid[i][x]);
		}
	}


	system("pause");
}