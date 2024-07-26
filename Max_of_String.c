#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%[^
]s",string);
    char max=string[0];
    for(int i=0;string[i]!=NULL;i++){
        if(string[i]>max){
            max=string[i];
        }
    }
    printf("%c",max);
}