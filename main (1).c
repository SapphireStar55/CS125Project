#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int difficulty=2;
int shiphealth=100;
int Fuel=50;
int Valcegaussskil=5;
int gaussammo=50;
int ValceCharisma=2;
int expcho1=0;
int dice[2];
int shipcombat ();
 int boardpoints=0;
 int eboardpoints=0;
 int CrewSafety=0;
 int dhocon2=0;

int react2() {
	int rec2;
	printf("\e[0;37m1: Of course BRIAN, I am captain for my foresight after all\n2: No I was making sure you were doing your job\n");
	scanf("%d", &rec2);
	if (rec2== 1)
		printf("\e[1;34m The robot does not respond. Perhaps it is not capable of detecting sarcasm\n");
	else
		printf("\033[32m An illogical assumption Captain. I am incapable of the defect called laziness\n");
}
int intro() {
	int react;
	printf("\e[1;34m You are standing at the bridge of your ship, The Old Guard, ");
	printf("\e[1;34m looking over the montly costs. Mortage is due soon and you have");
	printf("\e[1;34m scant to pay it. As you ponder your condrum the pilot walks up.");
	printf("\e[1;34m The lean robot hands you a dataslate with one it's four hands.");
	printf("\e[1;34m It's main optic is fixed upon you as you read the report.");
	printf("\e[1;34m In the lengthy prose of typical corpo talk, it details a attack on a nearby Bridge Construction Company Shipyard ");
	printf("\e[1;34m and the price for catching the pirates responible");
	printf("\e[0;37m\n1: What's the state of the ship BRIAN?\n2:When did we get this report?\n3:Any information on the bandits?\n4: Look's like it's pay day\n");
	while (react !=4) {
		scanf("%d", &react);
		if (react == 1) {
			printf("\033[32mCaptain,we have %d containers of fuel left. Scans indictate that hull has %d hardpoints. Anything else Captain?\n", Fuel, shiphealth);
			printf("\e[0;37m What's the state of the ship BRIAN?\n2:When did we get this report?\n3:Any information on the bandits?\n4: Look's like it's pay day\n");
			scanf("%d", &react);

		}
		else if (react == 2) {
			printf("\033[32m A minute ago. The request comes from Camp Ada.");
			printf("\033[32m Message delay of a hour. This request was thus sent a hour and two minutes ago captain.");
			printf("\033[32m I assume you ask to aid calculations on where the pirates could be?\n");
			react2();
			printf("\e[0;37m \nWhat's the state of the ship BRIAN?\n2:When did we get this report?\n3:Any information on the bandits?\n4: Look's like it's pay day\n");
			scanf("%d", &react);

		}
		else if (react ==3) {
			printf("\033[32m Analyzing the files linked now.");
			printf("\033[32m Data indictates that the pirates's fleet consists of three ships");
			printf("\033[32m Models appear to be two modular cutters and a scout ship");
			printf("\033[32m Victory chances. 85 percent. I wonder their reasonings behind such a foolish manuevuer\n");
			printf("\033[32m Anything else Captain?");
			printf("\e[0;37m \nWhat's the state of the ship BRIAN?\n2:When did we get this report?\n3:Any information on the bandits?\n4: Look's like it's pay day\n");
			scanf("%d", &react);

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
	printf("\e[0;37mYou walk into the main hall of the ship. To your right is the stairs down to the cargo hold and medbay");
	printf("\e[0;37m To your left is the airlock and locker room. Faintly you can hear Dhoerrgh sharping his saber through the thick door.");
	printf("\e[0;37mDown the hall are the staterooms for the quest and crew. You think you will find Irgnon in the communal longue.\n ");
	printf("\e[0;37mDoubtlessy your benefactor, Engie, will be in stateroom as well.");
	while (shipexpcho2 !=5) {
		printf("\e[0;37m \n 1:Go down the stairs. \n2: Go into the locker room. \n3:Visit Engie \n4: Go talk to Irgnon \n5: Decide to Rest.");
		scanf("%d", &shipexpcho2);
		if (shipexpcho2 ==1) {
			printf("\e[0;37m\n You go down into the cargo bay. It looks almost cavernous without the tons of cargo and mail you sold today.");
			printf("\e[0;37m The previous owner of the ship had turned a small portion of the cargo bay into a medic bay. ");

			while ( medbay!=2) {
				printf("\n\e[0;37m\n1:Enter the medbay\n2: Go back up");
				scanf("%d",&medbay);
				if (medbay ==1 ) {
					printf("\e[0;37m\n You try to open the door only to find it locked. Ever since Thorvald joined the crew, BRIAN has kept the door locked");
					int brianthor=1;
					printf("\n1:\e[0;37m\n1:Enter the medbay\n2: Go back up");
					scanf("%d",&medbay);
				}
				else if (medbay ==2) {
					printf("\n You go back up");
					break;
				}

			}
		}

		if (shipexpcho2 ==2) {
			printf("\n1:\e[0;37m1 You enter into the locker room where Dhoerrgh looks up from his saber. He greets you warmly");
			printf("e[0;33m\n What can I do for you Valce?\n");
			while (dhocon1 !=3) {
				printf("1:\e[0;37m1 1:Check on your rifle\n2:Just checking on you\n3:Talk to you later");
				scanf("%d", &dhocon1);
				if (dhocon1 ==1) {
					printf("1:\e[0;37m \n The gauss rifle is in pristine condition. You reckon that you have %d cartidges of ammo left. ", gaussammo);
					printf("1:\e[0;37m1 1:Check on your rifle\n2:Just checking on you\n3:Talk to you later");
					scanf("%d", &dhocon1);
				}
				if (dhocon1 ==2) {
					printf("e[0;33m\n Doing pretty well, Capt. But I reckon that we could be making more money if you let me");
					printf("1:\e[0;37m1\n The pirate flashes you a smile full of fangs. You had meet the Vargr before, back when he was a pirate lord. Seems he has not given up his habits");
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
			printf("\e[0;37m \nYou try the door of Engie's stateroom but it seems to be locked. Maybe you should come back another time");
			printf("\e[0;37m \n 1:Go down the stairs. \n2: Go into the locker room. \n3:Visit Engie \n4: Go talk to Irgnon \n5: Decide to Rest.");
			scanf("%d", &shipexpcho2);

		}
		if (shipexpcho2 ==4) {
			int Irn1=0;
			int Irn2;
			printf("\e[0;37m \nIrgnon seems not to notice you, absorbed in her work of cleaning the dining tables");
			printf("\e[0;37m \n 1:Greet her. \n2: Go back \n");
			scanf("%d", &Irn1);
			if (Irn1 ==1) {
				printf("\e[1;35m \n Ah, what can I do you for you Captain Lune?");
				printf("\e[0;37m \n 1: How are you feeling about our adventures?\n 2:What novel are you working on now? \n 3: Want to go watch a game of ");
			}

		}
		if (shipexpcho2 ==5) {
			printf("\e[0;37m \nYou lie your head on the pillow and before you know it you hear BRIAN over the intercom");
			shipcombat();
			break;
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
   enemy
       if (eshipdamage>12){
       printf("\n You suck in a breath as the ship rolls over, and the turret is bathed in cold white light as the ship narrowly avoids the laser.");
       printf("\n You grip the worn triggers as your foot slams down up the pedals to rotate the turret bay.\n 1 \n 2 \n 3 \n the Enemy ship fits itself in your reticule and you press down upon the button.");
       printf("\n The enemy ship erupts into a cold blue flame that disappears as soon as it came. You think that you hit the enemy's main fuel supply. ");
       }
  

    if (shiphealth <=0) {
			printf("\nYour ship is destroyed. Game Over");
		}
   if ((enemyheal>0) && (enemyheal<5)){
       printf("\n You think you board the enemy ship in it's current sorry state.");
       boardpoints=1;
       break;
       }
     if ((shiphealth>0) && (shiphealth<5)){
       printf("\n Brian's voice blares overe the ship comms.\n");
       printf(" \033[32m Incoming boarding party detected. Crew, neutralise them.");
       eboardpoints=1;
       break;
       }
  
		else if(enemyheal1<=0) {
			printf("\nYou win");
		}
		sleep(1);
	}
}
int enemyboard(){
int comchoice1=0,comchoice2=0;
if (eboardpoints>=1){
printf("\e[0;37m\n The lights of the ship turn red as you rush down the ladder back into the main part of the ship. You have limited time but so many decisions to make.");
printf("\n 1: You decide to contact Brian \n 2: You decide to message Dhoerrgh \n 3:You call Engie \n 4; You contact Thorvald"); 
scanf("%d", &comchoice1);
if ( comchoice1=1){
printf("\n Brian get to the docking port with your shield, I need you to block off the entrance.");
printf("\033[32m \n Affirmative Captain. I will be there momentarily.");
crewsafety=crewsafety+3;
}
if (comchoice1=2){
printf("e[0;33m\n What do you need me to do Valce?");
printf("\e[0;37m\n You're the former pirate, do you know what their tactics could be?");
printf("e[0;33m\n To be frank Valce these pirates aren't acting like regular ones. No pirate worth a lick of salt would attack a spaceport, but obviously these fellas are worth that.");
printf(" My best recommendation? Trap them in the airlock and watch them from the camera. Let's figure out their deal before we go in gun's blazing, and keep that gauss rifle on low. We don't want to ruin our own ship.");
printf("\e[0;37m\n 1: Let's do that \n 2: Let's not risk it and take them now \n");
scanf("%d", &dhocon2);





void clearScreen() {
	printf("\e[2J\e[H");
}

int shipexp1() {
	printf("\033[32m Estimated travel time: two hours and 15 minutes. I suggest you rest captain.");
	printf("\e[0;37m\n The room is bathed in a green glow as holographics spring to life around, the robot idily typing on them as it walks away.");
	printf("\e[0;37mFaintly you feel the hum of the engine below you as the ship prepares to take off.");
	printf("\e[0;37mWhat will you do?\n 1:Explore the Old Guard.\n 2: Talk to BRIAN\n 3: Get some rest\n");
	scanf("%d", &expcho1);
	while (expcho1 !=3) {
		if (expcho1 == 1) {
			shipde();
			printf("\e[0;37mWhat will you do?\n 1:Explore the Old Guard.\n 2: Talk to BRIAN\n 3: Get some rest\n");
			scanf("%d", &expcho1);
		}
		if (expcho1 == 2) {
			int Briantalk1=0;
			int Briantalk2=0;
			int Briantalk3=0;
			printf("\e[0;37m\n The Robot's optics on the side of it's head focus on you. You feel like a fly being watched by a spider");
			printf("\033[32m \n Initating small talk module. What can I do for you Captain?");
			printf("\e[0;37m \n 1:How is it going Brian?\n 2:Leave \n");
			scanf("%d", &Briantalk1);
			if (Briantalk1 == 1) {
				printf("\033[32m \n All systems are nominal. Any other question Captain?\n");
				printf("\e[0;37m 1:Have you found what you are looking for? \n 2: What's your skills again?\n 3: Can you unlock the medbat? ");
				scanf("%d", &Briantalk2);
        }
				if (Briantalk2 == 1) {
					printf("\033[32m \n Negative Captain. My objective remains as continue\n");
					printf("\e[0;37m1: Why do you assume that learning about your origin is what continue means? \n 2: You serious? Did you risk us and a solar system for that? That could have meant anything!");
					scanf("%d", &Briantalk3);
                      }
				}
		

		
		if (expcho1 ==3) {
		

				int xx=0;
				int xxx=0;
				int yy=0;
				char asc[100];
				FILE *fp;
				for (xxx=0; xxx<10; xxx++) {
					fp=fopen("takeoff.txt", "r");
					clearScreen();
					sleep (.95);
					for (xx=0; xx<14; xx++) {
						fgets(asc, 100, fp);
						for (yy=20-xxx; yy>0; yy--) {
							printf(" ");
						}
						printf("%s", asc);
					}
					fclose(fp);
				}
				printf("\e[0;37m \nYou lie your head on the pillow and before you hear it you hear BRIAN over the intercom");
			}
}
}
	
	int main() {
		int z=0;
	int zz=0;
	char as[100];
	int start;
		FILE *fppp;
		for (zz=0; zz<10; zz++) {
			fppp=fopen("title.txt", "r");
			clearScreen();
			sleep (1);
			for (z=0; z<6; z++) {
				fgets(as, 100, fppp);
				printf("%s", as);
			}
			fclose(fppp);
		}

		while (start !=3) {
			printf("\e[0;37m\nWelcome To Traveller  \n 2:Settings \n 3:Quit\n");
			
			scanf("%d", &start);
			if (start == 1) {
				intro();
				shipexp1();
				shipcombat();
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











