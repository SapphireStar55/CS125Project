/******************************************************************************
* File: Project
* Author: Teagan Lee, Wesley Catlett
* Purpose: Simulating a video game
* Version: 2.5 March 30, 2025

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "inventory.h"


int combat();
int board();
void mining();
void clearScreen();
int enemyboard();
int enemyboard2();
int shipexp1();
int difficulty=2;
int savecheck=0;
int check=0;
int shiphealth=100;
int Fuel=50;
int Valcegaussskil=5, Engiestunner=2, DhoeACR=3;
int gaussammo=50;
int ValceCharisma=2, Dhoerrghcharisma=5;
int expcho1=0;
int dice[2];
int save=0;
int shipcombat ();
int boardpoints=0;
int eboardpoints=0;
int CrewSafety=0;
int dhocon2=0;
int comchoice1=0,comchoice2=0, comchoice3=0, comchoice4=0;
int pircom1=0;
int diplocheck=0;
int Valcehealth=29, Brianhealth=108, Engiehealth=30, Dhoehealth=34;
int Valcearmor=13, Brianarmor=20, Engiearmor=10, Dhoearmor=12;


int react2() {
	int rec2=0;
	printf("\e[0;37m1: Of course BRIAN, I am captain for my foresight after all\n");
	printf("2: No I was making sure you were doing your job\n");
	scanf("%d", &rec2);
	if (rec2== 1)
		printf("\e[1;34m The robot does not respond. Perhaps it is not capable of detecting sarcasm\n");
	else {
		printf("\033[32m An illogical assumption Captain. I am incapable of the");
		printf(" defect called laziness\n");
	}
}
int intro() {
	int react=0;
	printf("\e[0;37m You are standing at the bridge of your ship, The Old Guard, ");
	printf("\e[0;37m looking over the montly costs. Mortage is due soon and you have");
	printf("\e[0;37m scant to pay it. As you ponder your condrum the pilot walks up.");
	printf("\e[0;37m The lean robot hands you a dataslate with one it's four hands.");
	printf("\e[0;37m It's main optic is fixed upon you as you read the report.");
	printf("\e[0;37m In the lengthy prose of typical corpo talk, it details");
	printf("a attack on a nearby Bridge Construction Company Shipyard ");
	printf("\e[0;37m and the price for catching the pirates responible");
	printf("\e[0;37m\n1: What's the state of the ship BRIAN?");
	printf("\n2:When did we get this report?\n3:Any information on the bandits?");
	printf("\n4: Look's like it's pay day\n");
	while (react !=4) {
		scanf("%d", &react);
		if (react == 1) {
			printf("\033[32mCaptain,we have %d containers of fuel left.", Fuel);
			printf("Scans indictate that hull has %d hardpoints. Anything else Captain?\n", shiphealth);
			printf("\e[0;37m 1: What's the state of the ship BRIAN?");
			printf("\n2:When did we get this report?\n3:Any information on the bandits?");
			printf("\n4: Look's like it's pay day\n");


		}
		else if (react == 2) {
			printf("\033[32m A minute ago. The request comes from Camp Ada.");
			printf("\033[32m Message delay of a hour. This request was thus sent");
			printf("a hour and two minutes ago captain.");
			printf("\033[32m I assume you ask to aid calculations on where the");
			printf(" pirates could be?\n");
			react2();
			printf("\e[0;37m \nWhat's the state of the ship BRIAN?");
			printf("\n2:When did we get this report?");
			printf("\n3:Any information on the bandits?\n4: Look's like it's pay day\n");


		}
		else if (react ==3) {
			printf("\033[32m Analyzing the files linked now.");
			printf("\033[32m Data indictates that the pirates's fleet consists of three ships");
			printf("\033[32m Models appear to be two modular cutters and a scout ship");
			printf("\033[32m Victory chances. 85 percent. I wonder their reasonings");
			printf(" behind such a foolish manuevuer\n");
			printf("\033[32m Anything else Captain?");
			printf("\e[0;37m \nWhat's the state of the ship BRIAN?");
			printf("\n2:When did we get this report?\n3:Any information ");
			printf("on the bandits?\n4: Look's like it's pay day\n");

		}
		else if (react ==4) {
			break;
		}
	}
}

int shipde() {
	int shipexpcho2=0;
	int medbay=0;
	int brianthor=0;
	int dhocon1=0;
	printf("\e[0;37mYou walk into the main hall of the ship. To your right");
	printf("is the stairs down to the cargo hold and medbay");
	printf("\e[0;37m To your left is the airlock and locker room.");
	printf("Faintly you can hear Dhoerrgh sharping his saber through the thick door.");
	printf("\e[0;37mDown the hall are the staterooms for the quest and crew.");
	printf("You think you will find Irgnon in the communal longue.\n ");
	printf("\e[0;37mDoubtlessy your benefactor, Engie, will be in stateroom as well.");
	while (shipexpcho2 !=5) {
		printf("\e[0;37m \n 1:Go down the stairs. \n2: Go into the locker room.");
		printf("\n3:Visit Engie \n4: Go talk to Irgnon \n5: Decide to Rest.");
		scanf("%d", &shipexpcho2);
		if (shipexpcho2 ==1) {
			printf("\e[0;37m\n You go down into the cargo bay.");
			printf("It looks almost cavernous without the tons of cargo and mail you sold today.");
			printf("\e[0;37m The previous owner of the ship had turned a");
			printf("small portion of the cargo bay into a medic bay. ");

			while ( medbay!=2) {
				printf("\n\e[0;37m\n1:Enter the medbay\n2: Go back up");
				scanf("%d",&medbay);
				if (medbay ==1 ) {
					printf("\e[0;37m\n You try to open the door only to find it");
					printf("locked. Ever since Thorvald joined the crew, BRIAN has kept the door locked");
					int brianthor=1;
					printf("\e[0;37m\n1:Enter the medbay\n2: Go back up");
					scanf("%d",&medbay);
				}
				else if (medbay ==2) {
					printf("\n You go back up");
					break;
				}

			}
		}

		if (shipexpcho2 ==2) {
			printf("\n1:\e[0;37m1 You enter into the locker room where Dhoerrgh");
			printf("looks up from his saber. He greets you warmly");
			printf("e[0;33m\n What can I do for you Valce?\n");
			while (dhocon1 !=3) {
				printf("1:\e[0;37m1 1:Check on your rifle\n2:Just checking on you");
				printf("\n3:Talk to you later");
				scanf("%d", &dhocon1);
				if (dhocon1 ==1) {
					printf("1:\e[0;37m \n The gauss rifle is in pristine condition.");
					printf("You reckon that you have %d cartidges of ammo left. ", gaussammo);
					printf("1:\e[0;37m1 1:Check on your rifle\n2:Just checking on you\n3:Talk to you later");
					scanf("%d", &dhocon1);
				}
				if (dhocon1 ==2) {
					printf("e[0;33m\n Doing pretty well, Capt. But I reckon that");
					printf(" we could be making more money if you let me");
					printf("1:\e[0;37m1\n The pirate flashes you a smile full of fangs.");
					printf("You had meet the Vargr before, back when he was a");
					printf(" pirate lord. Seems he has not given up his habits");
					printf("1:\e[0;37m1 1:Check on your rifle\n2:Just checking on you\n3:Talk to you later");
					scanf("%d", &dhocon1);
				}
				if (dhocon1 ==3) {
					printf("e[0;33m\nSee you Valce.");
					break;
				}
			}

		}
		if (shipexpcho2 ==3) {
			printf("\e[0;37m \nYou try the door of Engie's stateroom but it seems");
			printf(" to be locked. Maybe you should come back another time");
			printf("\e[0;37m \n 1:Go down the stairs. \n2: Go into the locker room.");
			printf("\n3:Visit Engie \n4: Go talk to Irgnon \n5: Decide to Rest.");
			scanf("%d", &shipexpcho2);

		}
		if (shipexpcho2 ==4) {
			int Irn1=0;
			int Irn2;
			printf("\e[0;37m \nIrgnon seems not to notice you, absorbed in her");
			printf("work of cleaning the dining tables");
			printf("\e[0;37m \n 1:Greet her. \n2: Go back \n");
			scanf("%d", &Irn1);
			if (Irn1 ==1) {
				printf("\e[1;35m \n Ah, what can I do you for you Captain Lune?");
				printf("\e[0;37m \n 1: How are you feeling about our adventures?");
				printf("\n 2:What novel are you working on now? \n 3: Want to go watch a game of ");
			}

		}
		if (shipexpcho2 ==5) {
			int xx=0;
			int xxx=0;
			int yy=0;
			char asc[100];
			FILE *fp;
			for (xxx=0; xxx<8; xxx++) {
				fp=fopen("takeoff.txt", "r");
				clearScreen();
				sleep (1);
				for (xx=0; xx<13; xx++) {
					fgets(asc, 100, fp);
					for (yy=20-xxx; yy>0; yy--) {
						printf(" ");
					}
					printf("%s", asc);
				}
				fclose(fp);
				printf("\n");
				printf("\e[0;37m \n Do you wish to save?");
				printf("\n 1:Yes \n2: No");
				scanf("%d", &save);
				if (save==1) {
					time_t now = time(NULL);
					printf("Now: %ld\n", now);
					char* string_time = ctime(&now);
					printf("%s\n", string_time);
				}
				printf("\e[0;37m \nYou lie your head on the pillow and before you");
				printf(" know it you hear BRIAN over the intercom");
				shipcombat();
				break;
			}
		}

	}
}
int shipcombat() {
	int enemyheal1=25;
	dice[0]=rand()%6+1;
	dice[1]=rand()%6+1;
	int eshipdamage=0;
	int shipdamage=0;
	eshipdamage=dice[0]+dice[1]+Valcegaussskil;
	shipdamage=dice[0]+dice[1];
	printf("\e[0;37m\n You rush to the turret, ready to fend off the threat");

	while((shiphealth>=0) && (enemyheal1>=0)) {
		dice[0]=rand()%6+1;
		dice[1]=rand()%6+1;
		eshipdamage=dice[0]+dice[1]+Valcegaussskil;
		shipdamage=dice[0]+dice[1];
		enemyheal1=enemyheal1-shipdamage;
		printf("\nEnemy health:%d", enemyheal1);
		shiphealth=shiphealth-shipdamage;
		printf("\nYour health:%d", shiphealth);
		if (eshipdamage>15) {
			printf("\n You suck in a breath as the ship rolls over, and the turret");
			printf("is bathed in cold white light as the ship narrowly avoids the laser.");
			printf("\n You grip the worn triggers as your foot slams down up the pedals to");
			printf("rotate the turret bay.\n 1 \n 2 \n 3 \n the Enemy ship fits ");
			printf("itself in your reticule and you press down upon the button.");
			printf("\n The enemy ship erupts into a cold blue flame that disappears");
			printf("as soon as it came. You think that you hit the enemy's main fuel supply. ");
		}


		if (shiphealth <=0) {
			printf("\nYour ship is destroyed. Game Over");
			printf("\n You have been defeated. Would you like to load your last save?");
			printf("\n 1:Yes \n2:No\n");
			scanf("%d", &savecheck);

			if ((savecheck=1) && (save=1)) {
				printf("\n Reloading Last Save.\n");
				sleep(2);
				shipcombat();
				enemyboard();
				enemyboard2();
				int board();
			}
			if ((savecheck=1) && (save=2)) {
				printf("\n No save detected:\n");
				intro();
				shipexp1();
				shipcombat();
				enemyboard();
				enemyboard2();
				int board();
			}
		
		}

		if ((enemyheal1>1) && (enemyheal1<7)) {
			printf("\n You think you can board the enemy ship in it's current sorry state.");
			boardpoints=1;
			board();
			break;
		}
		if ((shiphealth>1) && (shiphealth<7)) {
			printf("\n Brian's voice blares overe the ship comms.\n");
			printf(" \033[32m Incoming boarding party detected. Crew, neutralise them.");
			eboardpoints=1;
			enemyboard();
			enemyboard2();
			break;
		}

		else if(enemyheal1<=0) {
			printf("\nYou win");
		}
		sleep(2);
	}
}
int enemyboard() {
	if (eboardpoints>=1) {
		printf("\e[0;37m\n The lights of the ship turn red as you rush down the");
		printf("ladder back into the main part of the ship. You have limited time");
		printf(" but so many decisions to make.");
		printf("\n 1: You decide to contact Brian \n 2: You decide to message Dhoerrgh");
		scanf("%d", &comchoice1);
		if ( comchoice1=1) {
			printf("\n Brian get to the docking port with your shield, I need you");
			printf(" to block off the entrance.");
			printf("\033[32m \n Affirmative Captain. I will be there momentarily.");
			CrewSafety=CrewSafety+3;
		}
		if (comchoice1=2) {
			printf("e[0;33m\n What do you need me to do Valce?");
			printf("\e[0;37m\n You're the former pirate, do you know what their tactics could be?");
			printf("e[0;33m\n To be frank Valce these pirates aren't acting like regular ones.");
			printf("No pirate worth a lick of salt would attack a spaceport, but");
			printf(" obviously these fellas are worth that.");
			printf(" My best recommendation? Trap them in the airlock and watch them from the camera.");
			printf("Let's figure out their deal before we go in gun's blazing,");
			printf(" and keep that gauss rifle on low. ");
			printf("We don't want to ruin our own ship.");
			printf("\e[0;37m\n 1: Let's do that \n 2: Let's not risk it and take them now \n");
			scanf("%d", &dhocon2);
		}
	}
}

int enemyboard2() {
	if (eboardpoints>=1) {
		printf("\n You arrive at the airlock, rifle in hand");
		if (comchoice1=1) {
			printf("Soon after you arrive, BRIAN joins you, boarding shield in hand");
			printf(" Dhoerrgh and Engie come as well, both wielding ARCS.");
			printf(" You wait until the airlock is forced open.");
			printf("\n 4 Bandits walk out to meet you. ");
			printf("\n Two weild ACRS as well, another a stunstick.");
			printf("They one at the lead wields a blaster.");
			while (comchoice3!=2) {
				printf("\n 1.Attempt diplomacy\n 2.Start combat");
				scanf("%d", &comchoice3);
				if (comchoice3=1) {
					printf("\n What are you fine fellows doing on my ship?");
					printf("\e[0;31m\n What do you think we are doing. Spreading the word of Cyperon?");
					printf("Get on your knees and throw down your weapons");
					printf("\e[0;37m\n 1:How about we talk this through?");
					printf("\n 2: I could have sworn you were the ship salesmen");
					printf("here to talk about my warrenty");
					scanf("%d", &pircom1);
					if (pircom1 ==1) {
						printf("\e[0;31m\n What is there to talk about. You cannot escape");
						printf("and we have you outnumbered.");
					}
					if (pircom1 ==2) {
						printf("\e[0;31m\nI'm afraid it's expired mate. Why don't you hand it back to us.");
					}
					printf("\e[0;37m\n Dhoerrg whispers to you: ");
					printf("e[0;33m Let me take the lead here Valce, I may be able to talk them down. ");
					printf("\e[0;37m\n 1: I'll let you take the lead. \n 2: No I will solve this");
					scanf("%d", &comchoice4);
					if (comchoice4==1) {
						printf("e[0;33m \n I don't know if you know me gentlemen");
						printf(" but i certainly don't know small fry like you.");
						printf(" But know you're messing with the pirate lord");
						printf(" Dhoerrgh and that you're not gonna survive this.");
						printf(" So why don't you run along and pretend this never happened");
						diplocheck=dice[0]+dice[1]+Dhoerrghcharisma;
						if (diplocheck>=10) {
							printf("\e[0;31m\n Guess you're right mate.");
							printf(" Hope I never see you around.\n");
							break;
						}
						if (diplocheck<10) {
							printf("\e[0; 31m\nNice try but only means you got more loot.");
							comchoice3=2;
							break;
						}


					}
					if(comchoice4 == 2) {
						printf("\e[0;37m\n Gentlemen I don't think you understand");
						printf(" how this will end for you.");
						printf("I'm not sure if you know what a gauss rifle is");
						printf(" or what an admiral of Krim means.");
						printf(" But in sum, it means you don't stand a chance");
						printf("Especially not with the warbot and pirate lord");
						printf(" at my side.");
						diplocheck=dice[0]+dice[1]+ValceCharisma;
						if (diplocheck>=10) {
							printf("\e[0; 31m\n Not worth the risk then mate ");
							printf("Guess we can let you go");
							break;
						}
						if(diplocheck<10) {
							printf("\e[0; 31m\n And destroy your own ship with your");
							printf(" own weapon? Maybe that's why your planet's gone");
							printf(" now Admiral.");
							printf(" Now hand over your goods.");
							comchoice3=2;
							break;
						}
					}
				}
				if (comchoice3==2) {
					combat();

				}

			}

		}
		if (comchoice1=2) {
			printf("\n By the time you arrive at the airlock the pirates are already through and ready to attack.\n");
			combat();
		}

	}
}
int board() {
	if (boardpoints>=1) {
		combat();
	}
}
int rolldice() {
	int dice=rand()%6+1;
	return dice;
}
int combat() {
	printf("\n Start combat");
	int pirattack=2+rolldice()+rolldice();
	int pirdamage=2 +rolldice()+rolldice();
	int pirhealth[4]= {24, 15,15,10};
	int partyhealth[4]= {Valcehealth, Brianhealth, Engiehealth, Dhoehealth};
	int partyarmor[4]= {Valcearmor, Brianarmor,Engiearmor, Dhoearmor};
	int partydamage[3]= {Valcegaussskil,Engiestunner,DhoeACR};



	while (((partyhealth[0]>0) || (partyhealth[1]>0) || (partyhealth[2]>0) || (partyhealth[3]>0)) ||
	        ((pirhealth[0]>0) || (pirhealth[1]>0) || (pirhealth[2]>0) || (pirhealth[3]>0))) {
		int piratechoice=rand()%4;
		int partychoice=rand()%4;
		if (partyhealth[piratechoice]==partyhealth[0]) {
			pirdamage=pirdamage-Valcearmor-CrewSafety;
			if (pirdamage>0) {
				partyhealth[piratechoice]-=pirdamage;
			}
		}
		if (partyhealth[piratechoice]==partyhealth[1]) {
			pirdamage=pirdamage-Brianarmor-CrewSafety;
			if (pirdamage>0) {
				partyhealth[piratechoice]-=pirdamage;
			}
		}
		if (partyhealth[piratechoice]==partyhealth[2]) {
			pirdamage=pirdamage-Engiearmor-CrewSafety;
			if (pirdamage>0) {
				partyhealth[piratechoice]-=pirdamage;
			}
		}
		if (partyhealth[piratechoice]==partyhealth[3]) {
			pirdamage=pirdamage-Engiearmor-CrewSafety;
			if (pirdamage>0) {
				partyhealth[piratechoice]-=pirdamage;
			}
		}
		pirhealth[piratechoice]-=partydamage[partychoice];
		if (partyhealth[piratechoice]<0) {
			partyhealth[piratechoice]=0;
		}

		if (pirhealth[partychoice]<0) {
			pirhealth[partychoice]=0;
		}
		Valcehealth=partyhealth[0];
		Brianhealth=partyhealth[1];
		Engiehealth=partyhealth[2];
		Dhoehealth=partyhealth[3];
		sleep(1);
		printf("\n Valce Health:%d Brian Health:%d Engie Health:%d Dhoerrgh Health:%d\n", partyhealth[0], partyhealth[1],partyhealth[2], partyhealth[3]);
		printf("\n Pirate 1 health:%d Pirate 2 health:%d Pirate 3 health:%d Pirate 4 health:%d\n",pirhealth[0],pirhealth[1],pirhealth[3],pirhealth[3]);
		if ((pirhealth[0]<=0) && (pirhealth[1]<=0) && (pirhealth[2]<=0) && (pirhealth[3]<=0)) {
			printf("\n You win!\n");
			break;
		}
		if ((partyhealth[0]<0) && (partyhealth[1]<0) && (partyhealth[2]<0) && (partyhealth[3]<0)) {
			printf("\n You have been defeated. Would you like to load your last save?");
			printf("\n 1:Yes \n2:No\n");
			scanf("%d", &savecheck);

			if ((savecheck=1) && (save=1)) {
				printf("\n Reloading Last Save.\n");
				sleep(2);
				shipcombat();
				enemyboard();
				enemyboard2();
				int board();
			}
			if ((savecheck=1) && (save=2)) {
				printf("\n No save detected:\n");
				intro();
				shipexp1();
				shipcombat();
				enemyboard();
				enemyboard2();
				int board();
			}
		}



	}
}






void clearScreen() {
	printf("\e[2J\e[H");
}

int shipexp1() {
	//starting location
	int location = 1;

	//initialize cargohold
	Inventory* cargoHold;
	cargoHold = malloc(sizeof(Inventory));

	//initialize gold branches
	strcpy((*cargoHold).gold.oreType,"Gold");
	(*cargoHold).gold.quantity = 0;
	strcpy((*cargoHold).gold.units,"kg");

	//initialize platinum branches
	strcpy((*cargoHold).platinum.oreType,"Platinum");
	(*cargoHold).platinum.quantity = 0;
	strcpy((*cargoHold).platinum.units,"kg");

	//initialize tritium branches
	strcpy((*cargoHold).tritium.oreType,"Tritium");
	(*cargoHold).tritium.quantity = 0;
	strcpy((*cargoHold).tritium.oreType,"Tritium");

	//Exposition
	printf("\033[32m Estimated travel time: two hours and 15 minutes. I suggest you rest captain.");
	printf("\e[0;37m\n The room is bathed in a green glow as holographics spring");
	printf("to life around, the robot idily typing on them as it walks away.");
	printf("\e[0;37mFaintly you feel the hum of the engine below you as the");
	printf("ship prepares to take off.");

	//ship exploration loop
	while (expcho1 !=4) {

		//first ship exploration question
		printf("\e[0;37mWhat will you do?\n 1:Explore the Old Guard.");
		printf("\n 2: Talk to BRIAN\n 3: Mine for resources.\n 4: Get some rest\n");
		scanf("%d", &expcho1);

		if (expcho1 == 1) {
			shipde();
			printf("\e[0;37mWhat will you do?\n 1:Explore the Old Guard.\n");
			printf("2: Talk to BRIAN\n 3: Get some rest\n");
			scanf("%d", &expcho1);
		}
		else if (expcho1 == 2) {
			int Briantalk1=0;
			int Briantalk2=0;
			int Briantalk3=0;
			printf("\e[0;37m\n The Robot's optics on the side of it's head focus");
			printf(" on you. You feel like a fly being watched by a spider");
			printf("\033[32m \n Initating small talk module. What can I do for you Captain?");
			printf("\e[0;37m \n 1:How is it going Brian?\n 2:Leave \n");
			scanf("%d", &Briantalk1);
			if (Briantalk1 == 1) {
				printf("\033[32m \n All systems are nominal. Any other question Captain?\n");
				printf("\e[0;37m 1:Have you found what you are looking for?");
				printf("\n 2: What's your skills again?\n 3: Can you unlock the medbay? ");
				scanf("%d", &Briantalk2);
			}
			if (Briantalk2 == 1) {
				printf("\033[32m \n Negative Captain. My objective remains as continue\n");
				printf("\e[0;37m1: Why do you assume that learning about");
				printf("your origin is what continue means?");
				printf("\n 2: You serious? Did you risk us and a solar system");
				printf(" for that? That could have meant anything!");
				scanf("%d", &Briantalk3);
			}
		}
		else if (expcho1 == 3) {
			//call mining function. Pass location and pointer to cargoHold.
			mining(location,cargoHold);
		}
	}



	if (expcho1 == 4) {


		int xx=0;
		int xxx=0;
		int yy=0;
		char asc[100];
		FILE *fp;
		for (xxx=0; xxx<8; xxx++) {
			fp=fopen("takeoff.txt", "r");
			clearScreen();
			sleep (1);
			for (xx=0; xx<13; xx++) {
				fgets(asc, 100, fp);
				for (yy=20-xxx; yy>0; yy--) {
					printf(" ");
				}
				printf("%s", asc);
			}
			fclose(fp);
			printf("\n");
		}
		printf("\e[0;37m \n Do you wish to save?");
		printf("\n 1:Yes \n2: No\n ");
		scanf("%d", &save);
		if (save==1) {
			time_t now =time(NULL);
			char* string_time = ctime(&now);
			printf("\n last saved: %s\n", string_time);
		}
		printf("\e[0;37m \nYou lie your head on the pillow and before you");
		printf(" know it, you hear BRIAN over the intercom");

	}

}

int main() {
	int z=0;
	int zz=0;
	char as[500];
	int start;
	FILE *fppp;
	for (zz=0; zz<4; zz++) {
		fppp=fopen("title.txt", "r");
		clearScreen();
		sleep (1);
		for (z=0; z<6; z++) {
			fgets(as, 500, fppp);
			printf("%s", as);
		}
		fclose(fppp);
		printf("\n");
	}

	while (start !=3) {
		printf("\e[0;37m\nWelcome To Traveller \n 1: New Game  \n 2:Settings \n 3:Quit\n");

		scanf("%d", &start);
		if (start == 1) {
			intro();
			shipexp1();
			shipcombat();
			enemyboard();
			enemyboard2();
			int board();
		}
		else if (start ==2) {
			printf("\e[1;31mWhat difficulty level?\n 1: Easy\n 2: Standard \n 3: Difficult\n");
			scanf("%d",&difficulty);
			if (difficulty ==1) {
				shiphealth=200;
				Fuel=100;
			}
			else if (difficulty ==2) {
				shiphealth=100;
				Fuel=50;

			}
			else if (difficulty ==3) {
				shiphealth=50;
				Fuel=25;
			}
		}
	}
	return 0;
}
