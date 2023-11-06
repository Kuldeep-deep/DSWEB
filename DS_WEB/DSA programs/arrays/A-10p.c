#include<stdio.h>

// ENTER AN ARAY FROM USER AND ADD ALL THE VALUES????

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }

    
    printf(" %d",arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);


    getch();
    return 0;
    
}    
OUTPUT 
ENTER THE VALUES OF 0 INDEX 5
ENTER THE VALUES OF 1 INDEX 4
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 2
ENTER THE VALUES OF 4 INDEX 1
 15
