#include <stdio.h>
#include <string.h>

// thuat toan ktra chuoi 2 xuat hien may lan trong chuoi 1
int bruteForce(const char * des,const char *x,int n,int m){
    int j=0;
    int count =0;
    for(int i=0;i<=n-m;i++){
        for(j=0;j<m && x[j] == des[j+i];j++);
            if(j>=m){
                count++;
            }
    }
    return count;
}
int main(){
    const char *des = "ABCCBABC";
    const char *x ="BC";
    int n = strlen(des); printf("%d\n" , n);
    int m = strlen(x);printf("%d\n" , m);
    bruteForce(des,x,n,m);
    int s = bruteForce(des,x,n,m);
    printf("x xuat hien %d lan trong  chuoi des",s);
}