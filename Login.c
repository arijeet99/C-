#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char fn[15], ln[15], email[15], email1[10] ;
    int choice,ch;
    long int  p_no,pass, pass1;
    printf("\nSignup");
    printf("\nFirst name : ");
    scanf("%s",&fn);
    printf("\nLast name : ");
    scanf("%s",&ln);
    printf("\nEmail name : ");
    scanf("%s",&email);
    printf("\nPassword : ");
    scanf("%ld",&pass);
    printf("\nMobile Number : ");
    scanf("%ld",&p_no);

    printf("\n****************************************************\n");

    while(1)
    {
        printf("\nSignin");
        printf("\nenter you email:");
        scanf("%s",&email1);
        printf("\nenter you password:");
        scanf("%ld",&pass1);
        if(strcmp(email1,email)!=0 || (pass1!=pass))
        {
                printf("\nincorrect credential");
        }
                
        else
        {
                printf("\n*****************************************\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\nWelcome %s %s\n",fn,ln);
                printf("\nYou are logged in \n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n*****************************************\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\npress 1 for calculator");
                printf("\npress 2 for performing even odd");
                printf("\npress 3 for finding the grades");
                printf("\npress 4 for exit");
                printf("\n enter your choice :");
                scanf("%d", choice);
                switch(choice)
                {
                    case 1: printf("\ncalculator\n");

                            break;
                    case 2: printf("\nperforming even odd\n");
                            break;
                    case 3: printf("\nfinding grades\n");
                            break;
                    case 4: exit(0);
                    default : printf("\ninvalid choice");
                }

                exit(0);      
        }
           
        
    }

}