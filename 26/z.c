#include <stdio.h>

int main(void) {
    int no, temp, arr[5000]; scanf("%d", &no), temp = no;

    for(int i = 0;temp > 0;i++) {
        arr[i] = temp - (temp /= 10) * 10;
        printf("%d", arr[i]);
    }
}