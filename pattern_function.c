#include<stdio.h>
#include<conio.h>
void pattern();

void main()
{
    pattern();
    getch();
}


void pattern()
{
    int n,i,j,temp;
    printf("\nenter the rows:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            temp=i;
            printf("%d",temp--);
        }
        printf("\n");
    }
}