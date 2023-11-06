#include<stdio.h>
#include<conio.h>
#include<string.h>

//  IMPLEMENT THE OPERATIONS OF SIMPLE QUEUES IN string ARRAY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

void sort(char[][3]);
int rear=-1;
int insert(char que[][3],int front)
{
char str[10];
if(rear==2)
{
printf("Queue is full\n");
}
else if(rear==-1 && front==-1)
{
front=rear=0;
printf("Enter the string\n");
scanf("%s",str);
strcpy(que[rear],str);
}
else
{
rear++;
printf("Enter the string\n");
scanf("%s",str);
strcpy(que[rear],str);
}
return front;
}
int del(char que[][3],int front)
{
char str[10];
if(front==-1)
{
printf("Queue is empty\n");
}
else if(front==rear)
{
strcpy(str,que[front]);
printf("Delete string is %s\n",str);
front=rear=-1;
}
else
{
strcpy(str,que[front]);
printf("Delete string is %s\n",str);
front++;
}
return front;
}
void peek(char que[][3])
{
char str[10];
if(rear==-1)
{
printf("Queue is empty\n");
}
else
{
strcpy(str,que[rear]);
printf("Top string in queue is %s\n",str);
}
}
void isempty(int front)
{
if(front==-1 || front>rear)
{
printf("Queue is empty\n");
}
else
{
printf("Queue is not empty\n");
}
}
void isfull(int size)
{
if(rear==size)
{
printf("Queue is full\n");
}
else
{
printf("Queue is not full\n");
}
}
int main()
{
int front=-1,ch;
char que[3][3];
while(1)
{
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Peek\n");
printf("4. isempty\n");
printf("5. Isfull\n");
printf("6. Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
front=insert(que,front);
break;
case 2:
front=del(que,front);
break;
case 3:
peek(que);
break;
case 4:
isempty(front);
break;
case 5:
isfull(29);
break;
case 6:
exit(1);
default:
printf("Enter the valid number\n");
}
}

     getch();
     return 0;
      
}
OUTPUT 
Enter your choice
3
Queue is empty
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
1
Enter the string
45
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
3
Top string in queue is 45
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit




















