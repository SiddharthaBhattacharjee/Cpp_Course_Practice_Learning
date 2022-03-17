#include <stdio.h>
int main(){
    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    if(n%a==0){
        n = n/a;
    }
    else{
        n=(n/a)+1;
    }
    if(m%a==0){
        m = m/a;
    }
    else{
        m=(m/a)+1;
    }
    printf("%d",n*m);
    return 0;
}