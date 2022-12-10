#include <stdio.h>

// int add(int, int);
// int subtract(int, int);
// int multiply(int, int);
// int divide(int, int);

int main() {
// Loops
        // For Loop
        // for(int currentOrder = 1; currentOrder <= 20; currentOrder++)
        // {
        //     printf("Fetching order : %d\n", currentOrder);
        // }
        
        // While Loop
        // float amount = 0.0;
        // printf("Enter your amount to check for loan eligibility : ");
        // scanf("%f", &amount);
        
        // while(amount>1000.00)
        // {
        //     printf("You are elibigle until : %f\n", amount);
        //     amount=amount-500.00;
        // }
        
        // Do-While Loop
        // int choice = 0;
        // int num1=0;
        // int num2=0;
        // do{
        //     //loop body
        //     printf("\nMenu...\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        //     scanf("%d", &choice);
            
        //     if(choice>=1 && choice<=4){
        //         printf("\nEnter the first number : ");
        //         scanf("%d", &num1);
        //         printf("\nEnter the second number : ");
        //         scanf("%d", &num2);
        //     }
            
        //     switch(choice){
        //         case 1 : printf("The sum is : %d", add(num1,num2)); break;
        //         case 2 : printf("The difference is : %d", subtract(num1,num2)); break;
        //         case 3 : printf("The product is : %d", multiply(num1,num2)); break;
        //         case 4 : printf("The quotient is : %d", divide(num1,num2)); break;
        //         default : printf("Invalid choice. Exiting...");exit(0);
        //     }
        // }while(choice>=1 && choice<=5);
    
    // Arrays and Pointers
    
    int numbers[5];
    
    for(int i=0;i<5;i++)
    {
        printf("\nEnter the %d element : ", i);
        scanf("%d", &numbers[i]);
    }
    
    printf("\nYou entered : ");
   
    for(int i=0;i<5;i++)
    {
        printf("\nThe element : %d", numbers[i]);
    }
    
    
    
    
    
    
    
    
    
    
}

// int add(int num1, int num2){
//     return num1+num2;
// }

// int subtract(int num1, int num2){
//     return num1-num2;
// }

// int multiply(int num1, int num2){
//     return num1*num2;
// }

// int divide(int num1, int num2){
//     return num1/num2;
// }
