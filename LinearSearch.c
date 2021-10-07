#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,ele;
    printf("Enter Number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:\n");
    scanf("%d",&ele);
    int b=linear_search(a,ele,n);
    printf("%d",b);
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
