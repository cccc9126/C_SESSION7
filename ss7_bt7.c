#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int a[num];
    printf("hay nhap do dai mang ");
    scanf("%d",&num);
    int i=0;
    while(i<num){
        printf("hay nhap phan tu thu %d cho mang",i);
        scanf("%d", &a[i]);
        if(a[i]%2==1){
            i++;
        }
    }
    for(int i =0;i<num;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

