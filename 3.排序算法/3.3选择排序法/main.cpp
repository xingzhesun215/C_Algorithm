#include <stdio.h>
#include <stdlib.h>

void select(int *, int);
void showData(int *,int );



int main() {
    int data[]={16,25,39,27,12,8,63,45};
    int length= sizeof(data)/ sizeof(int);
    printf("原始数据\n");
    showData(data,length);
    printf("---------------------华丽分割线-------------------------\n");
    select(data,length);
    printf("---------------------华丽分割线-------------------------\n");
    showData(data,length);
    return 0;
}

void showData(int data[],int length){
    int i;

    for (i = 0; i < length; ++i) {
        printf("%3d",data[i]);
    }
    printf("\n");
}

void select(int data[],int length){
    int i,j,tmp;
    for (i = 0; i < length-1; i++) {
        for (j = i+1; j <length ; j++) {
            if(data[i]>data[j]){//把大位置的j交换小位置的i
                tmp=data[i];
                data[i]=data[j];
                data[j]=tmp;
            }
            showData(data,length);
        }
        showData(data,length);
    }
}