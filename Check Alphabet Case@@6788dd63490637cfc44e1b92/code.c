#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (int(a)<91){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }

        return 0;
}