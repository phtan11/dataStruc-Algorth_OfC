#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node{
	int data;
	Node *next;
};
typedef struct Node *stack;
bool isEmpty(stack s){
	return s==NULL;
}
Node *creatNode(int data){
	Node *p =new Node() ;
	if(p==NULL){
		return NULL;
	}
	else{
		p->data=data;
		p->next = NULL;
	}
	return p;
}
void push(stack &s,int data){
	Node *ptr = creatNode(data);
	if(isEmpty(s)){
		s=ptr;
	}
	else{
		ptr->next =s;
		s=ptr;
	}
}
int top(stack s){
	if(!isEmpty(s)){
		return s->data;
	}
	else{
		cout<<"stack is empty"<<endl;
	}
}
int pop(stack &s){ // remove
	if(!isEmpty(s)){
		int data = s->data;
		Node *x =s;
		s=s->next;
		delete(x);
		return data;
	}
	else{
		cout<<"stack is empty"<<endl;
	}
}
int main(int argc, char** argv) {
	stack s;
	push(s,100);
	push(s,-999);
	push(s,-45);
	push(s,-88);
	cout<<"top:"<<top(s)<<endl;
	pop(s);
	cout<<"top:"<<top(s)<<endl;
	while(!isEmpty(s)){
		int data = top(s);
		pop(s);
		cout<<data<<"<---";
	}
	cout<<endl;
	return 0;
}
