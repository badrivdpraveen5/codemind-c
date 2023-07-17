#include<stdio.h>
#include<string.h>
int main(){
    int t,r;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        char a[1000];
        scanf("%s",&a);
        r=1;
        for(int i=0;i<strlen(a);i++){
            if(a[i]<48 || a[i]>57){
                r=0;
                break;
            }
        }
        if(r)
            printf("True
");
        else
            printf("False
");
    }
}