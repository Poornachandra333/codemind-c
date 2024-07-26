#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%[^
]s",string);
    int i;
    int length=strlen(string);
    int j=length-1;
    for(i=0;i<j;i++){
        int temp=string[i];
        string[i]=string[j];
        string[j]=temp;
        j--;
    }
    
    puts(string);
}