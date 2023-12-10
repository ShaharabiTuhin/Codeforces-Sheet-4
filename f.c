#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,n,l;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        //scanf(" %[^\n]",s);
        gets(s);
        if(strlen(s)<=10)
            printf("%s\n",s);
        else{
            l=strlen(s);
            //printf("%d",l);
            printf("%c%d%c",s[0],l-2,s[l-1]);
        }
    }
    return 0;
}
