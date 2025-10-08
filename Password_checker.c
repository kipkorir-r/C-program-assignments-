/*number geussing game
PA106/G/28705/25
Robin kipkorir Mutai*/

#include <stdio.h>//input output
#include <string.h>//string library having string comparison

int main()
{
    char password[20];//seetting the variable passwrd to character

    do //start of do while loop
    {
        printf("Enter password: ");//user enters password
        scanf("%s", &password);  // entered password is stored

        if (strcmp(password, "1234") != 0) /*the strcmp() compares the password enter with the 
correct password and returns a value 0 if they are the same*/
        {
            printf("Wrong password, try again.\n");//displayed when the password doesnt match 
        }
    } while (strcmp(password, "1234") != 0);//the loop is repeated when the password is incorrect

    printf("Access Granted\n");//printed when password is correct
    return 0;//program ends

}
