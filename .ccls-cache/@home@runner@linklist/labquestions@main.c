#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head=NULL, *temp;
// INTIALISATION
struct node *Intial() {
  int c;
  int value;
  printf("Intialize Linked list\n");

  do {
    printf("Enter the value ");
    scanf("%d", &value);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL) {
      head = newnode;
    } else {
      temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newnode;
    }

    printf("\nDo you want to add one more node (1=yes): ");
    scanf("%d", &c);
    
  } while (c == 1);

  return head;
}

//INSERTION
//INSERTION AT FROUNT
struct node * Intfront(struct node * head){
  int value;
  temp=head;
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data: ");
  scanf("%d",&value);
  newnode->data=value;
  newnode->next=head;
  head=newnode;
  return head;
  
}

//INSERTION AT LAST

void IntBack(struct node * head){
  int value;
temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  struct node * newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value: ");
  scanf("%d",&value);
  newnode->data=value;
  temp->next=newnode;
  newnode->next=NULL;


}

//INSERSTION AT RANDOM

void IntRan(struct node * head){

  temp=head;
  int pos,value;
  printf("\nEnter the position: ");
  scanf("%d",&pos);

  for(int i= 0;i<pos-1;i++){
    temp=temp->next;
  }
  struct node * newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value: ");
  scanf("%d",&value);
  newnode->data=value;
  newnode->next=temp->next;
  temp->next=newnode;  
}
//Deletion
//Deletion from front
struct node * Delfront(struct node * head){
  temp=head;
  if(head==NULL){
    printf("\nUnder flow");
  }else{
    head=temp->next;
    free(temp);
  }
  return head;
}
//Deletion from back
void Delback(struct node * head){
temp=head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }free(temp->next);
  temp->next=NULL;
  
  }

//DelfromRandom
void Delran(struct node * head){
  struct node * temp2;
  temp=head;
  int pos;
  printf("\nEnter the position: ");
  scanf("%d",&pos);
  for(int i=0;i<pos-1;i++)
    {
      temp=temp->next;
    }
  temp2=temp->next;
  temp->next=temp->next->next;
  free(temp2);
  
}
void Search(struct node *head){
  int item;
  printf("\nEnter the search item: ");
  scanf("%d",&item);
  temp=head;
  int i=0;
  while(temp!= NULL){
    if(temp->data==item){
      printf("\nfount at position %d\n",i);
     
    }
    temp=temp->next;
     i=i+1;
  }
}

void display(struct node * head){
  temp = head;
  if(head!=NULL){
    printf("\nLinklist is: ");
  }
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }

  
}
int main() {
  struct node *head;
  head = Intial();
  int choice,i;
  do{printf("MENU:\n1.Insert at beginig \n2.Insert at end,\n3.Insert at Random,\n4.Delete at beginig,\n5.Delete at last  \n6.Delete at random \n7.Search\n8.Dispaly\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        head=Intfront(head);
      break;
      case 2:
        IntBack(head);
        break;
      case 3:
        IntRan(head);
      break;
      case 4:
       head=Delfront(head);
       break;
      case 5:
       Delback(head);
      break;
      case 6:
       Delran(head);
       break;
      case 7:
       Search(head);
      break;
      case 8:
       display(head);
      break;
      default:
        printf("\nIncorrect input");
       
        
    }
    printf("\nDo you wish to do any other operations (1=Yes)");
     scanf("%d",&i);
    
    
  }while(i==1);


  // display(head);
  // head = Intfront(head);
  // display(head);
  // IntBack(head);
  // display(head);
  // IntRan(head);
  // display(head);
  // head=Delfront(head);
  // display(head);
  // Delback(head);
  // display(head);
  // Delran(head);
  // display(head);
  // Search(head);
}