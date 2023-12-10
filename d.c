#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10],c[10],t;
    scanf("%s%s",a,b);
    printf("%d %d\n",strlen(a),strlen(b));
    strcpy(c,a);
    strcat(a,b);
    printf("%s\n",a);
    t=c[0];
    c[0]=b[0];
    b[0]=t;
    printf("%s %s\n",c,b);
    return 0;
}
