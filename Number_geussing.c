/*number geussing game
PA106/G/28705/25
Robin kipkorir Mutai*/

#include <stdio.h>//input ouput 
#include <stdlib.h>/*library having rand() and srand() for random
number generation*/ 
#include <time.h>/*for time ,shows where generation has started 
and to prevent random numbe from repating each time*/

int main()
 {
 	int secret_number=0;//variable to store the random number
    int guess;//variable for the guessed number
    int attempts=0;//variable to count the number of attempts
    
	srand(time(NULL));//initialising when the random number is started to be generated
    
    secret_number=(rand() % 20)+1 ;//random number from 1-20 by rand()
    
	while (1){//loop function which runs untill condition is met	
      printf("Number geussing game\n");
      printf("Geussed number(1-20):");//user enters guessed number
      scanf("%d",&guess);//stored in guess
      attempts=attempts+1;//the number of attempts is incremeted each time
      
       if(guess>secret_number){//checks if guess is greater than the guess
       	printf("Too high!\n");//displays if it is greater
	   }
       else if(guess<secret_number){//checks if guess is saller
       	printf("Too low!\n");//displays if guess is smaller
	   }
       else{
       	printf("Congratulations!\n");//display since guess is same as the random number
       printf("The number of attempts is:%d.\n",attempts);
       break;
	   }
   }
   return 0;
 }