#include <stdio.h>

int problem1() {

  int sum = 0;
  int count = 0;
  for (count = 1; count <=1000; count++) {
    if (count % 3 == 0) {
      sum += count;
    }
    else if (count % 5 == 0) {
      sum += count;
    }
  }

  printf("sum of all multiples of 3 and 5 below 1000: %d\n", sum);
  return 0;

}

int fibonnaci(int place) {

  if (place <= 2) {
    return 1;
  }
  else {
    return (fibonnaci(place-1) + fibonnaci(place-2));
  }

}

int problem2() {

  int sum = 0;
  for (int i = 1; fibonnaci(i) <= 4000000; i++) {
    sum += fibonnaci(i);
  }
  printf("sum of even-valued fibonacci terms: %d\n", sum);
  return 0;

}

int problem5() {

  int increment = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
  int number = 0;
  int reached = 0;
  int tally = 0;
  while (!reached) {
    number += increment;
    tally = 0;
    for (int i = 2; i <= 20; i++) {
      if (number % i == 0) {
        tally++;
      }
    }
    if (tally == 19) {
      reached = number;
    }
  }
  printf("finds the smallest number divisible by all numbers from 1 to 20: %d\n", reached);
  return 0;

}

int problem6() {

  int sumofsquares = 0;
  for (int i = 1; i <= 100; i++) {
    sumofsquares += i*i;
  }

  int squareofsums = 0;
  for (int i = 1; i <= 100; i++) {
    sumofsquares += i;
  }
  sumofsquares = sumofsquares * sumofsquares;

  int difference = sumofsquares - squareofsums;
  printf("difference between sum of squares and square of sum: %d\n", difference);
  return 0;

}
