#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int ispal(char * str,int start,int end){
    for(int i=start;i<end;i++){
        for(int j=end;j>=0;j--){
            if(str[i]!=str[j]){
                start = i+1;
                end= j-1;
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    char str[100];
    scanf("[^\n]s",str);
    for(int i=0;i<strlen(str);i++){
       for(int j=strlen(str)-1;j>=0;j--){
           if(str[i]==str[j]){
             int start = i;
             int end = j;
             if(ispal(str,start,end)){
                  for(int i=start;i<=end;i++){
                    printf("%c",str[i]);
                  }
             }
       } 
    }
    }
    return 0;
}