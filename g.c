#include<stdio.h>
#include<string.h>
int main(){
    char s[100010];
    int i,l;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;}
        else if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;}
        else if(s[i]==','){
            s[i]=' ';}
    }printf("%s",s);
    return 0;
}
