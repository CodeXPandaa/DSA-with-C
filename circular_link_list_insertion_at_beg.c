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


struct node * insertion_at_beg(struct node*head ,int data){
    struct node* p =head;
    do{
        p=p->next;
    }while(p->next!= head);
    struct node *ptr= (struct node*) malloc(sizeof (struct node));
    ptr->data=data;
    ptr->next=head;
    p->next=ptr;
    head=ptr;
    return head;
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

printf("\n");
head=insertion_at_beg(head,10);
head=insertion_at_beg(head,20);
Travarsal(head);



return 0;
};