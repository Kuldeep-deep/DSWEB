#include<stdio.h>
#include<conio.h>
struct node
{
struct node *previous;
int str[10];
struct node *next;
};
struct node *start=NULL,*last=NULL,*traverse,*newnode,*temp;
int insertatbeg(int count)
{
if(start==NULL)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",(newnode->str));
start=last=newnode;
start->previous=start->next=last->next=start;
count++;
}
else
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",(newnode->str));
newnode->next=start;
start->previous=newnode;
start=newnode;
last->next=start;
count++;
}
return count;
}
int insertatend(int count)
{
if(start==NULL)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",(newnode->str));
start=newnode;
start->previous=start->next=last->next=start;
count++;
}
else
{
traverse=start;
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",(newnode->str));
while(traverse->next!=start)
{
traverse=traverse->next;
}
traverse->next=newnode;
newnode->previous=traverse;
newnode->next=start;
last=newnode;
count++;
}
return count;
}
insertatpos(int count)
{
int pos,i;
printf("Enter the position \n");
scanf("%d",&pos);
if(pos<=0)
{
printf("Invalid position\n");
}
else if(pos==1)
{
insertatbeg(count);
}
else if(pos>count+1)
{
printf("Invalid position\n");
}
else if(pos==count)
{
insertatend(count);
}
else if(pos>=2 && pos<=count)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter the string\n");
scanf("%s",(newnode->str));
traverse=start;
for(i=1;i<pos-1;i++)
{
traverse=traverse->next;
}
newnode->next=traverse->next;
newnode->previous=traverse;
traverse->next=newnode;
count++;
}
return count;
}
int deleteatbeg(int count)
{
if(start==NULL)
{
printf("List is empty\n");
}
else if(start->next==start)
{
printf("Deleted string is %s\n",start->str);
free(start);
start=NULL;
count--;
}
else
{
temp=last=start;
printf("Deleted string is %s\n",temp->str);
while(last->next!=start)
{
last=last->next;
}
start=start->next;
last->next=start;
start->previous=start;
free(temp);
count--;
}
return count;
}
int deleteatend(int count)
{
if(start==NULL)
{
printf("List is empty\n");
}
else if(start->next==start)
{
printf("Deleted string is %s\n",start->str);
free(start);
start=NULL;
count--;
}
else
{
temp=start;
while(temp->next!=start)
{
last=temp;
temp=temp->next;
}
last->next=start;
printf("Delete string is %s\n",temp->str);
free(temp);
count--;
}
return count;
}
int deleteatpos(int count)
{
int pos,i;
printf("Enter the position\n");
scanf("%d",&pos);
if(start==NULL)
{
printf("List is empty\n");
}
else if(pos<=0)
{
printf("Invalid position\n");
}
else if(pos>count+1)
{
printf("Invalid position\n");
}
else if(pos==1)
{
deleteatbeg(count);
}
else if(pos==count)
{
deleteatend(count);
}
else if(pos>=2 && pos<=count)
{
traverse=start;
for(i=1;i<pos-1;i++)
{
traverse=traverse->next;
}
temp=traverse->next;
printf("Deleted string is %s\n",temp->str);
traverse->next=temp->next;
free(temp);
count--;
}
return count;
}
void traversing()
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
traverse=start;
printf("String in linked list is %s\n",traverse->str);
traverse=traverse->next;
while(traverse!=start)
{
printf("String in linked list is %s\n",traverse->str);
traverse=traverse->next;
}
}
}
void searching()
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
char search[10];
int pos=1,f=0;
printf("Enter the string you want to search\n");
scanf("%s",search);
traverse=start;
while(traverse->next!=start)
{
if(strcmp(traverse->str,search)==0)
{
f=1;
break;
}
traverse=traverse->next;
pos++;
}
if(strcmp(traverse->str,search)==0)
{
f=1;
}
if(f==1)
{
printf("%s is searched at location %d\n",search,pos);
}
else
{
printf("Item is not in the list\n");
}
}
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
void isempty()
{
if(start==NULL)
{
printf("List is empty\n");
}
else
{
printf("List is not empty\n");
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
while(traverse->next!=start)
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
while(traverse->next!=start)
{
printf("Sorted linked list is %s\n",traverse->str);
traverse=traverse->next;
}
printf("Sorted linked list is %s\n",traverse->str);
}
}
void main()
{
int ch,count=0;
while(1)
{
printf("\n1.Insert at beginning\n");
printf("2. Insert at end\n");
printf("3. Insert at position\n");
printf("4. Delete at beginning\n");
printf("5. Delete at end\n");
printf("6. Delete at position\n");
printf("7. Traversing\n");
printf("8. Isfull\n");
printf("9. Isempty\n");
printf("10. Total nodes\n");
printf("11. Searching\n");
printf("12. Sorting\n");
printf("13. Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
count=insertatbeg(count);
break;
case 2:
count=insertatend(count);
break;
case 3:
count=insertatpos(count);
break;
case 4:
count=deleteatbeg(count);
break;
case 5:
count=deleteatend(count);
break;
case 6:
count=deleteatpos(count);
break;
case 7:
traversing();
break;
case 8:
isfull();
break;
case 9:
isempty();
break;
case 10:
printf("Total nodes in doubly linked lists are %d\n",count);
break;
case 11:
searching();
break;
case 12:
sorting();
break;
case 13:
exit(1);
default:
printf("Enter the valid number\n");
}
}
}