/*Worksheet: Write a program in C to grade the student with following condition

if student marks is greater than 90, his grade will be incremented by 2

if student marks is greater than 80, his grade will be incremented by 1

if student marks his marks is less than 50, his grade will be decremented by 1

if student marks his marks is less than 30, his grade will be decremented by 2

first input the initial grade of the student, then calculate the final grade after getting marks in 3 test .

*/

#include<stdio.h>
int main(){
    int m;
    printf("Enter ur Marks: ");
scanf("%d",&m);
if(m>90&&m<=100)
{
    ++m;
    ++m;
    printf("%d",m);
}
    else if(m>80 && m<=90){
    ++m;
    printf("%d",m);
}
else if(m<50 && m>=30){
--m;
printf("%d",m);
}
else if(m<30 && m>0){
        --m;
--m;
printf("%d",m);
}
else if(m>100&&m<0){
     printf("\t U enterd the wrong no!!!");
}
   return 0;
}
