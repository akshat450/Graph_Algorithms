#include<iostream>
using namespace std;
int main()
{
	struct node{
		int x;
		node *next;
	};
	node* head;
	head=NULL;
	node* temp;
	temp=new node;
	temp->x=100;
	temp->next=NULL;
	cout<<temp->x <<" ";
}
