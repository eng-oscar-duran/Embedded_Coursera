/******************************************************************************
 * Copyright (C) 2023 by Oscar Duran 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Oscar Duran is not liable for an misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Print stats of an unsigned char array
 *
 * This program can analyze an array of unsigned char data items and report analytics
 * on the mean, minimum, maximum and median of the data set, in adition this reorder 
 * the data set from large to small. All statistics are rounded down to the nearest
 * integer, all the data will print to the screen.
 *
 * @author Oscar Duran
 * @date 02-27-2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_stats(test,SIZE);
}

/* Add other Implementation File Code Here */
int print_array(unsigned char *array, unsigned int lenght)
{
  unsigned int i=0;
  if(lenght > 0)
  {
    printf("[");
    for(i=0;i<lenght;i++)
    {
      printf("%d",*(array+i));
      (i == lenght-1)?printf("]\n"):printf(", ");
    }
    return 0;
  }else{
    return -1;
  }
}
unsigned char find_mean(unsigned char *array, unsigned int lenght)
{
  unsigned int mean = 0;
  unsigned int i = 0;
  if(lenght<=0)
  {
    return 0;
  }
  for(i=0;i<lenght;i++)
  {
    mean += (unsigned int)(*(array+i));
  }
  mean = mean/lenght;
  return (unsigned char)mean;
}
unsigned char find_minimum(unsigned char *array, unsigned int lenght)
{
  unsigned char minimum = 0;
  unsigned int i;
  if (lenght > 0)
  {
    minimum = *array;
    for (i = 0; i < lenght; i++)
    {
      if(minimum > *(array + i))
      {
        minimum = *(array + i);
      }
    }
    return minimum;
  }else{
    return 0;
  }
}
unsigned char find_maximum(unsigned char *array, unsigned int lenght)
{
  unsigned char maximum = 0;
  unsigned int i;
  if (lenght > 0)
  {
    maximum = *array;
    for (i = 0; i < lenght; i++)
    {
      if(maximum < *(array + i))
      {
        maximum = *(array + i);
      }
    }
    return maximum;
  }else{
    return 0;
  }
}
void sort_array(unsigned char *array, unsigned int lenght)
{
  // Buble sort algorithm 
  int i=0 , j=0; 
  unsigned char temp=0;
  for (i = 0 ; i < ( lenght - 1 ); i++)
  {
    for (j= 0 ; j < (lenght - i - 1); j++)
    {
      if(array[j] < array[j+1])
      {
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}
unsigned char find_median(unsigned char *array, unsigned int lenght)
{
  unsigned int  median = 0; 
  // if number of elements are even
  if(lenght%2 == 0)
  {
    median = ((unsigned int)*(array + (lenght-1)/2) + (unsigned int)*(array + lenght/2))/2;
  }else{ 
  // if number of elements are odd
    median = *(array + lenght/2);
  } 
  return (unsigned char)median; 
}
int print_stats(unsigned char *array, unsigned int lenght)
{
  printf("**** Statististics for input array ****\n\n");
  printf("-* Input array: \n\n");
  print_array(array,lenght);
  printf("\n-* Size: %d\n",lenght);
  printf("-* Mean: %d\n",find_mean(array,lenght));
  printf("-* Minimum: %d\n",find_minimum(array,lenght));
  printf("-* Maximum: %d\n",find_maximum(array,lenght));
  sort_array(array,lenght);
  printf("-* Median: %d\n",find_median(array,lenght));
  printf("-* Sorted array (in descending order): \n\n");
  print_array(array,lenght);
  printf("\n***************************************\n");
}