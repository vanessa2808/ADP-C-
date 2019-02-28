#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
//Node *createList(int *,int);
//Node maxNumber(int *,int);
//Node reserveNode(int *, int);
void *insertNode(Node *, int);
Node *createList(int *arr,int len){
	int i;
	Node *first,*current,*previous;
	for( i=0;i<len;i++){	
	 	current=(Node *) malloc (sizeof(Node)); // using malloc() to create new node
	 	current -> data=arr[i];
	 	if(i==0){
	 		first=current; 
		 }else {
		 		previous -> next= current;
		 }
		 current -> next = NULL;
		 previous= current;
	 }
	 return first;
	 }
Node printList(Node *first){
	Node *node=first;
	if(first==NULL){	
		printf("empty");
	}else {
		while(node!=NULL){
			printf("%3d", node -> data);
			node=node -> next;
		}
		printf("\n");
	}
}
Node maxNumber(int *arr,int len){
		int max=arr[0];
		int index=0;
		for(int i=0;i<len;i++){
			if(max<arr[i]) {
			max=arr[i];
			index=i;
			}
		}
		printf("\n max = %d \n", max);
		printf("\n index = %d \n ", index);
}
// min
Node minNumber(int *arr,int len){
		int min=arr[0];
		int index=0;
		for(int i=0;i<len;i++){
			if(min>arr[i]) {
			min=arr[i];
			index=i;
			}
		}
		printf("\n min = %d \n", min);
		printf("\n index = %d \n ", index);
}
// insert a node
void *insertNode(Node *node, int item){
	Node *newnode;
	newnode=(Node *) malloc(sizeof(Node));
	newnode -> data= item;
	newnode -> next= node ->next;
	node -> next = newnode;
}
// remove a node
Node *deleteNode(Node *first, Node *node){
	Node* ptr =first;
	if(first== NULL){
		printf("Nothing to delete!  \n");
		return NULL;
	}
	if(node== first){
		first= first -> next;
	}else{
		while(ptr ->next != node){
			ptr= ptr -> next;
		}
		ptr -> next = node -> next;
	}
	free(node);
	return first;
}
int main(int argc, char *argv[]){
	Node *first,*node;
	int arr[]={12,88,57,5};
	first=createList(arr,4);
	printList(first);
//	maxNumber(arr,4);
//	minNumber(arr,4);
	//stem("PAUSE");
	first =deleteNode(first,first);
	printList(first);
	
	first =deleteNode(first,first);
	printList(first);
	free(first);
	insertNode(node, 4);
	printList(first);
	
}
