#include <stdio.h>

int main(void){
  float amountPLN, amountUSD; // amount of polish zloty to convert
  float rate = 3.8827f; // rate of the PLN->USD by NBP

  printf("Welcome in PLNCurrencyConversion 1.0!\n\n");

  printf("Enter amount to convert: ");
  scanf("%f", &amountPLN); // taking amount from the user
  amountUSD = amountPLN / rate;
  printf("\nYou have: %3.fUSD", amountUSD); // printing amount of cash after convertion

  return 0;
}
