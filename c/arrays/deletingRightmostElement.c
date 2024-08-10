#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];
    char s3[100];
    char res[100];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    int i=0;
    int count=0;
   if(strcmp(s1,s2)==0 && strcmp(s1,s3)==0){
       printf("0");
       return 0;
   }
   if(s1[0]!=s2[0] && s1[0]!=s3[0]){
       printf("-1");
       return 0;
   }
   int n1=strlen(s1);
   int n2=strlen(s2);
   int n3=strlen(s3);
   int index=0;
   int min = n1<n2 ?(n1<n3 ? n1:n3):(n2<n3 ? n2:n3) ;
   for(int i=0;i<min;i++){
        if(s1[i]==s2[i] && s1[i]==s3[i]){
            index++;
        }
        else break;
   }
   count = (n3-index)+(n2-index)+(n1-index);
   printf("%d",count);
   return 0;
}