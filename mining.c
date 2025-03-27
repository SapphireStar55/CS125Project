/*
File Name: mining.c
Author: Wesley Catlett
Purpose: contains function "mining.c", which is the process by which the player obtains ores.
Version History: updated 03/27/25
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inventory.h"

void mining(int location, int* goldPointer, int* platinumPointer, int* tritiumPointer) {

	//reset haul
	int haul[3]= {0,0,0};

	//initialize user choice
	char mine = 'y';

	//mine until user elects not to continue
	while(mine == 'y') {
		switch (location){

	    //mining at Bridge
	    case 1:
		    	    //begin mining notification
			    printf("You begin mining...\n");

			    //gold yield
		    	    int goldLoad = (rand()%25+16);
			    haul[0] += goldLoad;

		    	    //gold yield notification
			    printf("+%dkg of gold\n",goldLoad);
		    
			    //platinum yield
			    int platinumLoad = (rand()%11);
			    haul[1] += platinumLoad;

		    	    if(platinumLoad==0)
				    //no platinum yield
				    printf("\n");
		    	    else
				    //platinum yield notification
				    printf("+%dkg of platinum\n\n",platinumLoad);
			    break;

	    //Mining at St. Giles
	    case 2:
		    	    //begin mining notification
			    printf("You begin mining...\n");

			    //tritium yield
			    haul[2] += (rand()%30+16);

		    	    //yield notification
			    printf("+%dkg of tritium\n\n",haul[2]);

			    break;

	    //error
	    default:
			    printf("\033[0;31mYou can't mine in this location.\033[0m\n");
			    break;
		}

				//continue?
				printf("\nContinue mining?(y/n) ");
					scanf(" %c",&mine);
		
				//incorrect user input
				while((mine!='y') && (mine!='n')) {
					printf("\nContinue mining?(y/n) ");
					scanf(" %c",&mine);
				}

	}

	//add haul to cargoHold
	*goldPointer += haul[0];
	*platinumPointer += haul[1];
	*tritiumPointer += haul[2];

	//haul summary
	switch(location){
		case 1:
			if(haul[1]==0)
				printf("%dkg of gold added to cargo hold.\n\n",haul[0]);	
			else
				printf("%dkg of gold and %dkg of platinum added to cargo hold.\n\n",haul[0],haul[1]);
			break;
		case 2:
			printf("%dkg of tritium added to cargo hold.\n\n",haul[2]);
			break;
	}
}
