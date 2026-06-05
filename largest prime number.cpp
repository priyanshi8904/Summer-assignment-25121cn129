#include <stdio.h>
int main() 
{    int n, num, i, j;   
 int largestPrime = -1, isPrime; 
    printf("Enter how many numbers: ");   
	 scanf("%d", &n); 
	    printf("Enter the numbers: ");  
		  for(i = 1; i <= n; i++)
		   {        scanf("%d", &num);  
		    isPrime = 1;      
			 if(num <= 1)   
			isPrime = 0;
			else
			{ for(j = 2; j <= num / 2; j++)
		  { if(num % j == 0) 
	 {    isPrime = 0;    
	 break;                }      
													        }    
		    }  
 if(isPrime && num > largestPrime)
																  
	 {            largestPrime = num;        } 
	 }    if(largestPrime == -1)    
	printf("No prime number found."); 
	 else      
																			 
	printf("Largest prime number = %d", largestPrime);   
	 return 0;}

