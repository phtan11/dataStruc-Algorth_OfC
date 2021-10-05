#include<stdio.h>
void swap(int *a,int *b){
    int s = *a;
    *a=*b;
    *b=s;
}
int printion(int a[],int low,int high){
    int p = a[high];
    int i = low -1;
    for(int j=low;j<high;j++){
        if(a[j] < p){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return (i+1);
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int pi = printion(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
void printa(int a[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[] = {10, 80, 30, 90, 40, 50, 70}; //int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    printa(a,n);
}