#include <bits/stdc++.h>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int c=1;
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        //cout << a[i];
        if(a[i]==' '&& a[i+1]>='a'){
            c++;
        }else if(a[i]==' '&& a[i+1]>='z'){
            c++;
        }else if(a[i]==' '&& a[i+1]>='A'){
            c++;
        }else if(a[i]==' '&& a[i+1]>='Z'){
            c++;
        }else if(a[i]=='!'&& a[i+1]>='a'){
            c++;
        }else if(a[i]=='!'&& a[i+1]>='z'){
            c++;
        }else if(a[i]=='!'&& a[i+1]>='A'){
            c++;
        }else if(a[i]=='!'&& a[i+1]>='Z'){
            c++;
        }else if(a[i]=='.'&& a[i+1]>='a'){
            c++;
        }else if(a[i]=='.'&& a[i+1]>='z'){
            c++;
        }else if(a[i]=='.'&& a[i+1]>='A'){
            c++;
        }else if(a[i]=='.'&& a[i+1]>='Z'){
            c++;
        }else if(a[i]=='?'&& a[i+1]>='a'){
            c++;
        }else if(a[i]=='?'&& a[i+1]>='z'){
            c++;
        }else if(a[i]=='?'&& a[i+1]>='A'){
            c++;
        }else if(a[i]=='?'&& a[i+1]>='Z'){
            c++;
        }else if(a[i]==','&& a[i+1]>='a'){
            c++;
        }else if(a[i]==','&& a[i+1]>='z'){
            c++;
        }else if(a[i]==','&& a[i+1]>='A'){
            c++;
        }else if(a[i]==','&& a[i+1]>='Z'){
            c++;
        }
    }cout<< c;
    return 0;
}
