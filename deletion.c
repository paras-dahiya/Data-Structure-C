#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n+5];

    for(i=1;i<=n;i++){
        printf("Enter the %d element of the array: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int item;
    printf("Enter the element you want to delete: ");
    scanf("%d",&item);

    int k = 1;
    while(arr[k]!=item){
        k=k+1;
    }
    while(k<n){
        arr[k]=arr[k+1];
        k=k+1;
    }
    arr[n]=NULL;
    n=n-1;
    
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }

}