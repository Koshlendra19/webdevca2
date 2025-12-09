#include<stdio.h>
int main(){
    int size;
    printf("SIZE: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
}