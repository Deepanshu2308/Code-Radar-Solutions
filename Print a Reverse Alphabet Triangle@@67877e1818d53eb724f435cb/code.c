// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=n;j>=1;n--){
            printf("%c",a);
            a++;
        }
    printf("\n");
    }
}