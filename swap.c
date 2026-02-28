#include <stdio.h>


void swap(int *ptr1, int *ptr2){
    int temp = *ptr1; // assigns the first pointer into temp      
    *ptr1 = *ptr2;    // changes the value into ptr2     
    *ptr2 = temp; // reassignes it


}

int main()
{
    int number1 = 20;
    int number2 = 10;
    swap(&number1, &number2);
   
    printf("%d", number1);
    printf("%d", number2);

    return 0;   
}