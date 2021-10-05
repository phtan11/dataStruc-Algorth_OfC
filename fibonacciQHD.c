#include <stdio.h>
#include <string.h>
unsigned long long tmp[200];

void init(){
    for(int i=0; i<200;i++){
        tmp[i]=-1;
    }
}
int fiboQHD(int n){
    if(tmp[n]==-1){
        if(n<=1){
            tmp[n] = n;
        }
        else{
            tmp[n] = fiboQHD(n -1) + fiboQHD(n-2);
        }
    }
    return tmp[n];
}
int main(){
    init();
    printf("%d ",fiboQHD(90));
}