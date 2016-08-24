/*
		Zomawia Sailo
		zomawia@gmail.com
		
		1. Is each of the following a valid or invalid array definition ? (If a definition is invalid, explain
			why) Try to answer first before using Visual Studio - then check your answers using Visual
			Studio to see if you understand why something worked or didn’t.

		OK	int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 };
		NO	int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 };
		OK	double radii[10] = (3.2, 4.7};
		NO	int table[7] = { 2, , , 27, , 45, 39 };
		OK	char codes[] = { 'A', 'X', '1', '2', 's' };
		NO	int blanks[];
		NO	int collection[-20];
		NO	int hours[3] = 8, 12, 16;


*/

#include <iostream>

int main()
{
	//int numbers[10] = { 0,0,1,0,0,1,0,0,1,1 };

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", numbers[i]);
	//}
	//
	//printf("\n");
	//system("pause");


	//2. Given the following array definition:
	//	int values[] = { 2, 6, 10, 14 };

	//	What does each of the following display ?
	//	10		a) cout << values[2]
	//	6		b) cout << ++values[0];
	//	10		c) cout << values[1]++;
	//	14		d) x = 2;
	//	6			cout << values[++x];
	//	error		e) cout << values[4];



	// 3. Write a for loop to initialize the following array(int data[10]) with the values 10, 9, 8…(Etc)
	int data[10];
	for (int i = 10; i > 0; i--)
	{
		data[i] = i;
	}

}
