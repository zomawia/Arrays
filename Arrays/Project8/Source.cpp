// Zomawia Sailo
// zomawia@gmail.com

//8. Create a program that declares an array of 5 integer values. These values will represent the
//	health of 5 characters.Initialise the values all to 100. Your program is to ask the user to
//	enter a number(0 to 4) to select a character that is to be attacked by a monster.Each attack
//	deals 40 damage per attack.If a player’s health gets below 0 then should not be able to be
//	attacked.Your program should simulate 5 attacks.After the attacks have finished, output
//	the parties’ remaining health to the console.

//	CHALLENGE: Research random number generation and modify your program so that random
//	damage is dealt with each attack.

#include <iostream>
#include <time.h>

int main()
{
	int partyHealth[5] = { 100,100,100,100,100 };
	int input = 0, monsterAttack = 0;


	printf("Your party is ambushed by a bee-shooting dog.\n");

	printf("Who will take a bee shot for the greater good of the party?\n");

	printf("[0] Granpilf the Goop\t[1] Furious Fork  [2] Pretty Boy Sand\n[3] Short Guns George [4] Harambe\n>>");

	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", &input);

		if (input > 4 || input < 0)
		{
			printf("Invalid selection. Select another player\n", input);
			i--;
			
		}
		else if (partyHealth[input] < 0)
		{
			printf("Player %d is incapacitated! Select another player\n", input);
			i--;
			
		}		
		else
		{
			partyHealth[input] -= monsterAttack = rand() % 100; //random monster attack damage
			printf("Player %d rushes forward to defend. Received %d damaged.\n", input, monsterAttack);
					
		}
		printf("Who will take the next bee shot?\n>>");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("\nPlayer %d Health: %d\n", i, partyHealth[i]);
	}

	system("pause");
}