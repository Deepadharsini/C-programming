#include<stdio.h>
#include<string.h>

int commonChar(char * arr1,char * arr2 ){
    int n=strlen(arr1);
     for(int i=0;i<n;i++){
        for(int j=0; j<strlen(arr2);j++){
            if(arr1[i]==arr2[j]){
                return 1;
            }
        }
     }
    return 0;
}
int maxProduct(char **arr,int n ){
    int prod=0;
    
    for(int i=0;i<n;i++){
        
       for(int j=i+1;j<n;j++){
           if(commonChar(arr[i],arr[j])==0){
           int  prodtemp=strlen(arr[i]) * strlen(arr[j]);
           if(prodtemp>prod){
           prod=prodtemp;
       }
       }
    }
    }
    return prod;
}
int main(){
    char* arr[]={"a","aa","aaa","aaaa"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(strlen(arr[i])<strlen(arr[j])){
              char *temp = arr[i];
              arr[i]= arr[j];
              arr[j] = temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    printf("%d",maxProduct(arr,n));
    return 0;
}