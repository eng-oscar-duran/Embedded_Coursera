/******************************************************************************
 * Copyright (C) 2023 by Oscar Duran
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Oscar Duran is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Statistics function definitions for unsigned char arrays
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
#ifndef __STATS_H__
#define __STATS_H__
/**
 * @brief Print values of an array
 *
 * Given an array of unsigned char data and lenght, prints array to the screen.
 *
 * @param *array An unsigned char pointer to and n-element data array
 * @param legnt An unsigned integer as the size ofthe array
 *
 * @return An int resul from the function, 0 if all Ok and -1 fi something is wrong.
 */
int print_array(unsigned char *array, unsigned int lenght);
 /**
 * @brief Find mean of an array
 *
 * Given an array of data an lenght, returns the mean. 
 *
 * @param *array unsigned char pointer to array
 * @param lenght unsigned int array lenght
 *
 * @return unsigned char nearest integer to mean
 */
unsigned char find_mean(unsigned char *array, unsigned int lenght);
/**
 * @brief Find minimum value of an array
 *
 * Given an array of data an lenght, returns the mimimum value. 
 *
 * @param *array unsigned char pointer to array
 * @param lenght unsigned int array lenght
 *
 * @return unsigned char minimum value
 */
unsigned char find_minimum(unsigned char *array, unsigned int lenght);
/**
 * @brief Find maximum value of an array
 *
 * Given an array of data an lenght, returns the maximum value. 
 *
 * @param *array unsigned char pointer to array
 * @param lenght unsigned int array lenght
 *
 * @return unsigned char maximum value
 */
unsigned char find_maximum(unsigned char *array, unsigned int lenght);
/**
 * @brief Sort an array in descending order
 *
 * Given an array of data input an lenght, sorts the array from largest to smallest.
 * The zeroth element should be the largest value, and the las element (lenght-1) 
 * should be the smallest value, return sorted values into same data array. 
 *
 * @param *array unsigned char pointer to input array
 * @param lenght unsigned int array lenght
 *
 * @return nothing to return
 */
void sort_array(unsigned char *arrayInput, unsigned int lenght);
/**
 * @brief Find median of an array
 *
 * Given an array of data an lenght, returns the median. 
 *
 * @param *array unsigned char pointer to array
 * @param lenght unsigned int array lenght
 *
 * @return unsigned char nearest integer to median
 */
unsigned char find_median(unsigned char *array, unsigned int lenght);
/**
 * @brief Print statistics of an array
 *
 * Given an array of unsigned char data and lenght, prints the mean, 
 * median, minimum value, and maximum value to the screen.
 *
 * @param *array An unsigned char pointer to and n-element data array
 * @param legnt An unsigned integer as the size ofthe array
 *
 * @return An int resul from the function, 0 if all Ok and -1 if something is wrong.
 */
int print_stats(unsigned char *array, unsigned int lenght);
#endif /* __STATS_H__ */
