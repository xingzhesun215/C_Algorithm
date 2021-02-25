#include <stdlib.h>
#include <stdio.h>

#define SIZE 8;

void inser(int *);

void showData(int *);


int main() {
    int data[] = {16, 25, 39, 27, 12, 8, 45, 63};
    printf("你输入的原始数据是:");
    showData(data);
    inser(data);
    printf("排序后的结果:");
    showData(data);
    return 0;
}

void showData(int data[]) {
    int i = 0;
    while (i != 8) {
        printf("%3d", data[i]);
        i++;
    }
    printf("\n");
}

void inser(int data[]) {
    int i;//
    int j;
    int tmp;
    for (i = 1; i < 8; i++) {
        tmp = data[i];
        j = i - 1;
        while (j >= 0 && tmp < data[j]) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = tmp;
        printf("第 %d 次扫描", i);
        showData(data);
    }
}

