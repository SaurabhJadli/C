#include<stdio.h>
void main(){
int no1,no2,max;
printf("\t\t\t\t\tEnter 2 no whose u want to take LCM : \n\n");
printf("No1 : ");
scanf("%d",&no1);
printf("No2 : ");
scanf("%d",&no2);

max=no1>no2?no1:no2;
while(1){
    if(max%no1==0 && max%no2==0){
        printf("LCM of %d & %d = %d",no1,no2,max);
        break;
    }
    ++max;
}
}
