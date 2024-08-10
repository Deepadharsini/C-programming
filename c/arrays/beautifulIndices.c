#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>                                                 //wrong
int substring(char * word,char * string){
     int start=0,end=0;
     char res[100];
     for(int i=0;i<strlen(word);i++){
     for(int j=end;j<strlen(string);j++){
         if(word[i]==string[j]){
            res[i]=string[j];
            if(start==0){
            start=j;
            }
            end=j+1;
            break;
         }
     }
   }
   if(strcmp(word,res)==0){
       return start;
   }
   return 0;
}
int main(){
   char str[100],a[100],b[100];
   int k;
   scanf("%[^\n]s",str);
   scanf("%[^\n]s",a);
   scanf("%[^\n]s",b);
   scanf("%d",&k);
   int a = substring(a,str);
   int b = substring(b,str);
   if(a-b<=k){
    printf("%d",a);
   }
    return 0; 
}