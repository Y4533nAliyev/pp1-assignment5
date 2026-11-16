#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isPrime(int num);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	printf("%s\n", isPrime(9) ? "true" : "false");  // false
	printf("%s\n", isPrime(8) ? "true" : "false");  // false
	printf("%s\n", isPrime(17) ? "true" : "false"); // true
	printf("%s\n", isPrime(47) ? "true" : "false"); // true
	printf("%s\n", isPrime(2) ? "true" : "false");  // true
	printf("%s\n", isPrime(1) ? "true" : "false");  // false
	printf("%s\n", isPrime(0) ? "true" : "false");  // false
	printf("%s\n", isPrime(-3) ? "true" : "false"); // false
	
	return 0;
}

BOOL isPrime(int num){
  int a = 0;
  if(num == 1){
    return false;
  }
  if(num <= 0){
    return false;
  }

  for(int i = 2; i < num-1; i++){
    if(num % i == 0){
      a += 1;
    }
  }
  if(a >= 1){
    return false;
  }else{
    return true;
  }
}
