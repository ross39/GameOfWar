#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void numberOfPlayers();
void numberOfCards();
int specialRule();

int main()
{
	char playerNames[MAX];
	int players = 0;
	int i = 0;
	int orderOfPlayers = 0;
	int choiceOne = 0;
	char *ptr;
	int roundNumber = 0;

	ptr = &playerNames[0];

	numberOfPlayers();
	scanf("%d", &choiceOne);

	if(choiceOne == -1)
	{
		//load save game function
		
	}
	else if(choiceOne <= 0 || !choiceOne == -1)
	{
		printf("Please enter in a correct choice\n");
	}
	else
	{
		if (choiceOne > 10)
		{
			printf("Uh oh, we cannot allow more than 10 players!!\n");
		}
		else
		{	do
			{
				printf("Please enter in your player names or -1 to terminate\n");

			} while (/* condition */);
				
			//generate and assign random numbers between 1 - 13 for each player

		}
	}


}//end main 

//start of functions
void numberOfPlayers()
{
	printf("Please enter in the number of players or -1 to resume saved game\n");
}

void numberOfCards()
{
	srand((unsigned) time(NULL));
	for (int i = 0; i < 13; i++)
	{
		printf("%d\n", rand() % 14);
	}
}

void afterRoundEnds()
{
	printf("Do you wish to save current state?\n");
}

int specialRule()
{
	//if players tie points are carried over to next round
	//if its the last round then points are "lost on the battlefield"
}