#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[100];
	printf("What is your name?\n");
	scanf("%s",name);
	printf("Hello, %s!\n",name);

	printf("Rolling the dice...\n");
	int die1 = rand() % 6 + 1;
	int die2 = rand() % 6 + 1;
	int diceTotal = die1 + die2;

	printf("Die 1: %d\n",die1);
	printf("Die 2: %d\n",die2);
	printf("Total value: %d\n",diceTotal);
	if (diceTotal > 7)
		printf("%s won!/n",name);
	else
		printf("%s lost.\n",name);
	
	return 0;
}