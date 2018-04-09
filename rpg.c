//Bradford Mcdaniel
//csc 251
//lab14

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(void){
int choice;
int battlecommands;
int bossBattle,attackDamage,bossAttackdamage ,BossDamlower=100 ,BossDamnupper=400; //boss range for damage is higher than the kids defend command will have one save after that only damage reduction will be 25%
int demogorgonHP=9999,partyHP=1000;
srand(time(NULL));
puts("welcome to room13 there please chose a direction to move  1 for west 2 for east 3 for south 4 for north");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    	{
		
	puts("You encounter a demogorgon, the kids from stranger things appear to help you fight including eleven");
	puts("battle begins \nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
    scanf("%d",&battlecommands);
 
	 
	 while(battlecommands!=5&&demogorgonHP>0&&partyHP>0)
	{
		if(battlecommands==1)
		{
			
		   
				
	  		 puts("Mike and the other kids ready various weapons none look too dangerous while eleven charges up her psychic powers who do you choice to attack? 1 for the kids 2 for eleven");
	   		 scanf("%d",&bossBattle);
	
				if(bossBattle==1)
				{
					puts("mike and the other kids attack");
					attackDamage= 1+(rand() %25);
					puts("Demogorgon roars and counter attacks");
					bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
				    demogorgonHP-=attackDamage;
					partyHP-=bossAttackdamage;
				    printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
				    puts("maybe we should let eleven attack ");
				}
	 			 if(bossBattle==2)
	 			{
	 			    puts("Eleven attacks!");
	 	            attackDamage= 1+(rand() +1000) %(4000);
	 	            if(attackDamage>3000){
	 	            	
	 	            	puts("demogorgon is pinned against the wall and can't attack!");
	 	            	demogorgonHP-=attackDamage;
					    printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
					    
					    	
					    	
						
					 }
	 				else
	 				{
	 					
	 					puts("demogorgon is stunned but swipes at eleven");
	 					bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
	 					partyHP-=attackDamage;
	 					partyHP+=50;//attack is weaker vs eleven so they don't lose as much
					    demogorgonHP-=attackDamage;
						printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
					    
					    	
					    
						
					 }
				 
				 
				 
				 }
			
				puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			    scanf("%d",&battlecommands);
			
			}		
	
	 if(battlecommands==2)
			{
			puts("Lucas screams how can we defend against This thing!!");
			puts("try something else!");
			puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			scanf("%d",&battlecommands);
			
			}
		
	   if(battlecommands==3)
	   {
	   	puts("Eleven uses eggo waffles increases attack damage! note using this command again will not stack attack damage");
	   	puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
		scanf("%d",&battlecommands);
	   }
	  if(battlecommands==4)
	  
	  {
	  	
	  		puts("cannot escape try something else!");
	  	    puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			scanf("%d",&battlecommands);
	  }
	}
	
					if(partyHP<=50){
						
						puts("game is over the kids have lost the upside down world has become our world");
						return 0;
					}
			        else
			        {
			        	
			        	puts("Eleven destroys the demogorgon but she is pulled into the upside down world as a result to be continued.. you however end up back in your room safe and sound with a box of eggo waffles");
					}
			        	break;
}






	
// end of choice 1 if
	
	
	



case 2:
{
	puts("you move into room with a lake");
	break;
}


case 3:
{
	puts("room fills with water no escape game over");
		break;
	}
	
	case 4:{
		puts(" you find the sword of truth");
			break;
}
default:
{
		puts("wrong button or impossible direction try again");
		break;
}






}
return 0;





}




