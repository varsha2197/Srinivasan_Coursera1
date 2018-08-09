/******************************************************************************
 * Copyright (C) 2018 by Varsha Srinivasan
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Analyzes and prints statistical data like mean, medium, maximum 
 * and minimum number present in a char array, followed by sorting the 
 * array in descending order.
 *        
 * This program analyzes an array of unsigned char data items and   
 * reports analytics on the maximum, minimum, mean, and median of the 
 * data set. In addition, the array is also reorderedin descnding order, 
 * i.e., from large to small. All statistics are rounded down to the 
 * nearest integer.
 *               
 * @author Varsha Srinivasan
 * @date 9th August 2018
 *                        
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the array when Given an array of data and a length.
 *     
 * This function inputs an unsigned char array as a pointer and the length
 * of the array and displays the array from left to right using a 'for'
 * loop. 
 *            
 * @param *t the array to be displayed
 * @param size the length of the array
 * @return nothing to be returned
 */
void print_array(unsigned char *,  unsigned int);


/**
 * @brief Given an array of data and a length, returns the maximum.
 *    
 * This function inputs an unsigned char array as a pointer and the length
 * of the array and finds the maximum number by first assigning first 
 * element to 'max'. It then compares every element with max and if an 
 * element is larger than max then max is assigned the new element and so
 * on. The function finally returns the maximum value.
 *              
 * @param *t the array to be displayed
 * @param size the length of the array
 * @return the maximum value present in the array.
 */
int find_maximum(unsigned char *, unsigned int);


/**
 * @brief Given an array of data and a length, returns the minimum.
 *    
 * This function inputs an unsigned char array as a pointer and the length
 * of the array and finds the minimum number by first assigning first 
 * element to 'min'. It then compares every element with min and if an 
 * element is smaller than max, then min is assigned the new element.
 * The function finally returns the minimum value.
 *               
 * @param *t the array to be displayed
 * @param size the length of the array 
 * @return the minimum value present in the array.
 */
int find_minimum(unsigned char *, unsigned int);


/**
 * @brief Given an array of data and a length, returns the mean of the  
 * dataset.
 *      
 * This function inputs an unsigned char array as a pointer and the length
 * of the array and calculates the sum of the elements and then dividing  
 * the sum(total) by the size of the array.The function finally returns 
 * the mean value.
 *               
 * @param *t the array to be displayed
 * @param size the length of the array 
 * @return the mean value of the array.
 */
int find_mean(unsigned char *,  unsigned int);


/**
 * @brief Given an array of data and a length, returns the median of the  
 * dataset.
 *     
 * This function inputs an unsigned char array as a pointer and the length
 * of the array.
 * Then computes median as follows:-
 * Median= (20th element + 21st element)/2.  
 * The function finally returns the median value.
 *               
 * @param *t the array to be displayed
 * @param size the length of the array 
 * @return the median value of the array.
 */
int find_median(unsigned char *,  unsigned int);


/**
 * @brief Given an array of data and a length, sorts the array in 
 * descending order.
 *      
 * This function inputs an unsigned char array as a pointer and the length
 * of the array and uses selection sort algorithm to sort the array from 
 * largest to smallest. It compares the first element with all other 
 * elements and swaps it with the largest element. Thus, at the end of the
 * first iteration the largest element will be present in the beginning of
 * the array. Similarly after all the iterations are over, the array would
 * have been successfully sorted in descending order.
 *                     
 * @param *test the array to be sorted
 * @param size the length of the array
   @return nothing
 */
void sort_array(unsigned char *, const unsigned int);


/**
 * @brief prints the statistics of an array including minimum, maximum, 
 * mean, and median
 *       
 * The function prints the statistics like maximum, minimum, mean and 
 * median of the unsorted array.It takes in minimum, maximum , mean and median
 * as inputs and prints the values.
 *           
 * @param a,b,c,d are the inputs
 * @return none
 */
void print_statistics(int, int, int, int);


#endif /* __STATS_H__ */
