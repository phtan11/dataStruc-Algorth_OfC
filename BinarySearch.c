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
int binarySort(int a[],int n,int k){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid] < k){
            low =mid+1;
        }
        if(a[mid] > k){
            high = mid -1;
        }
        if(a[mid] == k){
            return mid;
        }
    }
    return -1;
}
void printtt(int a[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[] ={6,-5,4,2,7,3,8,-9,5,9};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    printf("enter value which u want:");
    scanf("%d",&k);
    selection(a,n);
    printtt(a,n);
    printf("\n");
    printf("k nam o vi tri %d",binarySort(a,n,k));
}