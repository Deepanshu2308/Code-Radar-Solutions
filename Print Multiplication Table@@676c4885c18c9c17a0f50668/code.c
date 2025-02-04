#include <stdio.h>
int main() {
    int a;
    scaanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,i*a);
    }
    return 0;
}