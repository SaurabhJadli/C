#include<stdio.h>
int main()
{

    float f,c;
    int choice;

    printf("\n1: Convert temperature from Fahrenheit to Celsius.");
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);

    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c=(f- 32)/1.8;
        printf("Temperature in Celsius: %.2f",c);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&c);
        f=(c*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",f);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
 char x;
    float y;
   printf("Type 'C' for celcius to fahrenheit & 'F' for fahrenheit to celcius\n");
   scanf("%c",&x);

    if((x=='C')||(x=='c'))
    printf("Enter celcius: ");

    else if(x=='f' || x=='F')
    printf("Enter fahrenheit: ");

        else
        printf("Wrong Char Presed");


  scanf("%f",&y);
  float f=(y*1.8)+32;
  float c=(y*1.8)*5/9;
  if(x=='F' ||x=='f')
    printf("%2.2f",f);
  else if(x=='C' ||x=='c')
    printf("%2.2f",c);
    else
        printf("Wrong value");

        return 0;
} */
