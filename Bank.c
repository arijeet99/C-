#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 2
void createAcc();
void deposite();
void wid();
void checkbal();
void display();

struct bank
{
    char first_name[10];
    char last_name[10];
    char email[10];
    int id;
    float balance;
}b[SIZE];

int main()
{
    int i,choice;
    
    while(1)
    {
        
        printf("\n****Welcome to bank****\n");
        printf("\n1. for creating account");
        printf("\n2. to deposit");
        printf("\n3. to withdraw");
        printf("\n4. to balance");
        printf("\n5. to exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\ncreating account\n");
                    createAcc();
                    break;
            case 2: printf("\ndeposit\n");
                    printf("\nenter  the depost amount");
                    scanf("%d",&b.deposit);
                    b.balance=deposite(b.deposit,b.balance);
                    b.transactions+=1;
                    break;
            case 3: printf("\nwithdraw\n");
                    printf("\nenter  the depost amount");
                    scanf("%d",&b.deposit);
                    if(b.balance<b.deposit)
                    {
                        printf("balance is not sufficient");
                    }
                    else 
                    {
                        b.balance=wid(b.withdraw,b.balance);
                        b.transactions+=1;
                    }
                    break;
            case 4: printf("\nbalance\n");
                    checkbal(b.balance);
                    b.transactions+=1;
                    break;
            case 5: display(b.transactions);
                    exit(0);
            default: printf("\ninvalid choice\n");
        }
       
        getch();
    }
    return 0;
}

void createAcc(char first_name[10],char last_name[10],char email[20])
{
    printf("\nenter your first name:");
    scanf("%s",first_name);   
    printf("\nenter your last name:");
    scanf("%s",last_name);    
    printf("\nenter your email:");
    scanf("%s",email);     
}


int deposite(int deposit, int balance)
{
    printf("\nbalance before deposit: %d\n",balance);
    balance=+deposit;
    printf("\nbalance after deposit: %d\n",balance);
    return balance;     
}


int wid(int withdraw, int d)
{
    printf("\nbalance before withdraw: %d\n",d);
    d-=withdraw;
    printf("\nbalance after withdraw: %d\n",d);    
    return d; 
}

void checkbal(int balance)
{
    printf("\noverall balance %d\n",balance);
}


void display(int transactions)
{
    printf("\noverall transactions made %d\n",transactions);
}


