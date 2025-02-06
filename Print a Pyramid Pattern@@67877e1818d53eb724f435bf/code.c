#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-1;j++){
        printf(" ");
    }
    for (int a=1;a<=2*i-1;a++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}