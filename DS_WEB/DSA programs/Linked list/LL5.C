#include<stdio.h>
#include<conio.h>
struct node
{
int str[10];
struct node *next;
};
struct node *start=NULL,*newnode,*sort,*temp,*traverse,*ptr,*previous,*nextnode;
int insertbeg(int count)
{
if(start==NULL)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",&(newnode->str));
newnode->next=NULL;
start=newnode;
count++;
}
else
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",&(newnode->str));
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
scanf("%s",&(newnode->str));
newnode->next=NULL;
start=newnode;
count++;
}
else
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",&(newnode->str));
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
printf("Enter the string\n");
scanf("%s",&(newnode->str));
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
printf("Deleted string is %s",start->str);
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
printf("Deleted string is %s\n",temp->str);
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
printf("Delete string is %s\n",nextnode->str);
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
printf("\nString in linked list is %s",traverse->str);
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
int f=0,pos=1;
char search[10];
traverse=start;
printf("Enter the string you want to search\t");
scanf("%s",search);
traverse=start;
while(traverse!=NULL)
{
if(strcmp(traverse->str,search)==0)
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
char num[10];
int swapped;
do
{
swapped=0;
traverse=start;
while(traverse->next!=NULL)
{
if(strcmp(traverse->str,traverse->next->str)>0)
{
strcpy(num,traverse->str);
strcpy(traverse->str,traverse->next->str);
strcpy(traverse->next->str,num);
swapped=1;
}
traverse=traverse->next;
}
}while(swapped);
traverse=start;
while(traverse!=NULL)
{
printf("Sorted linked list is %s\n",traverse->str);
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