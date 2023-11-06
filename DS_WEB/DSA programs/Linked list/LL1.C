#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL,*newnode,*sort,*temp,*traverse,*ptr,*previous,*nextnode;
int insertbeg(int count)
{
if(start==NULL)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&(newnode->data));
newnode->next=NULL;
start=newnode;
count++;
}
else
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&(newnode->data));
newnode->next=start;
start=newnode;
count++;
}
return count;
}
int insertend(int count)
{
if(start==NULL)
{
newnode=(struct node*) malloc(sizeof(struct node));
scanf("%d",&(newnode->data));
newnode->next=NULL;
start=newnode;
count++;
}
else
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&(newnode->data));
newnode->next=NULL;
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
count++;
}
return count;
}
int insertpos(int count)
{
int pos,i;
printf("Enter the position\n");
scanf("%d",&pos);
if(pos<=0)
{
printf("Invalid position\n");
}
else if(pos==count+1)
{
insertend(count);
}
else if(pos>count+1)
{
printf("Invalid position\n");
}
else if(pos==1)
{
insertbeg(count);
}
else if(pos>=2 && pos<=count)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&(newnode->data));
traverse=start;
for(i=1;i<pos-1;i++)
{
traverse=traverse->next;
}
newnode->next=traverse->next;
traverse->next=newnode;
count++;
}
return count;
}
int deletebeg(int count)
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
temp=start;
printf("Deleted item is %d",start->data);
start=start->next;
free(temp);
count--;
}
return count;
}
int deleteend(int count)
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
temp=start;
while(temp->next!=NULL)
{
previous=temp;
temp=temp->next;
}
printf("Deleted item is %d\n",temp->data);
previous->next=NULL;
free(temp);
count--;
}
return count;
}
int deletepos(count)
{
int pos,i;
printf("Enter the position you want to delete\n");
scanf("%d",&pos);
if(start==NULL)
{
printf("List is empty\n");
}
else if(pos<=0)
{
printf("Invalid position\n");
}
else if(pos==1)
{
deletebeg(count);
}
else if(pos>count+1)
{
printf("Invalid position\n");
}
else if(pos==count+1)
{
deleteend(count);
}
else if(pos>=2 && pos<=count)
{
temp=start;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
nextnode=temp->next;
printf("Delete item is %d\n",nextnode->data);
temp->next=nextnode->next;
free(nextnode);
count--;
}
return count;
}
void isfull()
{
newnode=(struct node*) malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("List is full\n");
}
else
{
printf("List is not full\n");
}
}
void display()
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
traverse=start;
while(traverse!=NULL)
{
printf("\nData in linked list is %d",traverse->data);
traverse=traverse->next;
}
}
}
void isempty()
{
if(start==NULL)
{
printf("List is empty\n");
}
}
void searching()
{
int search,f=0,pos=1;
traverse=start;
printf("Enter the item you want to search\t");
scanf("%d",&search);
while(traverse->next!=NULL)
{
if(traverse->data==search)
{
f=1;
break;
}
traverse=traverse->next;
pos++;
}
if(f==1)
{
printf("Item is found at %d loc\n",pos);
}
else
{
printf("Item is not found\n");
}
}
void sorting()
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
int num;
traverse=start;
while(traverse!=NULL)
{
nextnode=traverse->next;
while(nextnode!=NULL)
{
if(traverse->data>nextnode->data)
{
num=traverse->data;
traverse->data=nextnode->data;
nextnode->data=num;
}
nextnode=nextnode->next;
}
traverse=traverse->next;
}
traverse=start;
while(traverse!=NULL)
{
printf("Sorted linked list is %d\n",traverse->data);
traverse=traverse->next;
}
}
}
void main()
{
int ch,count=0;
while(1)
{
printf("\n1. Insert at beg\n");
printf("2. Insert at end\n");
printf("3. Insert at pos\n");
printf("4. Delete at beg\n");
printf("5. Delete at end\n");
printf("6. Delete at pos\n");
printf("7. Isempty\n");
printf("8. Isfull\n");
printf("9. Display\n");
printf("10. Searching\n");
printf("11. Sorting\n");
printf("12. Total nodes\n");
printf("13. Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
count=insertbeg(count);
break;
case 2:
count=insertend(count);
break;
case 3:
count=insertpos(count);
break;
case 4:
count=deletebeg(count);
break;
case 5:
count=deleteend(count);
break;
case 6:
count=deletepos(count);
break;
case 7:
isempty();
break;
case 8:
isfull();
break;
case 9:
display();
break;
case 10:
searching();
break;
case 11:
sorting();
break;
case 12:
printf("Total node in linked list is %d\n",count);
break;
case 13:
exit(1);
default:
printf("Enter the valid data\n");
}
}
}
OUTPUT 
1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice
1
Enter the data
54

1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice
1
Enter the data
57 

1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice
1
Enter the data
3

1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice
3
Enter the position
5
Invalid position

1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice
12
Total node in linked list is 3

1. Insert at beg
2. Insert at end
3. Insert at pos
4. Delete at beg
5. Delete at end
6. Delete at pos
7. Isempty
8. Isfull
9. Display
10. Searching
11. Sorting
12. Total nodes
13. Exit
Enter your choice