/*
File Name: mining.c
Author: Wesley Catlett
Purpose: contains function "mining.c", which is the process by which the player obtains ores.
Version History: updated 03/25/25
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inventory.h"

void mining(int location, int* goldPointer, int* platinumPointer, int* tritiumPointer) {

	int haul[3]= {0,0,0};
	char mine = 'y';

	while(mine == 'y') {
		switch (location){

	    //Bridge
	    case 1:
			    printf("You begin mining...\n");

			    //gold yield
		    	    int goldLoad = (rand()%25+16);
			    haul[0] += goldLoad;
			    printf("+%dgold\n",goldLoad);
		    
			    //platinum yield
			    int platinumLoad = (rand()%11);
			    haul[1] += platinumLoad;

		    	    if(platinumLoad==0)
				    printf("\n");
		    	    else
				    printf("+%dplatinum\n\n",platinumLoad);
			    break;

	    //St. Giles
	    case 2:
			    printf("You begin mining...\n");

			    //tritium yield
			    haul[2] += (rand()%30+16);

			    printf("+%dtritium\n\n",haul[2]);

			    break;

	    //error
	    default:
			    printf("\033[0;31mYou can't mine in this location.\033[0m\n");
			    break;
		}

				//continue?
				printf("\nContinue mining?(y/n) ");
					scanf(" %c",&mine);
				while((mine!='y') && (mine!='n')) {
					printf("\nContinue mining?(y/n) ");
					scanf(" %c",&mine);
				}

	}

	*goldPointer += haul[0];
	*platinumPointer += haul[1];
	*tritiumPointer += haul[2];

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
