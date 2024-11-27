#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[6]={1,2,3,4,5,6};
    int n=0;
    for(int i = 0;i<6;i++){
        printf("%d\n",a[i]);
        n++;
    }
    printf("do dai mang la %d", n);
    return 0;
}
