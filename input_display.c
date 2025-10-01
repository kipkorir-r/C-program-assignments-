#include <stdio.h>//Standard input-output file
int main()
{
    //variabl declaration
	float height;//float to stre height in decimals 
	double bank_balance;//double to store  
	long phone_number;//store phone number
	//user to enter there details
	printf("Enter your height(in meters or centimetrs):");
	scanf("%f",&height);
	printf("Enter your bank balnce(in kenyan shilings):");
	scanf("%lf",&bank_balance);
	printf("Enter your phone number:");
	scanf("%ld",&phone_number);
	//display back the details entered by the user
	printf("Details entered:\n");
	printf("Height:%.2f\n",height);//%.2f gives to 2 decimal places 
	printf("Bank balance :Ksh %.2lf\n",bank_balance);
	printf("Phone number :%ld\n",phone_number);
    return 0;//program ends
}