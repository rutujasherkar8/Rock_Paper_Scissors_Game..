//Rock,Paper,Scissors Game..
//Developer Name:- Rutuja Dnyaneshwar Sherakar
//Date:-10 september , 2022...

#include<stdio.h>
#include<stdio.h>
#include<time.h>
int main()
{
	int user,computer;
	
	char arr[] = {'r','p','s'};
	
	while(1)
	{
		printf("**********************************************************************\n");
		printf("WELCOME!!!!!! To Rock, Paper, Scissors Game.........\n");
	   
	    //user Input number from 0,1,2
		printf("\nPress 0 for Rock, 1 for Paper and 2 for Scissors ...Press -1 to exit:");
	    scanf("%d",&user);
		
		
		if (user<-1 ||  user>2)
		{
			printf("Sorry...You Enter Invalid Input\n");
			return 0;
		}
	 
	    //Genetrate random number for computer 0-2 between
	    srand(time(NULL));
	    
     	computer = rand() % 3;
     	
    
        printf("User Input =%c\n",arr[user]);
     	printf("Computer Input = %c\n",arr[computer]);
     	
		//Check conditions
		if (user == computer)
     	{
     		printf("Both Select same Choice....Match Draw\n");
		}
		
		else if(user == 0 && computer == 2)
		{
			printf("Hey...You Won..\n");
		}
		
		else if(user == 0 && computer == 1)
		{
			printf("Hey...You Lose..\n");
		}
		
		else if(user == 1 && computer ==0)
		{
			printf("Hey...You Won..\n");
		}
		
		else if(user == 1 && computer == 2)
		{
			printf("Hey...You Lose..\n");
		}
		
		else if(user == 2 && computer == 0)
		{
			printf("Hey...You Lose..\n");
		}
		
		else if(user == 2 && computer == 1)
		{
			printf("Hey...You Won..\n");
		}
		
		else if(user == -1)
		{
			break;
		}		
	}
}
