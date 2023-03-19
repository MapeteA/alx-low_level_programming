#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(void)
}

	int alea(int n){ 
  assert (0 < n && n <= RAND_MAX); 
  int partSize = 
    n == RAND_MAX ? 1 : 1 + (RAND_MAX-n)/(n+1); 
  int maxUsefull = partSize * n + (partSize-1); 
  int draw; 
  do { 
    draw = rand(); 
  } while (draw > maxUsefull); 
  return draw/partSize; 
}
