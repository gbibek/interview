#include <stdio.h>
#include "rdtsc/rdtsc_timer.h"

uint64_t recursive_fibo(int n);
uint64_t function_fibo(int n);
//#define MY_VAL 2

int main()
{
    int num;
    printf("Please enter num value for fibonachi : ");
    scanf("%d", &num);

    tstart();
    printf("FUNCTION fibo value = %" PRIu64 "\n",function_fibo(num));
    tfinish();

    printf("\n");
 
    tstart();
    printf("RECURSIVE fibo value  = %" PRIu64 "\n",recursive_fibo(num));
    tfinish();
    printf("MY_VAL = %d\n",MY_VAL);
#ifdef MY_VAL
    printf("I got my val too\n");
#endif

  
return 0;
}

// for programmer ( tail recursion )
uint64_t recursive_fibo(int n)
{
    if ( n == 0 ) return 0;
    if ( n == 1 ) return 1; 

    return recursive_fibo(n-1) + recursive_fibo(n-2);
}

// for performance
uint64_t function_fibo(int n)
{
    if ( n == 0 )  return 0;
    if ( n == 1 )  return 1;
    int i;
    int sum  = 0;
    int sum1 = 0;
    int sum2 = 1;
    
    for(i = 2 ; i <= n ; i++)
    {
        sum  = sum1 + sum2; 
        sum1 = sum2;
        sum2 = sum;
    }
    return sum;
}

