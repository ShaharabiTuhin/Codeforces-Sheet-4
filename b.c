#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];

    scanf("%[^\\]",s);

    printf("%s",s);

    return 0;
}

