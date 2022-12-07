#include<stdio.h>
int main(){
    int arr[] = {10,21,40,50,57,46};
    //To get size of the array 
    int n = sizeof(arr)/ sizeof(arr[1]);
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}