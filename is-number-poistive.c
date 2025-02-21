#include <stdio.h> 

int main(void){ 
    int num; 

    printf("Enter your number >>> "); 
    scanf("%d", &num); 

    if(num == 0)
    { 
        printf("Number is zero \n"); 
    } else if (num > 0)
    {
        printf("Number is positive \n"); 
    } else if (num < 0){ 
        printf("Number is negative \n");
    } else{ 
        printf("Invalid Input. Error. \n"); 
    }

    return 0; 
}
