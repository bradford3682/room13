//Bradford Mcdaniel
//csc 251
//lab14
#include<stdlib.h>
#include<stdio.h>

int main(void){
char choice;

puts("welcome to room13 there please chose a direction to move  w for west e for east s for south n for north");
scanf("%c",choice);
if(choice=='n'){
puts("you fell into a pit of snakes game over");
}

else if(choice=='s'){
puts("you move into room with a lake");

}


else if(choice=='e'){
puts("you get audited you are now poor game over");
}


else if(choice=='w'){
puts(" you find the sword of truth");

}
else{
puts("wrong button or impossible direction try again");
}
return 0;



}

