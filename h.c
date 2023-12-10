#include<stdio.h>
#include<string.h>
int main(){
    char s[100010];
    int i,l,n,j,f;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        //printf("%d\n",n);
        gets(s);
        l=strlen(s);
        int f=0;
        for(i=0;i<l+2;i++)
        {
            if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
                f=1;
                break;
            }
            if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){
                f=1;
                break;
            }
        }
        if(f==1)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}
