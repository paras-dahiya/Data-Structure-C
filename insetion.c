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
    int item,loc;
    printf("Enter the element you want to insert: ");
    scanf("%d",&item);
    printf("Enter the location at which you want to insert the element: ");
    scanf("%d",&loc);

    int k = n;
    while(k>=loc){
        arr[k+1]=arr[k];
        k=k-1;
    }
    arr[loc]=item;
    
    for(i=1;i<=n+1;i++){
        printf("%d ",arr[i]);
    }

}