#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b=0;
    for(int i=2;i<a;i++){
        if(a%i==0)
            b=1;
    }
    if(b==1)
        printf(" Not Prime");
    else
        printf("Prime");
    return 0;
}