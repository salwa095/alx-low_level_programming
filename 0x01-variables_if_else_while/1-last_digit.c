#include <stdio.h>                                                                                                                                    
#include <time.h>                                                                                                                                     
#include <stdlib.h>                                                                                                                                   
/**                                                                                                                                                   
* main - main block                                                                                                                                   
* Description: 'Print a random number and print if positive or negative'                                                                              
* Return: 0                                                                                                                                           */                                                                                                                                      
int main(void)
{                                                                                                                                                     
int n;                                                                                                                                                
srand(time(0));                                                                                                                                       
n = rand() - RAND_MAX / 2;                                                                                                                            if(n > 5)                                                  
printf("Last digit of %d is and is greater than 5\n", n);                                                                                             else if(n == 0)                                                 
printf("Last digit of %d is and is 0\n", n);
else(n < 6 != 0) 
printf("Last digit of %d is and is less than 6 and not 0\n", n);                                                                                      return (0);                                                                                        
}
