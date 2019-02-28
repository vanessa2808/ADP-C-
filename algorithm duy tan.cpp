#include<stdio.h>
struct node{
		int data;
		struct node*next;	
};
typedef struct node Node;

int main(){
	Node a,b,c;
	Node *ptr = &a; // crr=ptr=current=poiter
	a.data=7;
	a.next=&b;
	b.data=3;
	b.next=&c;
	c.data=14;
	c.next=NULL;
	
	while(ptr != NULL){
		printf("address = %p",ptr);// print the address of the node
		printf("data = %d ",ptr ->data); //print the data of the node
		printf(" address =%p \n ",ptr -> next); // print the address of the next node
		ptr= ptr -> next; //assign the ptr to the next node
		
	}
}
