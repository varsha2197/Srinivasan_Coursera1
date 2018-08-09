/******************************************************************************
 * Copyright (C) 2018 by Varsha Srinivasan
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. 
 *
 *****************************************************************************/
/**
 * @file stats 
 * @brief Analyzes and prints statistical data like mean, medium, maximum 
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
  int ma,mi,mea,med;
  printf("Printing initial array");
  print_array(test,SIZE); // to print the array
  sort_array(test,SIZE); // to sort in descending order
	
// passing the sorted array for the following functions	
  ma= find_maximum(test,SIZE); // calling function tofind maximum
  mi= find_minimum(test,SIZE); // calling function to find minimum
  mea= find_mean(test,SIZE);					  
  med= find_median(test,SIZE); 
  print_statistics(ma,mi,mea,med);// to print stats
}


void print_array(unsigned char *t, unsigned int size)  // function to print array
{
int i;
printf("\n Array- ");
for(i=0;i<size;i++)
	printf("%d,",t[i]);
printf("\n");

}

int find_maximum(unsigned char *t,  unsigned int size)
{
int i,max;
max=t[0];  // initialise first element of array to max
for(i=0;i<size;i++)
{if(max<=t[i])    // if an element is > than max, then max is assigned that element
	max=t[i];
}
return max;
}

int find_minimum(unsigned char *t, unsigned int size) // function to find minimum
{
int i,min; 
min=t[0]; 
for(i=0;i<size;i++)
{if(min>=t[i])   // if an element in the array is <= min, then min is assigned that element.
	        min=t[i];
}
return min;
}

int find_mean(unsigned char *t,unsigned int size)
{ 
int i,tot=0,me=0;
for(i=0;i<size;i++)
{tot+=t[i];}   // calculate the sum of all elements
me=tot/size;  // finding average
return me; 
}

int find_median(unsigned char *t, unsigned int size)
{
int m;
m=(t[size/2]+t[size/2 -1])/2; // calculating median for even number of elements
return m;

}

void sort_array(unsigned char *test, unsigned int size)
{
int i,j,c;
for(i=0;i<size-1;i++)    // selection sort
{ for(j=i;j<size;j++)
	{ if(test[j]>test[i])    // arraging elements from large to small
		{ c=test[j];     // swapping 2 elements   
		  test[j]=test[i];
      		  test[i]=c;
		}
	}
}
printf("\n Now sorting the array in descending order...\n");
print_array(test,size); // calling function to display sorted array
}

void print_statistics(int a, int b, int c, int d)
{
printf("\n The statistics of the array are as follows:");
printf("\n maximum:%d\n Minimum:%d\n Mean:%d\n Median:%d\n",a,b,c,d);  // displaying stats
}

