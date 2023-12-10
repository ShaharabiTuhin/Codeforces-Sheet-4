#include<stdio.h>
#include<string.h>
int main(){
    char fn[30],ln[30];
    int cntf,cntl,ans;
    scanf("%s %s", fn, ln);
    ans=strcmp(fn,ln);
    //printf("%d",ans);
    if(ans<0)
    printf("%s",fn);
    else printf("%s",ln);

    return 0;
}
