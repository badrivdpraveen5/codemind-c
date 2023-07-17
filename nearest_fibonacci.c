#include<stdio.h>
#include<string.h>
int main(){
    int t,x=0,y=1,temp;
    scanf("%d",&t);
    while(1){
        temp=x;
        x=y;
        y=x+temp;
        if(x<t && y>t){
            if(t-x==y-t)
            printf("%d %d",x,y);
            else if(t-x>y-t)
            printf("%d",y);
            else
            printf("%d",x);
            break;
        }
    }
}