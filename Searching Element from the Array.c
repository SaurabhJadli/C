#include<stdio.h>
#include<conio.h>
void main(){
int a[10]={1,2,3,4,5};
int n,i;
printf("Enter Element to b searched : ");
scanf("%d",&n);

for(i=0;i<5;i++){
    if(a[i]==n)
        break;
}
 system("color 1");
 if(a[i]==n)
        printf("Ele found at %d\n",i+1);


else{
    system("color c");
    printf("\n Ele !NOT found!!");
}
}
