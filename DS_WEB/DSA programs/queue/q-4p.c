#include<stdio.h>
#include<stdlib.h>

//  IMPLEMENT THE OPERATIONS OF SIMPLE QUEUES IN INTEGER ARRAY BY DYNAMICALLY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

    struct node{
           char data[20];
           struct node *link;
           }*front,*rare;
  
      void insert(){
        
        struct node*temp =(struct node*)malloc(sizeof(struct node));
        printf("ENTER THE VALUE TO BE INSERETED\n");
        scanf("%s",temp->data);
         temp->link='\0';
        if(rare=='\0'){
        rare=front=temp;
        }
        else{
             rare->link=temp;
            rare=temp;
            }
    }
  
    void delete(){

    struct node *temp;
    temp = front;
    if (front=='\0')
    {
        printf("queue is empty \n");
        front = rare = '\0';
    }
    else
    {    
        printf("deleted element is %s\n",front->data);
        front = front->link;
        free(temp);
    }
}
  
      
      
 int main(){
     
   int choice, value;
 
    while(1)
    {
        printf("enter the choice \n");
        printf("1 : insert\n");
        printf("2 : delete\n");
        printf("3 : exit\n");
        scanf("%d", &choice);
        switch (choice)    
        {
    
        case 1:    
            insert();
            break;
        case 2: 
            delete();
            break;
        case 3:
             exit(1);
            break;
        default: 
            printf("wrong choice\n");
            break;
        }
    
}
     getch();
     return 0;
      }
OUTPUT 
enter the choice
1 : insert
2 : delete
3 : exit
1
ENTER THE VALUE TO BE INSERETED
32
enter the choice
1 : insert
2 : delete
3 : exit
2
deleted element is 32
enter the choice
1 : insert
2 : delete
3 : exit



















