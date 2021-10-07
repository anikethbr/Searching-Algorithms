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
    int result=linear_search(a,ele,n);
    if(result==-1){
        printf("Element not found\n");
    }else{
        printf("Element found at position :%d\n",result);
    }
    return 0;
}
int linear_search(int arr[],int key,int size){
    int pos=0;
    while(pos<size&&arr[pos]!=key){
        pos++;
    }
    if(pos<size)
        return pos;
    return -1;
}
