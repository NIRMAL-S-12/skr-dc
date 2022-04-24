#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 
typedef struct time
{ 
    int hours, minutes, seconds; 
    
} Time; 
void printTimeInSeconds(int n , struct time time1)
{ 
    int hr = time1.hours * 60 * 60;
    int min = time1.minutes * 60;
    int sum = hr + min + time1 .seconds;
    printf("%d\n" ,sum);
} 
void printTimeInSeconds(int n, struct time time1, struct time time2)
{
    int hr = time1.hours * 60 * 60;
    int min = time1.minutes * 60;
    int sum = hr + min + time1 .seconds;
    int hr1 = time2.hours * 60 * 60;
    int min1 = time2.minutes * 60;
    int sum1 = hr1 + min1 + time2.seconds;
   // printf("sum in 2 = %d\n sum1 in 2 = %d\n" , sum, sum1);
    printf("%d\n" ,sum1 + sum);
}
void printTimeInSeconds(int n , struct time time1, struct time time2, struct time time3)
{ 
    int hr = time1.hours * 60 * 60;
    int min = time1.minutes * 60;
    int sum = hr + min + time1 .seconds;
    int hr1 = time2.hours * 60 * 60;
    int min1 = time2.minutes * 60;
    int sum1 = hr1 + min1 + time2.seconds;
    int hr2 = time3.hours * 60 * 60;
    int min2 = time3.minutes * 60;
    int sum2 = hr2 + min2 + time3.seconds;
    //printf("sum in 3 = %d\n sum1 in 3 = %d\n sum2 in 3 = %d\n" , sum, sum1, sum2);
    printf("%d\n" ,sum2+sum+sum1);
}
void printTimeInSeconds(int n , struct time time1, struct time time2, struct time time3 ,struct time time4)
{ 
    int hr = time1.hours * 60 * 60;
    int min = time1.minutes * 60;
    int sum = hr + min + time1 .seconds;
    int hr1 = time2.hours * 60 * 60;
    int min1 = time2.minutes * 60;
    int sum1 = hr1 + min1 + time2.seconds;
    int hr2 = time3.hours * 60 * 60;
    int min2 = time3.minutes * 60;
    int sum2 = hr2 + min2 + time3.seconds;
    int hr3 = time4.hours * 60 * 60;
    int min3 = time4.minutes * 60;
    int sum3 = hr3 + min3 + time4.seconds;
    //printf("sum in 4 = %d\n sum1 in 4 = %d\n sum2 in 4 = %d\n sum3 in 4 = %d\n" , sum, sum1, sum2,sum3);
    printf("%d\n" ,sum3+sum+sum1+sum2);

}
int main() 
 { Time time1, time2, time3, time4; 
 time1.hours = 00;
 time1.minutes = 00; 
 time1.seconds = 01;
 time2.hours = 01;
 time2.minutes = 00;
 time2.seconds = 00; 
 time3.hours = 12;
 time3.minutes = 59;
 time3.seconds = 59; 
 time4.hours = 00;
 time4.minutes = 01;
 time4.seconds = 00; 
 printTimeInSeconds(1, time1); 
 printTimeInSeconds(2, time1, time2);
 printTimeInSeconds(3, time1, time2, time3); 
 printTimeInSeconds(4, time1, time2, time3, time4); 
 return 0; 
     
 }