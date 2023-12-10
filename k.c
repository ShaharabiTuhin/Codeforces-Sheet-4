#include<stdio.h>
#include<string.h>
int main(){
    int i,x,j,n,y,z;
    char s[60],t[60];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%s %s",s,t);
        y=strlen(s);
        z=strlen(t);
        if(y<z){
            for(i=0;s[i]!='\0';i++){
                printf("%c%c",s[i],t[i]);
                x=i;
            }
            for(i=x+1;t[i]!='\0';i++){
                printf("%c",t[i]);
            }
        }else{
            for(i=0;t[i]!='\0';i++){
                printf("%c%c",s[i],t[i]);
                x=i;
            }
            for(i=x+1;s[i]!='\0';i++){
                printf("%c",s[i]);
            }
        }printf("\n");
    }
    return 0;
}
