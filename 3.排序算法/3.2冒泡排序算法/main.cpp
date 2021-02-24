#include <stdlib.h>
#include <stdio.h>

/**
 * 冒泡排序
 * 将最大/最小的值交换到最后面
 * @return
 */
int main() {

    int i,j,tmp;

    int data[]={16,25,39,27,12,8,45,63,2};
    int length=sizeof(data)/ sizeof(int);
    printf("原始数据\n");
    printf("\n第 %3d 次排序后的结果",0);
    for (int i = 0; i < length; ++i) {
        printf("%3d",data[i]);
    }
    printf("\n");
    //从小到大
    for (i = length-1;  i>0; i--) {//扫描次数
        for(j=0;j<i;j++){//比较和交换
            if(data[j]>data[j+1]){
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
        printf("\n第 %3d 次排序后的结果",length-i);
        for (int i = 0; i < length; ++i) {
            printf("%3d",data[i]);
        }


    }
    return 0;
}