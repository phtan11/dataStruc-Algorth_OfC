#include <stdio.h>
//C1 : bubble ngược
void bubbleSort1(int a[],int n){ //sap xep tu be den lon 
    for(int i = 0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j] <a[j-1]){
                int swap = a[j];
                a[j] = a[j-1];
                a[j-1] = swap;
            }
        }
    }
}

void bubbleSort2 (int a[],int n){ //sap xep tu lown den be
    for(int i = 0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j] >a[j-1]){
                int swap = a[j];
                a[j] = a[j-1];
                a[j-1] = swap;
            }
        }
    }
}
 

 //C2  // bubble xuôi
 void bubbleSort3(int a[],int n){ // thap den lon
     for(int i = 0;i<n-1;i++){
         for(int j=0;j<n-1-i;j++){
            if(a[j] >a[j+1]){
                int swap = a[j];
                a[j] =a[j+1];
                a[j+1] = swap;
            }
         }
     }
 }

 void bubbleSort4(int a[],int n){ // lon den thap
     for(int i = 0;i<n-1;i++){
         for(int j=0;j<n-1-i;j++){
            if(a[j] < a[j+1]){
                int swap = a[j];
                a[j] =a[j+1];
                a[j+1] = swap;
            }
         }
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
    bubbleSort4(a,len);
    printa(a,len);
}