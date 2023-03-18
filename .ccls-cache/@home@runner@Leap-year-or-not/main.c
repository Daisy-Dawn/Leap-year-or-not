#include <stdio.h>
#include <stdlib.h>

//Write a program that checks whether a year is a leap year or not

int main(void) 
{
  int year;

  printf("Please enter the year:\t");
  scanf("%d", &year);
    system("clear");

  if (year %4 == 0 && year % 100 != 0)
    printf("The year %d is a leap year", year);

  else
    printf("The year %d is not a leap year\n", year);
  
printf("\nEnd of program\n\n");
  sleep (5);
  system("clear");
  printf("Welcome user,");
  
  return 0;
}