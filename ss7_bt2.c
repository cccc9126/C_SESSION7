#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,a[5];
    for(int i=0;i<5;i++){
        printf("hay nhap so cho mang : ");
        scanf("%d", &a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
