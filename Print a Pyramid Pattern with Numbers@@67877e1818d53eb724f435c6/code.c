// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n-i+1;j++){
            printf(" ");
        }
            for(int a=1;a<=i;a++){
                printf("%d ",a);
            }
        printf("\n");
        
    }
}