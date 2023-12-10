#include<stdio.h>
#include<string.h>
int main(){
    char s[1010],a[1010];
    int i,l,f=1;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        a[i]=s[l-i-1];
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=s[i]);
        f=0;
        break;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

