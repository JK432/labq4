//Create a menu driven program to implement singly linklist operations for INSERTION DELETION SEARCH TRAVERSAL
//Algo
//step1:Create a derived datatype node using structure with members data and pointer next
//step2:intialize head pointer to store adress of first node
//step3:allocate memory dynamically for storing first node
//step4:scan data from keyboard and store it in newnode->data and store NULL in newnode->next
//step5:Reapeat step 2 to step 4 for n terms
//step6:store address of newnode in next part of previous node in each term;


//step7:allocate memory for newnode ,scan data from keybord and store it in newnode->data;
//step8:store head in newnode->next
//step9:store newnode in head

//step10:repeat step 7
//step11:intialize pointer temp and store head in it.
//step12:using whlie loop repeat temp=temp->next untill temp->next is equal to NULL
//step13:store newnode in temp->next
//step14:assign NULL to newnode-> next

//step15:repeat step7
//step16:Intialize Integer variyable pos, scan and store position from keyboard
//step17:repeat step11
//step18:for loop variyable i=0 to pos-1 do temp=temp-1
//step19:store temp->next in newnode->next
//step20:store newnode in temp->next

//step21:Intialize pointer temp and store head in it.
//step22:store temp->next in head
//step23:free temp

//step24:intialize pointer temp and temp1 store head in temp.
//step25:while temp->next!=NULL repeat temp1=temp and temp=temp->next 
//step26:free temp
//step27:store NULL in temp1->next

//step28:repeat step24
//step29:scan position from keyboard
//step30:for i = 0 upto i<pos repeat temp1=temp , temp=temp->next and increment i.
//step31:free temp
//step32:store NULL in temp1->next

//step33:intialize pointer temp and store head
//step34:scan search item from keyboard
//step35:if temp is equal to item print pos
//step36:temp=temp->next
//step37:repeat step 35,36 while temp!=NULL






#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node * next;
};

struct node *head;

//Intialisation
void Intial(){
  int i;
  do{
    struct node * newnode,*temp;
  int value;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("Enter the data");
  scanf("%d",&value);
  newnode->data=value;
  if(head==NULL){
    head=newnode;
  }
else{
  temp=head;
  while(temp->next!=NULL){
    temp=temp->next;    
  }
  temp->next=newnode;
  newnode->next=NULL;
    
}
    printf("\nDo u have another node (1=yes)");
    scanf("%d",&i);
  
 
  
    
  }while(i==1);
  
  
}
//Insertion at front
void IntFrnt(){
  struct node * newnode;
  int value;
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter data to place first: ");
  scanf("%d",&value);
  newnode->data=value;
  newnode->next=head;
  head=newnode;
  
}

//Insert at end
void IntEnd(){
  struct node *newnode,*temp;
  temp=head;
  int value;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data to be stored at last");
  scanf("%d",&value);
  newnode->data=value;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->next=NULL;
}
//Insert at Randam
void IntRan(){
  struct node *newnode,*temp;
  temp=head;
  int value,pos;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value to be added at pos");
  scanf("%d",&value);
  newnode->data=value;
  printf("\nEnter the position");
  scanf("%d",&pos);
  for(int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  newnode->next=temp->next;
  temp->next=newnode;
  
  
}
//DELETION
//from front
void DelFrnt(){
  struct node *temp=head;
  head=temp->next;
  free(temp);
}
//from rear
void Delrear(){
  struct node *temp=head,*temp1;
  while(temp->next!=NULL){
    temp1=temp;
    temp=temp->next;
  }
  free(temp);
  temp1->next=NULL;
  
  
}
//from between
void Delbet(){
  struct node *temp1,*temp;
  temp=head;
  int pos;
  printf("\nEnter the pos: ");
  scanf("%d",&pos);
  for(int i=0;i<pos;i++){
    temp1=temp;
    temp=temp->next;
  }
  temp1->next=temp->next;
  free(temp);
}

//SEARCH
void Search(){
  struct node *temp=head;
  int item,pos=0;
   printf("\nEnter the item");
  scanf("%d",&item);
  while(temp!=NULL){
    
    if(temp->data==item){
      printf("\nFount at %d",pos);
    }
    pos=pos+1;
    temp=temp->next;
  }
}

void Display(){
  struct node * temp;
  temp = head;
  printf("\nLinklist is : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  
}




int main(){
  Intial();
  Display();
  // IntFrnt();
  // Display();
  // IntEnd();
  // Display();
  // IntRan();
  // Display();
  //DelFrnt();
  //Delrear();
  // Delbet();
  // Display();
  Search();
  
  
  
}


//INSERTION
// At front
//


















