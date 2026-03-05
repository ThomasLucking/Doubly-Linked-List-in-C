#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char* value;
    struct Node *next; 
    struct Node *prev;

  
};

struct Node *insert(char *value, struct Node **head){
    struct Node *node1 = malloc(sizeof(struct Node)); 
    node1->next = *head;
    node1->value = value;
    node1->prev = NULL;

    if(*head != NULL){
        (*head)->prev = node1;
    }
    *head = node1;
    
    return node1;

}


struct Node *find(char *value, struct Node **head){
    struct Node *temp = *head;
    while(temp != NULL){
        if(strcmp(temp->value, value) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


void delete(char *value, struct Node **head)
{
    struct Node *findNode = find(value, head);

    if(!findNode){
        return;
    }

    if(findNode->prev != NULL) findNode->prev->next = findNode->next;
    if(findNode->next != NULL) findNode->next->prev = findNode->prev;

    if(findNode == *head){
        *head = findNode->next;
    }

    free(findNode);
};



int main(){

    struct Node *head = NULL;
    insert("Hello", &head);
    insert("world", &head);
    insert("foo", &head);

    struct Node *result = find("world", &head);
    delete("Hello", &head);

    struct Node *temp = head;
    while(temp != NULL) {
        printf("%s\n", temp->value);
        temp = temp->next;
    }

    printf("%s", result->value);

}
