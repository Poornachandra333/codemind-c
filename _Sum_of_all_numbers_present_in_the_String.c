#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%[^
]s",string);
    int num=0;
    for(int i=0;string[i]!=NULL;i++){
        if(string[i]>='0' && string[i]<='9'){
            num=num+string[i]-48;
        }
    }
    printf("%d",num);
}