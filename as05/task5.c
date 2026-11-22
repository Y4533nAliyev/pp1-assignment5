#include <stdio.h>

/* function prototypes are here */
void birthdayinfo(int bday);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	birthdayinfo(20040410); // Leap Year. Zodiac is Aries.
	birthdayinfo(20031118); // Not Leap Year. Zodiac is Scorpio.

	return 0;
}

void birthdayinfo(int bday){
  int year = bday / 10000;
  int monthDay = bday % 10000;
  if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
    printf("Leap Year. Zodiac is ");
  }else{
    printf("Not Leap Year. Zodiac is ");
  }
  if(monthDay >= 120 && monthDay <= 218){
    printf("Aquarius.");
  }else if(monthDay >= 219 && monthDay <= 320){
    printf("Pisces."); 
  }else if(monthDay >= 321 && monthDay <= 419){
    printf("Aries.");
  }else if(monthDay >= 420 && monthDay <= 520){
    printf("Taurus.");
  }else if(monthDay >= 521 && monthDay <= 620){
    printf("Gemini.");
  }else if(monthDay >= 621 && monthDay <= 722){
    printf("Cancer.");
  }else if(monthDay >= 723 && monthDay <= 822){
    printf("Leo.");
  }else if(monthDay >= 823 && monthDay <= 922){
    printf("Virgo.");
  }else if(monthDay >= 923 && monthDay <= 1022){
    printf("Libra.");
  }else if(monthDay >= 1023 && monthDay <= 1121){
    printf("Scorpio.");
  }else if(monthDay >= 1122 && monthDay <= 1221){
    printf("Capricorn.");
  }else if(monthDay >= 1222){
    printf("Pisces.");
  }
  printf("\n");
}
