#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
   if ((c>='A' && c<='Z') || (c<='a' && c>='z'))
       printf("Not Alphabet");
    else  if (c =='a' || c =='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        printf("Ur Typed Char is Vowel");

   else
        printf("Ur Typed Char was Not Con..");

    return 0;
}
/*
#include <stdio.h>
int main()
{
char c;
printf("Enter char: ");
scanf("%c",&c);
switch(c){
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
    printf("%c is Vowel",c);
    break;
default:
    printf("%c is Not Con..",c);
    }
    }
