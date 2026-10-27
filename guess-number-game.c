#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guessNumber,randomNumber;
    int startingRange=1;
    int endingRange=100;
    int attempt=0;
    srand(time(NULL));
    randomNumber= rand()%endingRange+1;

    printf("\nguess number game.\n ");
    while(1)
    {
     printf("\nguess a number between %d-%d:",startingRange,endingRange);
    scanf("%d", &guessNumber);
    if(guessNumber<1 || guessNumber>100){
        printf("invalid guess! enter a number between %d-%d",startingRange,endingRange);
        continue;
    }
    attempt++;
    if(guessNumber>randomNumber)
    {
        printf("too high! try again.\n");
    }
    else if(guessNumber<randomNumber)
    {
        printf("too low! try again.\n");
    }
    else{
        printf("congratulation! you guessed the number.\n");
        printf("the correct number was %d.\n",randomNumber);
        printf("total valid attempt:%d.\n",attempt);
        break;
       }
      }


    return 0;
}

