/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int x,y;
  float average;
  printf("Enter mark of subject 1 : ");
  scanf("%d",&x);

  printf("Enter mark of subject 2 : ");
  scanf("%d",&y);

average=(x+y)/2.0;

  printf("Avarage of marks  :%.2f",average);
  
  
  return 0;
}

