#include<stdio.h>
void main(){
struct date{
int d,m,y;
};

struct date today;
today.d=25;
today.m=1;
today.y=2020;
printf("%d %d %d",today.d,today.m,today.y);
}
