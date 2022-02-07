#include<stdio.h>
void swap(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;
}


// void bubbleSort(int a[],int n){ // be den lon
//     for(int i=0; i<n-1; i++){
//         for(int j=n-1;j>i;j--){
//             if(a[j] < a[j-1]){
//                 swap(&a[j], &a[j-1]);
//             }
//         }
//     }
// }
// void bubbleSort(int a[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(a[j] > a[j+1]){
//                 swap(&a[j], &a[j+1]);
//             }
//         }
//     }
// }

        // selection sort

// void selectionSort(int a[],int n){
//     for(int i=0; i<n-1; i++){
//         int max_index = i;
//         for(int j=i+1;j<n;j++){
//             if(a[max_index] < a[j]){
//                 max_index = j;
//             }
//         }
//         swap(&a[max_index], &a[i]);
//     }

     
// merge sort
// void merge(int a[],int low,int mid,int high){
//     int i,j,k = low;
//     int n1 = mid-low+1;
//     int n2 = high -mid;
//     int L[n1];
//     int R[n2];
//     for(i = 0; i < n1; i++){
//         L[i] = a[low +i];
//     }
//     for(j =0;j<n2;j++){
//         R[j] = a[mid + j+1];
//     }
//     i=0;j=0;
//     while(i<n1 && j<n2) {
//         if(L[i] >= R[j]){
//             a[k] = L[i];
//             i++;
//         }else{
//             a[k] = R[j]; j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         a[k]= L[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         a[k] = R[j]; j++; k++;
//     }
// }
// void mergeSort(int a[],int low,int high){
//     if(low<high){
//         int mid =(low+high)/2;
//         mergeSort(a,low,mid);
//         mergeSort(a,mid+1,high);
//         merge(a,low,mid,high);
//     }
// }  

     // quick Sort

int parttition(int a[],int low,int high){
    int pivot = a[high]; // nghĩa là làm trụ.
    int i = low -1; // chon la truc
    for(int j=low;j<high;j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int pivot= parttition(a,low,high);
        quickSort(a,low,pivot-1); // before pi
        quickSort(a,pivot+1,high); // after pi
    }
}
void printtt(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    // int a[] ={8,2,6,1,7,4,9,3,5};//{0,1,2,3,4,5,6,7};//{6,-5,4,2,7,3,8,-9,5,9};
    int a[] ={13,17,1,4,2,9,7,6,10,15};//{0,1,2,3,4,5,6,7};//{6,-5,4,2,7,3,8,-9,5,9};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a,0,n-1);
    printtt(a,n);
}
1	4	2	6	7	9	10	13	15	17
0   1   2   3   4   5   6    7   8   9
