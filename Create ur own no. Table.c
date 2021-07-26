#include<stdio.h>
void main(){
    system("color r");
int l,c,start,end,tstart,tend;
printf("\t\t\t\t\t\tn - n\n");
printf("From where u want to start Table ? : ");
scanf("%d",&tstart);
printf("Where u want to end ur Table ? : ");
scanf("%d",&tend);

printf("\n");

printf("\t\t\t\t\t\t(start)n x n(end)\n");
printf("From which no u like to start Table ? : ");
scanf("%d",&start);
printf("Where to end no ? : ");
scanf("%d",&end);

printf("\n\n\n");

printf("Here's ur Table/s\n\n");
for(l=tstart;l<=tend;l++){
    for(c=start;c<=end;c++){
        printf("%d x %d = %d\n",l,c,l*c);
}
    printf("\n");
}
}
