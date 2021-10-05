#include <stdio.h>

void merge(int a[],int low,int mid,int high){
    int i,j,k = low;
    // tim so element cho từng mảng
    int n1=mid-low+1; // element của mảng bên trái trước mid
    int n2=high -mid; // element của mảng bên phải sau mid
    
    // creat mang moi
    int a1[n1];
    int a2[n2];
    // chen value vao` new array
    for(int i=0; i<n1; i++){
        a1[i] = a[low+i];
    }
    for(int j=0; j<n2; j++){
        a2[j] = a[mid + j + 1]; // vi mang a1 da lay mid roi
    }
    // trộn 
    i = 0;j=0;
    while(i< n1 && j<n2){
        //a[k++] = (a1[i] <= a2[j])?a1[i++]:a2[j++];  // ngan gon
        if(a1[i] <= a2[j]){
            a[k] = a1[i];
            i++;
        }
        else{
            a[k] = a2[j];
        }
        k++;
    }
    while(i<n1){
        a[k] = a1[i];
        k++; i++;
    }
    while(j<n2){
        a[k] = a2[j];
        k++;j++;
    }
}
void mergeSort(int a[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
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
    mergeSort(a,0,n-1);
    printa(a,n);
}