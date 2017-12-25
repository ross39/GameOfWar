#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NAMES 10

void numberOfPlayers();
void numberOfCards();
void afterRoundEnds();
void printPlayerNames();
int specialRule();

//global variables
char playerNames[NAMES][10] = { "" };
char (*ptr)[NAMES][10];


int main()
{
	int players = 0;
	int i = 0;
	int orderOfPlayers = 0;
	int choiceOne = 0;
	char choiceTwo = ' ';
	int roundNumber = 0;
	char choiceThree = ' ';
	ptr = &playerNames;

	numberOfPlayers();
	scanf("%d", &choiceOne);

	if(choiceOne 
	= -1)
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
		{	
			numberOfPlayers();
			printPlayerNames();
			printf("Are these player names correct? Y/N\n");
			if(scanf("%c", &choiceTwo) <= 0)
				choiceTwo = 'n';
			else
			{
				printf("Before the game starts would you like to load a saved game? Y\N");
				scanf("%c", &choiceThree);
				if(choiceThree == 'Y' || choiceThree == 'y')
				{
					//code to retrieve a saved game
				}
				else
				{
					//code to load a regular game
					for(int i = 0; i < 13; i++)
					{
						int count =0;
						printf("Welcome to round %d",count++);
						//for loop to display the player names and display number between 1 and 13

					}
				}
			}
		}
		return 0;
	}


}//end main 

//start of functions
void numberOfPlayers()
{
	for(int i = 0; i < NAMES; i++)
	{
		printf("Please enter in your player names or -1 to load a saved game\n");
		if(!fgets(playerNames[i], sizeof playerNames[i], stdin))
		break;
		size_t len = strlen(playerNames[i]);
		if(playerNames[i][len -1] == '\n')
			playerNames[i][--len] = 0;
	}
}

void printPlayerNames()
{
	int n, i;
	for( i = 0; i < n; i++)
	printf("playerNames[%d] : %s\n",i,playerNames[i]);
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
