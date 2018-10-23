#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum Status {CONTINUE,WON,LOST};
int rolldice();

int main()
{
	int sum;
	int mypoint;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rolldice();

	switch (sum)
	{
	case 7:
	case 11:
		 gameStatus = WON;
		 break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		mypoint = sum;
		printf("point is %d\n", mypoint);
		break;
	}

	while (gameStatus == CONTINUE)
	{
		sum = rolldice();
		if (sum == mypoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
	}
	if (gameStatus == WON)
	{
		printf("player wins\n");
	}
	else
	{
		printf("player loses\n");
	}
	system("pause");
}

int rolldice()
{
	int die1;
	int die2;
	int worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;

	printf("player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;

}