#include <stdio.h>  
int main()  
{  
  char string1[20];   
  char string2[20];   
  int i=0,j=0;    
  char *str1;  
  char *str2;    
  str1=string1;  
  str2=string2;  
  printf("Enter the first string :");  
  scanf("%s",string1);  
  printf("\nEnter the second string:");  
  scanf("%s", string2);  
  while(string1[i]!='\0')  
  {  
        
     ++str1;  
     i++;  
  }  
  while(string2[j]!='\0')  
  {  
      *str1=*str2;  
      str1++;  
      str2++;  
      j++;  
  }  
  printf("The concatenated string is %s",string1);  
  
    return 0;  
}  
OUTPUT 
Enter the first string :hello

Enter the second string:world
The concatenated string is helloworld
