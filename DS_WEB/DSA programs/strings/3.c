#include<stdio.h>
int main(){
    int i;
    char str[100];
    printf("Enter the string :");
    gets(str);
    if(str[0]>='a'&&str[0]<'z')
        str[0]-=32;
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    printf("\nString in sentence case is :%s",str);
    return 0;
}
OUTPUT 
Enter the string :heLLO WORLd

String in sentence case is :Hello world