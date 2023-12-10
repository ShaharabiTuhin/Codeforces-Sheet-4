#include<stdio.h>
#include<string.h>
int main(){
    int i,sum=0;
    char s[1000000];
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        sum+=s[i]-48; //or -'0';
        //printf("%d ",sum);
    }
    printf("%d",sum);
    return 0;
}
