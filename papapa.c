#include<stdio.h>
#include<stdlib.h>
typedef struct node
{

    int info;
    struct node *next;
}node;
node* create(node*);
void freq(node*,node*);
void main()
{
    int ch;
    node *l=NULL;
    node *r=NULL;
    do
    {

        printf("\n1.create\n2.find freuency\n3.exit");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:l=create(l);
            if(r==NULL)
                r=l;
            break;
            case 2:freq(l,r);
            break;

        }

        }while(ch<3);
}
node* create(node *l)
{

    char x;
    node *p=NULL;
    p=(node*)malloc(sizeof(node));
    printf("enter the number which you want to insert");
    fflush(stdin);
    scanf("%c",&x);

    p->info=x;
    p->next=NULL;
    if(l==NULL)
        l=p;

else{
    l->next=p;
l=p;
}
return l;
}
void freq(node *l,node *r)
{
if(l==NULL||r==NULL)
{

    printf("no element ");
}
else
{

    node *ll=NULL;
    int fl=0;
    do
    {
        ll=l;
        if((l->info)!=(r->info))
        {

            fl=1;
            break;
        }
        while(ll!=NULL)
        {

            if(ll->next==r)
            {

                r=ll;
                r->next=NULL;
            }
            ll=ll->next;
        }
        if(r==r)
            break;
        l=l->next;
    }while((l!=r)||(l->next!=r));
    if(fl==0)
        printf("pallindrome");
    else
        printf("no pallindrome");
    }
}
