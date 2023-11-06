#include<stdio.h>
#include<conio.h>
#define n 3

//  IMPLEMENT THE OPERATIONS OF DOUBLE ENDED QUEUES IN STRING ARRAY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

  int front,rare;
  char q[n],item;
  
  int isfull(){
      
        if(q[rare]==q[n-1]){
        printf("QUEUE IS FULL ");
        }
        else{
             return 0;
        }
    }
        
    int isempty(){
        
        if(q[rare]==q[front]){
        printf("QUEUE IS empty");
        }
        else{
             return 0;
        }
    }
      
       void insert_front(int item){
        if((front==0 && rare==n-1) || (front==rare+1)){
            isfull();
        }
       else if(front==-1 && rare==-1){
        rare=front=0;
        q[front]=item;
        }
        else if(front==0){
             front=n-1;
            q[front]=item;
            }
        else{
             front--;
             q[front]=item;
    }
}  
        
   void insert_rare(int item){
        if((front==0 && rare==n-1)||(front==rare+1)){
       isfull();
        }
       else if(rare==-1 && front==-1){
        rare=front=0;
        q[rare]=item;
        }
        else if(rare==n-1){
             rare=0;
            q[rare]=item;
            }
            else{
                 rare++;
                  q[rare]=item;
                }
    }
  
    
    void delet_front(){
        if(front==-1 && rare==-1){
      isempty();
        }
        else if(front==rare){
        front=rare=-1;
        }
        else if(front==n-1){
        printf("%c",q[front]);
        front=0;
        }
        else{
        printf("%c",q[front]);
        front++;
             }
}  
   
    void delet_rare(){
        if(front==-1 && rare==-1){
        isempty();
        }
        else if(front==rare){
        front=rare=-1;
        }
        else if(rare==0){
        printf("%c",q[rare]);
        rare=n-1;
        }
        else{
        printf("%c",q[rare]);
        rare--;
             }
} 


 void peek(){
      
         if(front==-1 &&rare==-1){
         isempty();
        }
         else{
         printf("%c",q[front]);
              }
      }
      
      
 int main(){
    front=rare=-1;
    int ch;
    while(1){
      printf("\n ENTER THE CHOICE YOU WANT TO PERFORM \n");
      printf("\n 1 INSERT_RARE");
      printf("\n 2 DELETE_front");
      printf("\n 3 INSERT_front");
      printf("\n 4 DELETE_rare");
      printf("\n 5 PEEK");
      printf("\n 6 EXIT");
      printf("\n ENTER YOUR CHOICE\n");
      scanf("%d",&ch);
    switch(ch){
    
    case 1:
          printf("\n ENTER THE ELEMENT");
          scanf("%c",&item);
          insert_rare(item);
          break;
    
    case 2:
         delet_front();
             break;
             
    case 3:
          printf("\n ENTER THE ELEMENT");
          scanf("%c",&item);
          insert_front(item);
          break;
          
    case 4:
         delet_rare();
             break;
            
     case 5:
          peek(2);
            break;
             
      case 6:
           exit(1);
           break;
           
       default:
                printf("\n INVALID CHOICE"); 
       }
       } 
     getch();
     return 0;
      
}




















