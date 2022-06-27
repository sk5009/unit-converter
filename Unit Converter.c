#include <stdio.h>
int main()
{
 char category;
 int tempChoice;
 int currencyChoice;
 int massChoice;

 int userinputF; // User inputted Fahrenheit;
 int userinputK;// User inputted Kelvin;

 int userinputEurotoINR; // User inputted for Euro to INR;
 int userinputUSDtoINR; // User inputted for USD to INR;
 int userinputRMBtoINR; // User inputted for RMB to INR;
 int userinputPoundtoINR; // User inputted for Pound to INR;
 int userinputAUDtoINR; // User inputted for Euro to INR;

 int userinputOunce; // User inputted for Ounce;
 int userinputPounds; // User inputted for Pounds;

 float fahrenheitToCelsius; // variable that stores the converted F->C;
 float kelvinToCelsius; // variable that stores the converted K->C;


 float EUROtoINR ; // varaible that stores the converted EURO->INR;
 float USDtoINR; // stores the converted USD->INR;
 float RMBtoINR; // stores the converted RMB->INR;
 float PoundtoINR ; // varaible that stores the converted POUND->INR;
 float AUDtoINR ; // varaible that stores the converted AUD->INR;

 float ounceToGrams; // stores the converted Ounce->Grams;
 float poundsToGrams; // stores the vonerted Pounds->Grams;

 printf("Welcome to Unit Converter! \n");
 printf("Here is a list of conversation to choose from: \n");
 printf("Temperature(T),Currency(C),Mass(M) \n");
 printf("Please enter the letter you want to convert.\n");
 scanf("%c",&category);

 if(category == 'T')
 {
 printf("Welcome to Temperature Converter! \n");
 printf("Here is a list of conversations to choose from: \n");
 printf("Enter 1 for Fahrenheit to Celsius. \n");
 printf("Enter 2 for Kelvin to Celsius. \n");
 scanf("%d",&tempChoice);
 if(tempChoice == 1)
 {

 printf("Please enter the Fahrenheit degree: \n");
 scanf("%d",&userinputF);
 fahrenheitToCelsius = ((userinputF-32) * (5.0/9.0));
 printf("Celsius: %f",fahrenheitToCelsius);
 }
 if(tempChoice == 2)
 {
 printf("Please enter the Kelvin degree: \n");
 scanf("%d",&userinputK);
 kelvinToCelsius = userinputK-273.15;
 printf("Celsius: %f",kelvinToCelsius);
 }

 }
 if(category == 'C')
 {
 printf("Welcome to Currency Converter! \n");
 printf("Here is a list of conversations to choose from: \n");
 printf("Enter 1 for Euro to INR. \n");
 printf("Enter 2 for USD to INR. \n");
 printf("Enter 3 for RMB to INR \n");
 printf("Enter 4 for Pound to INR \n");
 printf("Enter 5 for AUD to INR \n");

 scanf("%d",&currencyChoice);
 if(currencyChoice == 1)
 {
 printf("Please enter the Euro amount: \n");
 scanf("%d",&userinputEurotoINR);
 EUROtoINR = userinputEurotoINR * 82.79;
 printf("INR: %.2f",EUROtoINR); // %.2f = rounds the float to only
 2 decimal places;
 }
 if(currencyChoice == 2)
 {
 printf("Please enter the USD amount: \n");
 scanf("%d",&userinputUSDtoINR);
 USDtoINR = userinputUSDtoINR * 77.84;
 printf("INR: %.2f",USDtoINR);
 }
 if(currencyChoice == 3)
 {
 printf("Please enter the RMB amount: \n");
 scanf("%d",&userinputRMBtoINR);
 RMBtoINR = userinputRMBtoINR * 11.64;
 printf("INR: %.2f",RMBtoINR);
 }
 if(currencyChoice == 4)

 {
 printf("Please enter the pound amount: \n");
 scanf("%d",&userinputPoundtoINR);
 PoundtoINR = userinputPoundtoINR * 97.17;
 printf("INR: %.2f",PoundtoINR);
 }
 if(currencyChoice == 5)
 {
 printf("Please enter the AUD amount: \n");
 scanf("%d",&userinputAUDtoINR);
 AUDtoINR = userinputAUDtoINR * 55.38;
 printf("INR: %.2f",AUDtoINR);
 }
 }
 if(category == 'M')
 {
 printf("Welcome to Mass Converter! \n");
 printf("Here is a list of conversations to choose from: \n");
 printf("Enter 1 for ounces to grams. \n");
 printf("Enter 2 for pounds to grams. \n");
 scanf("%d",&massChoice);
 if(massChoice == 1)

 {
 printf("Please enter the ounce amount: \n");
 scanf("%d",&userinputOunce);
 ounceToGrams = userinputOunce * 28.3495;
 printf("Grams: %.2f",ounceToGrams);
 }
 if(massChoice == 2)
 {
 printf("Please enter the pounds amount: \n");
 scanf("%d",&userinputPounds);
 poundsToGrams = userinputPounds * 453.592 ;
 printf("Grams: %.2f",poundsToGrams);
 }
 }
 return 0;
}
