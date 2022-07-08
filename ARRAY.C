#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void main()
{
    int a[SIZE],i,choice;
    float b[SIZE];
    char c[SIZE];
    while(1)
    {
        printf("\n1. Integer");
        printf("\n2. Float");
        printf("\n3. Char");
        printf("\n4. exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("\nInteger choice\n");
                     for(i=0;i<SIZE;i++)
                     {
                            printf("\nenter the value of a[%d] :",i);
                            scanf("%d",&a[i]);
                     }
                     for(i=0;i<SIZE;i++)
                     {
                            printf("%d ",a[i]);
                     }
                     break;
            case 2 : printf("\nFloat choice\n");
                     for(i=0;i<SIZE;i++)
                     {
                            printf("\nenter the value of a[%d] :",i);
                            scanf("%f",&b[i]);
                     }
                     for(i=0;i<SIZE;i++)
                     {
                            printf("%f ",a[i]);
                     }
                     break;
            case 3 : printf("\ncharacter choice\n");
                     for(i=0;i<SIZE;i++)
                     {
                            printf("\nenter the value of a[%d] :",i);
                            gets(c[i]);
                     }
                     for(i=0;i<SIZE;i++)
                     {
                            printf("%c ",c[i]);
                     }
                     break;
            case 4 : exit(0);
            default : printf("\ninvalid choice\n");
        }   
    getch();
    }    
    
}