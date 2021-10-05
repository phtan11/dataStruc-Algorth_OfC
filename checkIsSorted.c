#include <stdio.h>
#define N 10
bool checkSorted(int a[],int pos){
    if(pos == N-1){ // nay ktra cho pos == N mà ko có false thì nó sẽ true
        return true;
    }
    else{
        if(a[pos] > a[pos +1]){
            return false;
        }
        else{
            return checkSorted(a,pos+1);
        }
    }
}
int main(){
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7,8,9};
    bool result =checkSorted(a,0); // 0 la gia tri dau tien cua array
    printf("%d",result);
}