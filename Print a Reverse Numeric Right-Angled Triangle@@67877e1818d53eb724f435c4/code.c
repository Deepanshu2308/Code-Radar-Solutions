// Your code here...
#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1;
    for(int j=n-i+1;j>=1;j--){
    printf("%d ",a);
    a++;
    }
    
    printf("\n");

}

return 0;
}