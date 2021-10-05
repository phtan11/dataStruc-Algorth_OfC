#include<stdio.h>
void swap(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;
}
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int key = a[i];
        int j=i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j=j-1;
        }      
        a[j+1] = key;
    }
}
void printtt(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[] ={8,2,6,1,7,4,9,3,5};//{0,1,2,3,4,5,6,7};//{6,-5,4,2,7,3,8,-9,5,9};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a,n);
    printtt(a,n);
}