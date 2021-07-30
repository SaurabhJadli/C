#include<stdio.h>
void main(){
    int arr[5]={5,10,15,20,25};
    int i, search;
    printf("Enter the element that needs to searched:");
    scanf("%d",&search);
    for(i=0;i<5;i++)
    {
        if(arr[i]==search)
          break;
    }
    if(i<5)
    printf("Searched element found at %d position",i+1);
    else
    printf("Searched element not found.");

}
