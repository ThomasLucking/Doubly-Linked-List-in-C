#include <stdio.h>


void changingValuePointer(int *ptr){
    *ptr = 15;
}

int main()
{
    int RandomNumber = 20;
    changingValuePointer(&RandomNumber);
    printf("%d", RandomNumber);

    return 0;   
}