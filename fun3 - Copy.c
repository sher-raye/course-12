
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>


float amount=10000; // Global Variables
int widthdraw; // Global Variables
char ch;
int deposit;
int Quit;


void main ()
{

  int pin ;
  printf("Please enter pin ");
  scanf("%d", &pin);

  while ( pin !=1520 )
  {
    printf("Invalid input\n");
    printf("Please enter pin again: ");
    scanf("%d", &pin);
  }

 printf("You can now continue...\n\n");  //continues

  transaction();

}

int transaction( )
{

    int choice;
    repeat_transaction: //GoTo lable statment
        printf("********************************************************************\n");
        printf("****************Welcome to NEWBORN BANK ATM Services****************\n");
		printf("***************         SELECT OPTIONS             *****************\n");
		printf("********************************************************************\n");
		printf("\t\t[1] Check Balance\n");
		printf("\t\t[2] Withdraw Cash\n");
		printf("\t\t[3] Deposit Cash\n");
		printf("\t\t[4] Quit\n");
		printf("\n********************************************************************\n");
		printf("\t\tEnter your number:\n ");
		scanf("%d", &choice);
  switch(choice)
       {
      case 1:  // withdraw calling function to print
      printf("\n YOUR BALANCE ON YOUR ACCOUNT IS: %f ", amount);
      break;

     case 2:
    // this option withdraw store in variable//
        repeat_again:// its a Lable refered by GoTo Statment
        printf("Please enter amount to withdraw: ");
        scanf("%d", &widthdraw);

        if (widthdraw % 100 != 0)
		{
		printf("\n ENTER THE AMOUNT IN MULTIPLES OF 100\n");
		goto repeat_again; //forces to enter amount again
		}
		 if (amount<500)
	    {
	     printf("\n INSUFFICENT BALANCE LESS THAN 500$ \n");
     	}
        else if(widthdraw>amount)
		{
        printf("There is insuffient Balance in account\n");
        }
	    else
		{
				amount = amount - widthdraw;
				printf("\nCOLLECT CASH BELOW");
				printf("\n YOUR BALANCE IS: %f", amount);
		}
	    break;


    case 3:       // DEPOSIT cash function



    printf("Please enter amount to deposit: ");
    scanf("%d", &deposit);
    // update the balance variable\

    amount = deposit + amount; //calculate new balance on account

    printf("Thank you for depositing, new balance is: %f", amount);
    break;

    case 4:  // exit are end for no future transaction
    	printf("\n **THANKS FOR USING OUR ATM SERVICE**");
		exit(0);
		break;

       default:
			printf("\n INVALID NUMBER TRY AGAIN");
		 }

		  printf("\n Do you want to do Another Transactions: [Y/N]\n");
		  ch=getch();
		  if(ch=='y' || ch=='Y')
		  {
		  	goto repeat_transaction;
		  }
		  else if(ch=='n' || ch=='N')
		  {
		  	printf("\n-------THANKS FOR USING OUR ATM SERVICE-------");

		  }
		  else{
		  	printf("\n Invalid Input ");
		  }

}
