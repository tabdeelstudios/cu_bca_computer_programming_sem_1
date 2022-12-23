#include <stdio.h>

// struct Student{
//     int roomno;
//     int phone[10];
//     char address[50];
    // char collegeName[100];
// } john;

// union Mydata{
//     int roomno;
//     int phone[10];
//     char address[50];
// } jane;

// enumeration

// 0->success
// 1->failed
enum Week{
    Monday, Tueday, Wednesday, Thursday, Friday, Saturday, Sunday
    // 0      1       2           3       4         5         6
};

enum Status{
    success,failure;
}

int main() {
    enum Week day;
    day = Wednesday;
    printf("%d", day);
    
    enum Status result;
    if(result==success){
        
    } else {
        
    }
    // int num=0;
    // printf("Enter a number : ");
    // scanf("%d", &num);
    // if(num==success){
    //     printf("\nSuccess!");
    // }
    // else{
    //      printf("\nFailure!");
    // }
    // printf("Size of structure : %d\n",sizeof(john));
    // printf("Size of union : %d\n",sizeof(jane));
    // Structures 
    // struct Student class10a[20];    
    // int i=0;
    // for(i=0; i<20;i++){
    //     printf("%d", class10a[i].roomno);
    // }
    // john.roomno = 100;
    // bob.roomno = 200;
    // lucy.roomno = 500;
    // printf("%d", john.roomno);
    // printf("%d", bob.roomno);
    // printf("%d", lucy.roomno);
    
    // Strings
    
    // char name[] = {'A','q','u','i','b'};
    // char name2[] = "Jane";
    // char name[20];
    // printf("Enter your name : ");
    // scanf("%s", name);
    // printf("\nYour name is : %s", name);
    // name[0]='A';
    // printf("\nYour name is : %s", name);
    
    // Pointers
    
    // variable -> stores value
    // pointer -> stores a memory address
    // int a = 100;
    // int *p = &a;
    // printf("%d", *p);
    
    // int numbers[] = {10,20,30,40,50};
    // int i=0;
    // int *p = numbers;
    // for(i=0;i<5;i++)
    // {
    //     printf("%d\t", p[i]);
    // }
    // printf("%d\t", p[1]);
}
