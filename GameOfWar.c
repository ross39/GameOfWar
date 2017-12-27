#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void startRound();
void numberOfCards();
void afterRoundEnds();
void printPlayerNames();
void choiceToLoadSavedGame();
int specialRule();

//global variables

int main()
{
	int players = 0;
	int i = 0;
	int orderOfPlayers = 0;
	int choiceOne = 0;
	char choiceTwo = ' ';
	int roundNumber = 0;
	char choiceThree = ' ';
	
	printf("Welcome to game of war\n");
	printf("***********************\n");
	choiceToLoadSavedGame();
	startRound();
	
}//end main 

//start of functions
void startRound()
{
	srand(time(NULL));// to reset the seed at the start of ever execution
	char name[10][8];
	int i,j, number;
	printf("Enter in the number of players playing\n");
	scanf("%d",&number);
	printf("Enter in %d names\n",number);
	for(i = 0; i < number; i++)
	{
		scanf("%s",name[i]);
	}
	
	//print names and assign random number between 1 and 13
	for(i = 0; i < number; i++)
	{
		printf("%s\t%d\n",name[i], rand() % 13 + 1);
		
	}
}


void printPlayerNames()
{
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
	char choice[2] = " ";
	printf("Do you wish to save current state? chosing No will disable saving all future rounds Y/N\n");
	if(choice == 'Y' || choice == 'y')
	{
		//print out round score to result.txt
	}
	else
	{
		printf("You've chosen not to save");
	}
	
}

int specialRule()
{
	//if players tie points are carried over to next round
	//if its the last round then points are "lost on the battlefield"
	return 0;
}

void loadSavedGame()
{
	printf("Hello and welcome to load saved game\n");
	printf("**************************************\n");
	//load saved game code
}

void choiceToLoadSavedGame()
{
	int choice;
	printf("Do you want to load a saved game? 0 for yes 1 for no\n");
	scanf("%d",&choice);
	if(choice == 0)
	{
		loadSavedGame();
	}
	else if(choice == 1)
	{
		startRound();
	}
	
}

