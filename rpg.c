//Bradford Mcdaniel
//csc 251
//lab14
#include<stdlib.h>
#include<stdio.h>

int main(void){
char choice;

puts("welcome to room13 there please chose a direction to move  1 for west 2 for east 3 for south 4 for north");
scanf("%c",choice);
if(choice=='1'){
puts("you fell into a pit of snakes game over");
}

else if(choice=='2'){
puts("you move into room with a lake");

}


else if(choice=='3'){
puts("you get audited you are now poor game over");
}


else if(choice=='4'){
puts(" you find the sword of truth");

}
else{
puts("wrong button or impossible direction try again");
}
return 0;



}

