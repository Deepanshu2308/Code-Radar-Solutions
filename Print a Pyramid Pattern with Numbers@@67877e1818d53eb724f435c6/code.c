// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;n>=1;n--){
            printf(" ");
            for(int a=1;a<=i;a++){
                printf("%d",a);
            }
        }
        printf("\n");
        
    }
}