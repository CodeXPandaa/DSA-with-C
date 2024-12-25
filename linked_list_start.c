#include <stdio.h>
#include <stdlib.h>


struct node {
    int data ;
    struct node *next ;

}*first ,*second ,*ptr;

void Travarsal( struct node *ptr){
    while(ptr != NULL){
        printf("element : %d \n", ptr->data);
        ptr=ptr->next;
    }
}
int main (){
first = (struct node*) malloc(sizeof(struct node));
second = (struct node*) malloc(sizeof(struct node));
 

first->data=69;
first->next=second;

second->data=42;
second->next=NULL;

Travarsal(first);

printf("%d",first -> next ->data);
};