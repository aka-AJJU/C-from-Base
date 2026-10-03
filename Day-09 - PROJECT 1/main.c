#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_gusesses = 0;
    int guessed;
    
    do{
printf("Gusse the number");
scanf("%d", &guessed);
if(guessed>randomNumber){
        printf("Lower number please!\n");
    }
    else{
        printf("Higher number please!\n");
    }
no_of_gusesses++;
    }while(guessed!=randomNumber);
    printf("You gissed the number in %d guesses", no_of_gusesses);
    return 0;
}