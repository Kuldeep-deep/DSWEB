#include<stdio.h>
#define m 3
// ENTER AN ARAY FROM USER AND PRINT ALL THE PALINDROM VALUES????

int main(){
    int arr[m];
    int i,j,s,n,t;
    for(i=0;i<m;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }
    printf("ALL PALINDROME NUMBERS ARE");
    for(i=0;i<m;i++){
    n=arr[i];
    s=0;
    while(n>0){
    t=n%10;
    s=s*10+t;
    n=n/10;  
   }
   if(s==arr[i]){
    printf("\n%d",arr[i]);
}
}
    getch();
    return 0;
    
}    
OUTPUT 
ENTER THE VALUES OF 0 INDEX 534
ENTER THE VALUES OF 1 INDEX 525
ENTER THE VALUES OF 2 INDEX 231
ALL PALINDROME NUMBERS ARE
525

