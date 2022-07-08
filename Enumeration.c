#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

enum  Employees
{
    working,
    non_working,
    on_leave,
    Exit=-1 
};


int main()
{
    int  days, status;
    float salary=25000;
    system("cls");
    while(1){
        
        switch(status)
            {
            case working:printf("\nworking\n");
                         printf("\nsalary: 25000");
                         break;
            case non_working:printf("\nnon working\n");
                             printf("\nsalary: 0");
                             break;
            case on_leave:printf("\non leave\n");
                          printf("\nenter the number of days he was absent:\n");
                          scanf("%d",&days);
                          if(days>10 && days<=20)
                          { 
              
                            printf("\nsalary: %f",(2*salary)/3);
                          }
                          else if(days>20 && days<=25)
                          {
                            printf("\nsalary: %f",salary/3);
                          }
                          else if(days>25)
                          {
                            printf("\nsalary: %d",0);
                          }
                          else 
                          {
                            
                            printf("\nsalary: %f",salary);
                          }
                         break;
            case Exit : exit(0);
            default:printf("\ninvalid choice");
            }
        printf("\nenter the status:\n");
        scanf("%d",&status);
        getch();
        }    
        return 0;
}