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
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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
  print_array(test,SIZE);
  printf("mean: %d\n",find_mean(test,SIZE));

}

/* Add other Implementation File Code Here */
int print_array(unsigned char *array, unsigned int array_size)
{
  unsigned int i=0;
  if(array_size > 0)
  {
    for(i=0;i<array_size;i++)
    {
      printf("%d\n",*(array+i));
     // (i == array_size-1)?printf("\n"):printf(", ");
    }
    return 0;
  }else{
    return -1;
  }
}
unsigned char find_mean(unsigned char *array, unsigned int array_size)
{
  unsigned int mean = 0;
  unsigned int i = 0;
  if(array_size<=0)
  {
    return 0;
  }
  for(i=0;i<array_size;i++)
  {
    mean += (unsigned int)(*(array+i));
  }
  mean = mean/array_size;
  return (unsigned char)mean;
}
