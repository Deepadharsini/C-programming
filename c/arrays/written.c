#include<stdio.h>
int main(){
    int arr[100],n,temp;
    scanf("%d",n);
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int start=arr[0];
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        if(arr[j]>arr[j+1]){
           temp = arr[j+1];
           arr[j+1]=arr[j];
           arr[j]=temp;
        }
        }
    }
    scanf("%s",arr);
    return 0;
}
