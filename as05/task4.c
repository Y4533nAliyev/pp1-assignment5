#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isGreatNumber(int num);

int main ()
{
  int user = 0;
	printf("Please Enter your number: ");
  scanf("%d", &user);
  
  for(int i = 0; i <= user; i++){
    if(isGreatNumber(i)){
      printf("%d\n", i);
    }
  }
	return 0;
}

BOOL isGreatNumber(int num){
  int sum = 0;
  if(num <= 0){
    return false;
  }
  for(int i = 1; i < num; i++){
    if(num % i == 0){
      sum += i;
      }
    }
  return (sum == num);
}
