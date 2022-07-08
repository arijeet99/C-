#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
    int a[10], SUM_ODD=0,SUM_EVEN=0,SUM_PRIME=0,i,j, choice,flag;
    system("cls");
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter the value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    while(1)
    { 
        printf("\n1. Addition");
        printf("\n2. Sorting");    
        printf("\n3. Search");
        printf("\n4. Exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("\nyou pressed for addition");
                    printf("\narray before\n"); 
                    for(i=0;i<SIZE;i++)
                    {
                        printf("%d ",a[i]);
                    }
                    printf("\nOdd array");
                    for(i=0;i<SIZE;i++)
                    {
                        if(a[i]%2!=0)
                        {
                                printf("%d ",a[i]);
                                SUM_ODD+=a[i];
                        } 
                    }
                    printf("\nOdd sum: %d", SUM_ODD);
                    printf("\nEven array");
                    for(i=0;i<SIZE;i++)
                    {
                        if(a[i]%2==0)
                        {
                                printf("%d ",a[i]);
                                SUM_EVEN+=a[i];
                        }
                    }
                    printf("\nEven sum: %d", SUM_EVEN);
                    printf("\nPrime array");
                    for(i=0;i<SIZE;i++)//4
                    {   
                        flag=0;
                        for(j=2;j<a[i];j++)
                            if(a[i]%j==0)
                            {
                                flag=1;
                                break;
                            }
                        if (flag==0)
                        {
                            printf("%d ", a[i]);
                            SUM_PRIME+=a[i];
                        }
                    }
                    printf("\nPrime sum: %d", SUM_PRIME);
                    

                   
                     break;
            case 2 :
                     break;
            case 3 :
                     break;
            case 4 : exit(0);
        }
        getch();                
    }
    return 0;
}