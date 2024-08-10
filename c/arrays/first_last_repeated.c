#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];

    scanf("%[^\n]s",str);
    
    char freq[256]={0};
   
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    printf("First_Non_Repeated:");
    for(int i=0;i<256;i++){
        if(freq[ (unsigned char)str[i]]==1){
            printf("%c\n",tolower(str[i]));
            break;
        }
    }
    printf("Last repeated:");
    for(int i=255;i>=0;i++){
        if(freq[(unsigned char)str[i]]>1){
            printf("%c\n",tolower(str[i]));
            break;
        }
    }
    
   return 0;
}