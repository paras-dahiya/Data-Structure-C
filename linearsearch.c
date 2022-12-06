#include<stdio.h>

int main(){
    int n,i,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        printf("Enter the %d element of the array: ",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n Enter the element you want to search: ");
    scanf("%d",&key);
    
    for(i=1;i<=n;i++){
        if(arr[i]==key){
            break;
        }
    }

    if (i<n)
    {
        printf("%d is found at %d position",key,i);
    }
    else{
        printf("%d is not found",key);
    }

    
}