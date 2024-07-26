#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%[^
]s",string);
    int length=strlen(string);
    printf("%d",length);
}