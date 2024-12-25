#include <stdio.h>
#include <stdlib.h>


struct node {
    int data ;
    struct node *next ;

}*head,*second,*ptr;

void Travarsal( struct node *ptr){
    while(ptr != NULL){
        printf("element : %d \n", ptr->data);
        ptr=ptr->next;
    }
}


struct node* insertion_at_beg(struct node*head,int data ){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;


}


int main (){
head = (struct node*) malloc(sizeof(struct node));
second = (struct node*) malloc(sizeof(struct node));
 

head->data=69;
head->next=second;

second->data=42;
second->next=NULL;


Travarsal(head);
head = insertion_at_beg(head,7);
Travarsal(head);

return 0;
};