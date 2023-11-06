#include<stdio.h>

// ENTER AN ARAY FROM USER AND REMOVE THE DUBLICATE VALUES WITH 0????

int main(){
    int arr[5];
    int i,j;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
    if(arr[i]==arr[j]){
     arr[j]=0;
}
}
}for(i=0;i<5;i++){
printf("%d",arr[i]);
}
    getch();
    return 0;
    
}    
OUTPUT 
ENTER THE VALUES OF 0 INDEX 5
ENTER THE VALUES OF 1 INDEX 3
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 2
ENTER THE VALUES OF 4 INDEX 1
53021

