#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
typedef struct node Node;
int main(int argc, char*argv[]){
	int i,val,num;
	Node *first,*current,*previous;
	printf("Number of nodes: ");
	scanf("%d",&num);
	 for( i=0;i<num;i++){	
	 	current=(node *) malloc (sizeof(Node)); // using malloc() to create new node
	 	printf("Data for node %d ",i+1);
	 	scanf("%d",&(current -> data)); // the data from the user's input
	 	if(i==0){
	 		first=current; 
		 }else {
		 		previous -> next= current;
		 }
		 current -> next = NULL;
		 previous= current;
	 }
	 current =first;
	 while(current!=NULL){
	 	printf("address = %p",current);// print the address of the node
		printf("data = %d ",current -> data); //print the data of the node
		printf(" next = %p \n ",current -> next); // print the address of the next node
		current= current-> next; //assign the ptr to the next node
	 }
}
