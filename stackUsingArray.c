#include<stdio.h>
int current_size=-1;
const int max_size=100;
int stack[max_size];
bool isEmpty(){
    return (current_size==-1);
}
bool isFull(){
    return (current_size==max_size);
}
void push(int data){ // truyền value vào stack
    if(!isFull()){
        current_size++;
        stack[current_size] = data;
        /*
		size ban dau la -1 va T1: sau do ktra if và thõa mản nên size++ lên =0 va truyền data vaò element đầu tiên  của stack->
		T2: ktra if y vayaj vaf tangw size len =1 va truyen data vao.
		T3: ktra if va tang size len bang 2 vaf truyen data vao.
		cuoi cung: current_size =2 va laf element cuoi cung cua array stack.
		*/
    }
    else{
        printf("stack is full\n");
    }
}
int top(){ //in ra phần tử cuối
    if(!isEmpty()){ 
        int data = stack[current_size]; //current_size=2 là phần tử cuối của mảng cho nên nó là (length-1)
        return data;
    }
    else{
        printf("stack is empty");
    }
}
int pop(){
    if(!isEmpty()){ // lấy phần tử cuối nhưng xóa nó ra khỏi stack
        int data = stack[current_size];
        current_size--; // sau khi in ra thì nó giảm curent size xuống còn 1.
        return data;
    }
    else{
        printf("stack is empty");
    }
}
int main(){
    push(100); //stack[0]
    push(-255);//stack[1]
    push(-20); // value này là top vì nó có element là 2 stack[2]
    printf("top: %d\n",top());
    pop(); // xoa stack[2] ra khoi stack va giam current size xuong còn 0
    printf("after pop:   ");
    printf("top: %d\n",top());
    while(!isEmpty()){
        int data = pop();
        printf("%d <--",data);
    }
    printf("\n");
}