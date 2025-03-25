#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inventory.h"

int mining(int location) {

	int haul[3]= {0,0,0};
	char mine = 'y';

	while(mine == 'y') {
		switch location(

	    //Bridge
	    case 1:
			    printf("You begin mining...\n");

			    //gold yield
			    haul[0]+=(rand(time(NULL))%25+16);

			    //platinum yield
			    haul[1]+=(rand(time(NULL))%11);

			    printf("+%dgold\n+%dplatinum\n\n",haul[0],haul[1]);

			    break;

	    //St. Giles
	    case 2:
			    printf("You begin mining...\n");

			    //tritium yield
			    haul[2]+=(rand(time(NULL))%30+16);

			    printf("+%dtritium\n\n",haul[2]);

			    break;

	    //error
	    default:
			    printf("\033[0;31mYou can't mine in this location.\033[0m\n");
			    break;
			)

				//continue?
				while(mine!='y')&&(mine!='n') {
					printf("\nContinue mining?(y/n) ");
					scanf("%c",&mine);
				}

	}

	return haul;
}
