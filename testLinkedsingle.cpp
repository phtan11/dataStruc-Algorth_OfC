#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	node *next;
};
int main(int argc, char** argv) {
	node *first = new node();
	first->data =1;
	first->next =NULL;
	
	node *second = new node();
	second->data = 2;
	second->next = NULL;
	
	node *third = new node();
	third->data = 3;
	third->next = NULL;
	
	//lien ket voi nhau
	first->next = second;
	second->next=third;
	
	//test
	int data = first->data;
	cout<<"data of first:"<<data<<endl;
	cout<<"data of second:"<<second->data<<endl;
	node *p = first;
	while(p!=NULL){
		data = p->data;
		cout<<data<<"-->";
		p=p->next;
		if(p==NULL){
			cout<<"NULL";
		}
	}
	
	return 0;
}
