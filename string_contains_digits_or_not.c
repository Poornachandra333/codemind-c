#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char string[100];
    scanf(" %[^
]s",string);
    int flag=0;
    for(int i=0;string[i]!=NULL;i++){
        if(string[i]>='0' && string[i]<='9'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Yes
");
    }
    else{
        printf("No
");
    }
    }
}