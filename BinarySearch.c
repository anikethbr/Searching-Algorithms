#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,ele;
    printf("Enter Number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:\n");
    scanf("%d",&ele);
    int result=binary_search(a,ele,n);
    if(result==-1){
        printf("Element not found\n");
    }else{
        printf("Element found at position :%d\n",result);
    }
    return 0;
}
int binary_search(int arr[],int key,int size){
    int low=-1,end=size,mid;
    while(low+1!=end){
        mid=(low+end)/2;
        if(arr[mid]<=key)
        low=mid;
        else
        end=mid;
    }
    if(low>0 && arr[low]==key)
        return low;
    else
        return -1;
}
