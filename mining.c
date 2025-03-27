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

void mining(int location,Inventory* cargoHoldPointer) {

	int haul[3]= {0,0,0};
	char mine = 'y';

	while(mine == 'y') {
		switch (location){

	    //Bridge
	    case 1:
			    printf("You begin mining...\n");

			    //gold yield
			    haul[0] += (rand()%25+16);

			    //platinum yield
			    haul[1] += (rand()%11);

			    printf("+%dgold\n+%dplatinum\n\n",haul[0],haul[1]);

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

	*cargoHoldPointer.gold.quantity += haul[0];
	*cargoHoldPointer.platinum.quantity += haul[1];
	*cargoHoldPointer.tritium.quantity += haul[2];
}
