#include<stdio.h>

// ENTER AN ARAY FROM USER AND PRINT THE DUPLICATE VALUES????

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
    printf(" THE DUBLICATE VALUE OF THE ARRAY IS %d AT %dth INDEX ",arr[j],j);
}
}
}
    getch();
    return 0;
    
}    
OUTPUT 
ENTER THE VALUES OF 0 INDEX 5
ENTER THE VALUES OF 1 INDEX 4
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 3
ENTER THE VALUES OF 4 INDEX 2
 THE DUBLICATE VALUE OF THE ARRAY IS 3 AT 3th INDEX