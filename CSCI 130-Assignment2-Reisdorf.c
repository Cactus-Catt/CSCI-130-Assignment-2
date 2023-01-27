// Assignment 2 - Reisdorf - CSCI 130, Online, Spring 2023 //
// Program arithmetic and comparing three numbers in C //

#include <stdio.h>

int main(void) {

int x, y, z, sum, average, product;
  
  printf("Enter the first number:\n");
  scanf("%d", &x);

  printf("Enter the second number:\n");
  scanf("%d", &y);

  printf("Enter the third number:\n");
  scanf("%d", &z);

sum = x + y + z;

  printf("The Sum is: %d\n", sum );
  
average = ( x + y + z ) / 3;

  printf("The Average is: %d\n", average);
  
product = ( x * y ) * z;

  printf("The Product is : %d\n", product);

  //if statement - "smallest number is:" //

if ( x < y ) {
    if ( x < z ) {
      printf("The smallest number is: %d\n", x );
    }
  }

if ( y < x ) {
  if (y < z ) {
    printf("The smallest number is: %d\n", y );
  }
}  

if ( z < x ) {
  if ( z < y ) {
    printf("The smallest number is: %d\n", z);
  }
} 

// "largest number is:" //

if ( x > y ) {
  if ( x > z ) {
    printf("The largest number is: %d\n", x);
  }
} 

if ( y > x ) {
  if ( y > z ) {
    printf("The largest number is: %d\n", y);
  }
} 

if ( z > x ) {
  if ( z > y ) {
    printf("The largest number is: %d\n", z);
  }
} 
  
  return 0;
}