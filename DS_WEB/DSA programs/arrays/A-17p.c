#include<stdio.h>
#include<conio.h>
#define s1 50
#define s2 50
     
// MERGE THE TWO SORETED ARRAY  INTO ONE AARAY BUT IN SORTED FORM ???
void merge_sort(int *,int,int *,int,int *);
void merge_sort(int arr1[],int s1,int arr2[],int s2,int arr3[]){

       int i,j,k;
       i=0;
       j=0;
       k=0;
       while(i<s1 && j<s2){

         if(arr1[i]<arr2[]){

           arr3[k]=arr1[i];
           i++;
           }
           else{
                arr3[k]=arr2[j];
                j++;
            }
                k++;
            }  
                
         while(i<s1){
                arr3[k]=arr1[i];
                i++;
                k++;    
         } 
          while(i<s2){
                arr3[k]=arr2[j];
                j++;
                k++;    
         }       
         }          
                
         
int main(){
    int arr1[s1],arr2[s2],arr3[s1+s2];
    int i,j,k;
    int asize,bsize;
    printf("ENTER THE SIZE OF 1 ARRAY\n ");
    scanf("%d",&asize);
    printf("\n ENTER %d ELEMENTS FOR SORTED ARRAY 1 \n",asize);
     for(i=0;i<asize;i++){
     scanf("%d",&arr1[i]);
    }
    printf("ENTER THE SIZE OF 2 ARRAY\n ");
    scanf("%d",&bsize);
    printf("\n ENTER %d ELEMENTS FOR SORTED ARRAY 2 \n",bsize);
     for(j=0;j<bsize;j++){
     scanf("%d",&arr2[j]);
    }
   merge_sort(arr1,asize,arr2,bsize,arr3);
   
   printf("\n SORTED LIST ");
    for(k=0;k<asize+bsize;k++){
    printf(" %d",arr3[k]);
    
}
    getch();
    return 0;
    
}    
