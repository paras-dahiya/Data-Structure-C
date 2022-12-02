#include<stdio.h>
#define MAX_SIZE 1000
//Program to input element into array and print all the element
int main(){
    int arr[MAX_SIZE];
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
    return 0;
}
