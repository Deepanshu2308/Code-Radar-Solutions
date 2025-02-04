#include <stdio.h>
int main() {
    int a,sum;
    scanf("%d",&a);
    sum=0;
    while(a>0){
    sum=sum+a;
    a=a-1;
    }
    printf("%d",sum);
    return 0;
}