#include <stdio.h>
#include <stdlib.h>

// declares a new struct
struct Node{
    int value; // value
    struct Node *next; // pointer for the next node.
};



int main()
{
    struct Node *node1 = malloc(sizeof(struct Node)); 
    node1->value = 15;                                
    printf("%d", node1->value);                       
    free(node1);                                      


    return 0;
}