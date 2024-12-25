#include <stdio.h>
#include <stdlib.h>


struct node {
    int data ;
    struct node *next ;

}*head,*second,*third,*fourth;

void Travarsal( struct node *head){
    struct node *ptr =head;
    do{
        printf("element : %d \n", ptr->data); 
        ptr=ptr->next;
    }while(ptr!= head);
}

int main (){
head = (struct node*) malloc(sizeof(struct node));
second = (struct node*) malloc(sizeof(struct node));
third = (struct node*) malloc(sizeof(struct node));
fourth = (struct node*) malloc(sizeof(struct node));
 

head->data=69;
head->next=second;

second->data=42;
second->next=third;

third->data=21;
third->next=fourth;

fourth->data=86;
fourth->next=head;

Travarsal(head);
return 0;
};