#include<stdio.h>
#include<conio.h>
#define n 100

//  IMPLEMENT THE OPERATIONS OF CIRCULAR QUEUES IN STRING ARRAY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

   char q[n],item;
   int front,rare;
   
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
        
        
   void insert(char item){
        if(front==-1 && rare==-1)
        {
        front=rare=0;
        q[rare]=item;
        }
        else if(((rare+1)%n)==front){
        isfull();
        }
        else{
             
             rare=(rare+1)%n;;
            q[rare]=item;
    }
  
}
    void delet(){
        if(front==-1 && rare==-1){
        isempty();
        }
        else if(front==rare){
        front=rare=-1;
        }else{
        printf("%s",q[front]);
        front=(front+1)%n;
        }
}  

  void peek(){
      
         if(front==-1 &&rare==-1){
         isempty();
        }
         else{
         printf("%s",q[front]);
              }
      }
      

    int main(){
    int ch;
    front=rare=-1;
    
    while(1){
             
    printf("\n ENTER THE CHOICE YOU WANT TO PERFORM \n");
    printf("\n 1 INSERT");
    printf("\n 2 DELETE");
    printf("\n 3 PEEK");
    printf("\n 4 EXIT");
    printf("\n ENTER YOUR CHOICE\n");
    scanf("%d",&ch);
    switch(ch){
    
    case 1:
          printf("\n ENTER THE ELEMENT");
          scanf("%s",&item);
          insert(item);
          break;
    
    case 2:
         delet();
         
             break;
             
     case 3:
           peek();
           break;
           
      case 4:
           exit(1);
           break;
           
       default:
                printf("\n INVALID CHOICE"); 
       }
       } 
     getch();
     return 0;
      
}




















