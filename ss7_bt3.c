#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,7,5};
    int sum = 0;
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            printf("%d\n",a[i]);
            sum++;
        }
    }
    if (sum==0){
        printf("khong co so chan\n");
    }
    return 0;
}
