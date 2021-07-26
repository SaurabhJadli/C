#include <stdio.h>
#include<math.h>
//This Program 'll let u Calculate UR 12th Result & Shows u Total Marks(Theory + Practical),% & UR Division.
int main()
{
    system("COLOR 3a");
    int t1,t2,t3,t4,t5;
    int p1,p2,p3,p4,p5;

printf("Enter ur Marks below:\n");
 printf("\n\tSubject 1: \nTheory marks: ");
     scanf("%d",&t1);
     printf("Practical Marks: ");
     scanf("%d",&p1);

      printf("\n\tSubject 2: \nTheory marks: ");
     scanf("%d",&t2);
     printf("Practical Marks: ");
     scanf("%d",&p2);

      printf("\n\tSubject 3: \nTheory marks: ");
     scanf("%d",&t3);
     printf("Practical Marks: ");
     scanf("%d",&p3);

      printf("\n\tSubject 4: \nTheory marks: ");
     scanf("%d",&t4);
     printf("Practical Marks: ");
     scanf("%d",&p4);

      printf("\n\tSubject 5: \nTheory marks: ");
     scanf("%d",&t5);
     printf("Practical Marks: ");
     scanf("%d",&p5);
     printf("\n");

     float addt=t1+t2+t3+t4+t5;
     float addp=p1+p2+p3+p4+p5;
     float total=addt+addp;
     float per=(total/500)*100;
    printf("Total of Theory: %3.1f\n",addt);
    printf("Total of Practical: %3.1f\n",addp);
    printf("Total Marks: %3.1f\n",total);
    printf("Percentage: %3.2f\n",per);

     if(addt>=115.5 && addp>=49.5 && per>=60)
 printf(" First Division");
 else if(addt>=115.5 && addp>=49.5 && per>50 && per<59)
 printf("Second Division");
 else if(addt>=115.5 && addp>=49.5 && per>40 && per<49)
 printf("Third Division");
 else
 printf("U R FAIL");
return 0;
}
