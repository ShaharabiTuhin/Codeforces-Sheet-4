#include<stdio.h>
#include<string.h>
int main(){
    char fn[1000],ln[1000];
    int cntf,cntl;
    gets(fn);
    gets(ln);
    cntf=strlen(fn);
    cntl=strlen(ln);

    printf("%d %d\n%s %s",cntf,cntl,fn,ln);

    return 0;
}
