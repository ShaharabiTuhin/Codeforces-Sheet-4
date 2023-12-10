#include<stdio.h>
int main(){
    char A[20];
    int i,j,n,a,b,x,f=0;
    scanf("%d%d ",&a,&b);
    x=a+b+1;
    for(i=0;i<x;i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=0;i<x;i++)
    {
        if(A[i]>'0'&&A[i]<'9');
            f==1;
    }
    if(A[a]=='-'&&f==1)
        printf("Yes");
    else
         printf("No");
    return 0;
}
