#include <stdio.h>
void selection(int a[],int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(a[min_index] > a[j]){
                min_index = j;
            }
        }
        int s = a[min_index];
        a[min_index] = a[i];
        a[i] = s;
    }
}
int BinSearUsinRecursion(int a[],int low,int high,int k){
    if(low<=high){
        int mid = (low+high)/2;
        if(a[mid] == k){ return mid;}
        if(a[mid] > k){
            return BinSearUsinRecursion(a,low,mid-1,k);
        }
        if(a[mid] < k){
           return BinSearUsinRecursion(a,mid+1,high,k);
        }
    }
    return -1;
}
void printtt(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[] = {6,-5,4,2,7,3,8,-9,5,9};
    int n = sizeof(a) / sizeof(a[0]);
    selection(a,n);
    printtt(a,n);
    int k;
    printf("\nnhap k:"); scanf("%d",&k);
    int o = BinSearUsinRecursion(a,0,n-1,k);
    if(o != -1){
      printf("k nam o %d",o);  
    }
    else{
        printf("co cai nit");
    }
}