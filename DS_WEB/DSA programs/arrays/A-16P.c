#include<stdio.h>

// ENTER TWO ARRAYS FROM USER CHECK THEY ARE SAME OR NOT???

int main(){
    int arr[5],arr2[5];
    int i,are;
    are=0;
    printf("ENTER THE FIRST ARRAY ---");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("ENTER THE SECOND ARRAY ---");
    for(i=0;i<5;i++){
    scanf("%d",&arr2[i]);
    }
    
    for(i=0;i<5;i++){
    if(arr[i]==arr2[i]){
    are=1;
    break;                    
    }
    }
    if(are==0){
    printf("ARRAYS ARE NOT SAME");
    }else{
          printf("ARRAYS ARE SAME");
    
}
    getch();
    return 0;
    
    }
    OUTPUT 
    ENTER THE FIRST ARRAY ---3
2
1
1
1
ENTER THE SECOND ARRAY ---3
2
1
1
1
ARRAYS ARE SAME


