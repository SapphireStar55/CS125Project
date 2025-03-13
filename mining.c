#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inventory.h"

int mining(int location) {

	int haul[3];

	switch location(

	    //Bridge
        case 1:
    		    //gold yield
    		    haul[0]=rand(time(NULL))%25+16;
    
    		    //platinum yield
    		    haul[1]=rand(time(NULL))%11;
    
    		    //tritium yield
    		    haul[2]=0;
    
    		    break;
    
        //St. Giles
    	case 2:
    			    //gold yield
    			    haul[0]=0
    
    			            //platinum yield
    			            haul[1]=rand(time(NULL))%11;
    
    			    //tritium yield
    			    haul[2]=rand(time(NULL))%30+16;;
    
    			    break;
    
    			    //error
        default:
    				    printf("\033[0;31mYou can't mine in this location.\033[0m\n");

    )

	return 0;
}

