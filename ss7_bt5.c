#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[5] = {3, 5, 1, 10, 8};
    int i;
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            
        }if (arr[i] < min) {
                min = arr[i];
            }
        }
        printf("Phần tử lớn nhất trong mảng là: %d\n", max);
        printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);
        return 0;
    }

