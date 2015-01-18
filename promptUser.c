// Lab 2: Prompt User
// Created by LDeas on 1-17 at 1:00pm

// Using the Altera Monitor to Prompt User for inputs
// Chris Bird, Lillie Deas, Kaila Balancio 
#include <stdio.h>


int main(void)
{
//********************************************************************************
//
//		Initializing each value ADDRESS so we can access and change them
//
//********************************************************************************
	//Pointers to HW that we WRITE TO 
	volatile int* led = 		(int*)0xFF200040;		//Reded LED address
	volatile int* hex3_0 = 		(int*)0xFF200020;		//HEX3_HEX0 address
	volatile int* hex5_4 = 		(int*)0xFF200010;		//HEX5_HEX4 address

	//Pointers to HW that we READ FROM
	volatile int* jtag_uart_ptr = (int*)0xFF2_________; // what is the address for our JTAG UART

	
	
//********************************************************************************
//
//	Initializing each integer value to manipulate while/before reading/writing 
//
//********************************************************************************	
	
	int hex30; 				//32-Bit int for HEX3 - HEX0
	int hex3;
	int hex2;
	int hex1;
	int hex0;
	int hex54; 				// 32-Bit int for HEX5 - HEX4
	int hex5;
	int hex4;
	int input;
	int proceed == 1


//********************************************************************************
//
//			Main loop that checks for changes in entry from monitor
//
//********************************************************************************

	while(1)
	{
		while (proceed  == 1)
		{
		// Prompt user for input
		printf("Please enter a Hex 32-bit integer or press Q to quit:\n");
		scanf("%s", input);						// I am assuming we are imputing a 32-bit hex integer??

		if (input == not what we want)			// HELP! To check if we are inputing jibberish.
		{
			printf("That is not a usable value please try again.\n");
		}

		if (input == q || input == Q) 			// If quit is selected dump out of loop.
			{
				printf("Now quiting.\n");
				proceed = 0;
			}

		else									// Display the integer on the 7 seg displays
			{
				hex0 = input[0]
				hex1 = input[2]
				hex2 = input[3]
				hex3 = input[4]
				hex4 = input[5]
				hex5 = input[6]


			}
		}	
	}
}
