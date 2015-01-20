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
	//volatile int* led = 		(int*)0xFF200000;		//Reded LED address
	//volatile int* hex3_hex0 = 		(int*)0xFF200020;		//HEX3_HEX0 address
	//volatile int* hex5_hex4 = 		(int*)0xFF200010;		//HEX5_HEX4 address

	//Pointers to HW that we READ FROM
	//volatile int* system_console = 	(int*)0xFF200050; 	//JTAG address
	volatile int* hex5_0bus =		(int*)0xFF200000; 	//Input from user address
	//volatile int* pushptr = 		(int*)0xFF200030;	//Push buttons input
	
	
//********************************************************************************
//
//	Initializing each integer value to manipulate while/before reading/writing 
//
//********************************************************************************	
	
	//unsigned int hex30; 				//32-Bit int for HEX3 - HEX0
	//unsigned int hex3;
	//unsigned int hex2;
	//unsigned int hex1;
	//unsigned int hex0;
	//unsigned int hex54; 				//32-Bit int for HEX5 - HEX4
	//unsigned int hex5;				
	//unsigned int hex4;
	unsigned int input = 0;				//32-bit integer that user enters
	int proceed = 1;
	//unsigned int ledValue;
	unsigned int temp = 0;
	//unsigned int hexT0, hexT1, hexT2, hexT3, hexT4, hexT5, hexT6;


//********************************************************************************
//
//			Main loop that checks for changes in entry from monitor
//
//********************************************************************************

	while(1)
	{
		while (proceed == 1)
		{
			// Prompt user for input
			printf("Please enter an integer in decimal between 0 and 4,294,967,295 or enter '1' to quit:\n");
			scanf("%u", &input);	
			
			temp = input;
			//*(hex5_0bus) = temp;
			if (temp == 1) 			// If quit is selected dump out of loop.
			{
				printf("Now quiting.\n");
				proceed = 0;
			}

			else if (temp >= 4294967296)			// A number between 0 and 16777215
			{
				printf("That is not a value in 32-bit range.\n");
			}

			else								// Display the integer on the 7 seg displays
			{
				printf("Hex5_0bus = %u", temp);
				
				//5 bits per display, 30 bits total, max value is 4,294,967,295 or 0xFF_FFFF
				//BOTTOM 30 bits are on hex displays
				//TOP 2 bits are on LEDS (4:0)

				/*hexT0 = temp;
				hexT0 = hexT0 << 28;
				hexT0 = hexT0 >> 28;
				hex0 = hexT0;

				printf("HEX0 = %u\n", hex0);

				hexT1 = temp;
				hexT1 = hexT1 << 24;
				hexT1 = hexT1 >> 28;
				hex1 = hexT1;

				printf("HEX1 = %u\n", hex1);

				hexT2 = temp;
				hexT2 = hexT2 << 20;
				hexT2 = hexT2 >> 28;
				hex2 = hexT2;	

				hexT3 = temp;
				hexT3 = hexT3 << 16;
				hexT3 = hexT3 >> 28;
				hex3 = hexT3;	

				hexT4 = temp;
				hexT4 = hexT4 << 12;
				hexT4 = hexT4 >> 28;
				hex4 = hexT4;	

				hexT5 = temp;
				hexT5 = hexT5 << 8;
				hexT5 = hexT5 >> 28;
				hex5 = hexT5;

				hexT6 = temp;
				hexT6 = hexT6 >> 24;
				ledValue = hexT6;

				//Add them all together to make correct hex displays
				hex30 = (hex3 * 16777216) + (hex2 * 65536) + (hex1 * 256) + (hex0);
				hex54 = (hex5 * 256) + (hex4);
			
				printf("HEX30 = %u\n", hex30);*/

				//Set new values to hex displays and LEDs
				//*(hex3_hex0) = hex30;
				//*(hex5_hex4) = hex54;

				//*(led) = ledValue;	
			}
		}	
	}
}
