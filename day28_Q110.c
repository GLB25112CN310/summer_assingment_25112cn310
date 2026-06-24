#include<stdio.h>
int main(){
    int choice;
    float balance = 0, amount;
    while(1){
        printf("\n==== ACCOUNT MANAGEMENT SYSTEM ====\n");
        printf("1.Deposit\n");
        printf("2.Withdraw\n");
        printf("3.Check balance\n");
        printf("4.Exit\n");
        printf("Enter choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter amount to deposit :");
                scanf("%f",&amount);
                balance += amount;
                break;

            case 2:
                printf("Enter amount to withdraw :");
                scanf("%f",&amount);
                if(amount <= balance){
                    balance -= amount;
                }    
                else{
                    printf("Insufficient balance! \n");
                }
                break;

            case 3:
                printf("Current balance : %f",balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice \n");    

        }
    }    
}