#include <stdio.h>

void selectionSort1(int a[],int n){ // tu be->lon
    int min_index =0;
    for(int i=0;i<n;i++){
        min_index = i;
        for(int j=i+1;j<n;j++){
            if(a[min_index] > a[j]){
                min_index = j;
            }
        }
        int swap = a[min_index];
        a[min_index] = a[i];
        a[i] =swap;
    }
}
void selectionSort2(int a[],int n){ // tu lon->be
    int min_index =0;
    for(int i=0;i<n;i++){
        min_index = i;
        for(int j=i+1;j<n;j++){
            if(a[min_index] < a[j]){
                min_index = j;
            }
        }
        int swap = a[min_index];
        a[min_index] = a[i];
        a[i] =swap;
    }
}

void printa(int a[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[] = {6,9,4,2,7,3,8,-9,5,9};
    int len = sizeof(a)/sizeof(int);
    selectionSort1(a,len);
    printa(a,len);
    printf("\n");
    selectionSort2(a,len);
    printa(a,len);
}