#include<stdio.h>
void main()
{
    // printf("Hello World!");
    
    // Reading Inputs
    // int -> -90, 90, 0
    // char > a-z, A-Z, 0-9, @#!^&_-
    // float -> 560.00, 1000.547562
    // double -> 10^-20 
    // void 
    
    // int number;
    // char gender; //memory space
    // printf("Enter a number : ");
    // scanf("%d", &number);
    // printf("Choose a gender : ");
    // scanf("%c", &gender);
    // printf("You entered : %d", number);
    // printf("Your gender : %c", gender);
    
    // Operators
    // float num1=100.00;
    // float num2=5.01;
    // printf("%f\n", num1+num2);
    // printf("%f\n", num1-num2);
    // printf("%f\n", num1*num2);
    // printf("%f\n", num1/num2);
    
    //Decision Making
    // float billAmount = 0.0;
    // float discount = 0;
    // printf("Enter the total bill : ");
    // scanf("%f", &billAmount);
    
    // //Discount calculation
    // if(billAmount > 10000.00)
    //     discount = 20;
    // else if(billAmount > 7500.00)
    //     discount = 15;
    // else if(billAmount > 5000.00)
    //     discount = 10;
    // else if(billAmount > 3000.00)
    //     discount = 5;
    // else
    //     discount = 0;
        
    // printf("Your total discount is : %f %%", discount);
    // billAmount = billAmount - ((discount/100) * billAmount);
    // printf("\nYour final bill is : %f", billAmount);
    
    //Ternary operator
    // float salary = 110000.00;
    
    // salary>20000.00 ? printf("You earn okay!") : printf("You need to earn more!");
    
    // Switch Case
    int choice = 0;
    int num1 = 0;
    int num2 = 0;
    
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    
    printf("Choose one : \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);
    // fall through
    switch(choice){
        case 1 : printf("Sum is : %d", num1+num2);
                 break;
        case 2 : printf("Difference is : %d", num1-num2);
                 break;
        case 3 : printf("Product is : %d", num1*num2);
                 break;
        case 4 : printf("Quotient is : %d", num1/num2);
                 break;
        default : printf("Invalid choice!");
    }
        
}
