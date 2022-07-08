#include<stdio.h>
#include<conio.h>

/*
void main()
{
    int i=1,j,k=1;
 
    do{
        i=1;
        do{
            j=1;
            do{
            printf("*");
            j++;
            }while(j<=i);
                printf("\n");
            i++;
        }while(i<=5);

    printf("\n");
    k++;
    }while(k<=3);
    getch();

}
*/




void main()
{
    int i=1,j,k=1;
 
    do{
        i=1;
        do{
            j=1;
            do{
            printf("*");
            j++;
            }while(j<=k);
                printf("\t");
            i++;
        }while(i<=3);

    printf("\n");
    k++;
    }while(k<=5);
    getch();

}