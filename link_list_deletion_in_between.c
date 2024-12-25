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


struct node* deletion_in_between(struct node*head,int index){

    struct node *p = head;
    struct node *q ;
    int i=0;
    while (i!=index-1){
        p=p->next;
        i++;
    }
    q=p->next;

    p->next=q->next;
    free(q);
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
head=deletion_in_between(head,2);
Travarsal(head);



return 0;
};