//Write a program to find all the palindrome numbers between 1 to 500 .
#include<stdio.h>
int main(){
int num,n,rev_no,r;
printf("\t\t\t\t\tPalindrome Number from 1 to 500: \n\n");
for(num=1;num<=500;num++)
{
    rev_no=0;
    n=num;
    while(n!=0){
        r=n%10;
        rev_no=rev_no*10+r;
        n=n/10;
    }
    if(num==rev_no)
        printf("\t\t\t\t\t\t\t%d\n",num);
}
        printf("\n\n\n\n\n");
return 0;
}
