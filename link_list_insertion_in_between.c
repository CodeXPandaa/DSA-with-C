#include <stdio.h>
#include <stdlib.h>


struct node {
    int data ;
    struct node *next ;

}*head,*second,*third,*fourth;

void Travarsal( struct node *ptr){
    while(ptr != NULL){
        printf("element : %d \n", ptr->data);
        ptr=ptr->next;
    }
}


struct node* insertion_in_between(struct node*head,int data ,int index  ){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while (i!=index-1){
        p=p ->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
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
fourth->next=NULL;


Travarsal(head);
printf("\n");
head=insertion_in_between(head, 99, 3);
Travarsal(head);



return 0;
};