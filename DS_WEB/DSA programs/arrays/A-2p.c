#include<stdio.h>

// ENTER AN ARAY FROM USER AND PRINT ARAAY IN REVERSE ORDER ????

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }
printf("REVERSED ORDER ARRAY\n");
    for(i=4;i>=0;i--){
    printf(" %d",arr[i]);
    
}
    getch();
    return 0;
    
}    

OUTPUT 
ENTER THE VALUES OF 0 INDEX 5
ENTER THE VALUES OF 1 INDEX 4
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 2
ENTER THE VALUES OF 4 INDEX 1
REVERSED ORDER ARRAY
 1 2 3 4 5
