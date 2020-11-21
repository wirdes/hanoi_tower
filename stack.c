/*Hannoi 3 Towers using the C language and linked list structure */
#include <stdio.h>
#include <stdlib.h>
 
typedef struct n
{
    int data;
    struct n* next;
}tower;
 
int popElement;

tower* push(tower* head,int data)
{
    tower* tmp = (tower*)malloc(sizeof(tower));
    if(tmp == NULL)
    {
        exit(0);
    }
    tmp->data = data;
    tmp->next = head;
    head = tmp;
    return head;
}

tower* pop(tower *head,int *element)
{
    tower* tmp = head;
    *element = head->data;
    head = head->next;
    free(tmp);
    return head;
}


void printTower(tower* head,tower* head2,tower* head3)
{

    tower *current;
    current = head;
    printf("Tower 1");
    if(current!= NULL)
    {
        printf(" : ");
        do
        {
            printf("%d - ",current->data);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf(" : ");
        printf("is Empty\n");
    }
    printf("Tower 2");
    current = head2;
    if(current!= NULL)
    {
        printf(" : ");
        do
        {
            printf("%d - ",current->data);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf(" : ");
        printf("is Empty\n");
    }
    printf("Tower 3");
    current = head3;
    if(current!= NULL)
    {
        printf(" : ");
        do
        {
            printf("%d - ",current->data);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf(" : ");
        printf("is Empty\n");
    }

}
int main()
{
    tower* tower1 = NULL;
    tower* tower2 = NULL;    
    tower* tower3 = NULL;  
    tower1 = push(tower1,30);
    tower1 = push(tower1,20);
    tower1 = push(tower1,10);

    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 1-----------\n");
    tower1 = pop(tower1,&popElement);
    tower3 = push(tower3,popElement);
    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 2-----------\n");   
    tower1 = pop(tower1,&popElement);
    tower2 = push(tower2,popElement);   
    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 3-----------\n");   
    tower3 = pop(tower3,&popElement);
    tower2 = push(tower2,popElement);   
    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 4-----------\n");   
    tower1 = pop(tower1,&popElement);
    tower3 = push(tower3,popElement);   
    printTower(tower1,tower2,tower3);
    
         
    printf("-------STEP 5-----------\n");   
    tower2 = pop(tower2,&popElement);
    tower1 = push(tower1,popElement);   
    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 6-----------\n");   
    tower2 = pop(tower2,&popElement);
    tower3 = push(tower3,popElement);   
    printTower(tower1,tower2,tower3);
    
    
    printf("-------STEP 7-----------\n");   
    tower1 = pop(tower1,&popElement);
    tower3 = push(tower3,popElement);   
    printTower(tower1,tower2,tower3);
    
    
 
    return 0;
}
