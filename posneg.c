//Program to count no. of positive and number
#include<stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]={};
    int i,N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    
    for(i=0;i<N;i++){
        printf("Enter %d elements in the array: ",i+1);
        scanf("%d",&arr[i]);  
    }

    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
    int pos_count = 0;
    int neg_count = 0;
    for(i=0;i<N;i++){
        if(arr[i]>0){
            pos_count++;
        }
        else{
            neg_count++;
        }
    }

    printf("There are %d positive number ",pos_count);
    printf("There are %d negative number ",neg_count);
    return 0;   
}